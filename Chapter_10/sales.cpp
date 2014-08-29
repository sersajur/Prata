#include "sales.h"
#include <iostream>
namespace SALES
{
	Sales::Sales():
	m_sales{}
	{
		m_average = m_max = m_min = 0.0;
	}
	Sales::Sales(const double ar[], int n)
	{
		double sum = 0.0;
		m_min = m_max = n ? ar[0] : 0.0;
		int i = 0;
		while (i < n && i < QUARTERS)
		{
			m_sales[i] = ar[i];
			sum += m_sales[i];
			if (m_min > m_sales[i])
				m_min = m_sales[i];
			if (m_max < m_sales[i])
				m_max = m_sales[i];
			i++;
		}
		m_average = i ? sum/i : 0;
		while (i < QUARTERS)
			m_sales[i++] = 0;
	}
	void Sales::SetSales()
	{
		double value_arr[QUARTERS];
		std::cout << "Please, enter the sales:\n";
		for (int i = 0; i < QUARTERS; i++)
		{
			std::cout << "for " << i + 1 << " quarter: ";
			while (!(std::cin >> value_arr[i]))
			{
				std::cin.clear();
				while (std::cin.get() != '\n')
					continue;
				std::cout << "Bad input! Please, enter a number: ";
			}
		}
		*this = Sales(value_arr, QUARTERS);
	}
	void Sales::ShowSales() const
	{
		std::cout << "sales: ";
		for (int i = 0; i < QUARTERS; i++)
			std::cout << m_sales[i] << ' ';
		std::cout << std::endl;
		
		std::cout << "average: " << m_average << std::endl;
		std::cout << "max: " << m_max << std::endl;
		std::cout << "min: " << m_min << std::endl;	
	}
}