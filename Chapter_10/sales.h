#ifndef SALES_H_
#define SALES_H_
namespace SALES
{
	class Sales
	{
	private:
		static const int QUARTERS = 4;
		double m_sales[QUARTERS];
		double m_average;
		double m_max;
		double m_min;
	public:
		Sales();
		Sales(const double ar[], int n);
		void SetSales();
		void ShowSales() const;
	};
}
#endif