#include <cmath>
#include "vect.h"
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;
namespace VECTOR
{
	const double Rad_to_deg = 45.0 / atan(1.0);
	
	void Vector::set_mag()
	{
		m_mag = sqrt(m_x * m_x + m_y * m_y );
	}
	void Vector::set_ang()
	{
		if (m_x == 0.0 && m_y == 0.0)
			m_ang = 0.0;
		else
			m_ang = atan2(m_y, m_x);
	}
	void Vector::set_x()
	{
		m_x = m_mag * cos(m_ang);
	}
	void Vector::set_y()
	{
		m_y = m_mag * sin(m_ang);
	}
	Vector::Vector()
	{
		m_x = m_y = m_mag = m_ang = 0.0;
		m_mode = RECT;
	}
	Vector::Vector(double n1, double n2, Mode form)
	{
		m_mode = form;
		if (form == RECT)
		{
			m_x = n1;
			m_y = n2;
			set_mag();
			set_ang();
		}
		else if (form == POL)
		{
			m_mag = n1;
			m_ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "Incorrect 3rd argument to Vector() -- ";
			cout << "vector set to 0\n";
			m_x = m_y = m_mag = m_ang = 0.0;
			m_mode = RECT;
		}
	}
	void Vector::reset(double n1, double n2, Mode form)
	{
		m_mode = form;
		if (form == RECT)
		{
			m_x = n1;
			m_y = n2;
			set_mag();
			set_ang();
		}
		else if (form == POL)
		{
			m_mag = n1;
			m_ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "Incorrect 3rd argument to Vector() -- ";
			cout << "vector set to 0\n";
			m_x = m_y = m_mag = m_ang = 0.0;
			m_mode = RECT;
		}
	}
	Vector::~Vector()
	{
	}
	void Vector::polar_mode()
	{
		m_mode = POL;
	}
	void Vector::rect_mode()
	{
		m_mode = RECT;
	}
	Vector Vector::operator+(const Vector & b) const
	{
		return Vector(m_x + b.m_x, m_y + b.m_y);
	}
	Vector Vector::operator-() const
	{
		return Vector(-m_x, -m_y);
	}
	Vector Vector::operator*(double n) const
	{
		return Vector(n * m_x, n * m_y);
	}
	Vector operator*(double n, const Vector & a)
	{
		return a * n;
	}
	std::ostream & operator<<(std::ostream & os, const Vector & v)
	{
		if (v.m_mode == Vector::RECT)
			os << "(x,y) = (" << v.m_x << ", " << v.m_y << ")";
		else if (v.m_mode == Vector::POL)
		{
			os << "(m,a) = (" << v.m_mag << ", "
			   << v.m_ang * Rad_to_deg << ")";
		}
		else
			os << "Vector object mode is invalid";
		return os;
	}
}