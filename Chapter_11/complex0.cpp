#include "complex0.h"
Complex::Complex()
{
	m_re = m_im = 0.0;
}
Complex::Complex(double re, double im)
{
	m_re = re;
	m_im = im;
}
Complex Complex::operator~() const
{
	return Complex(m_re, -m_im);
}
Complex Complex::operator+(const Complex & c) const
{
	return Complex(m_re + c.m_re, m_im + c.m_im);
}
Complex Complex::operator-(const Complex & c) const
{
	return Complex(m_re - c.m_re, m_im - c.m_im);
}
Complex Complex::operator*(const Complex & c) const
{
	return Complex(m_re * c.m_re - m_im * c.m_im, m_re * c.m_im + c.m_re * m_im);
}
Complex Complex::operator*(double mul) const
{
	return Complex(m_re * mul, m_im * mul);
}
std::istream & operator>>(std::istream & is, Complex & c)
{
	double re, im;
	std::cout << "real: ";
	if (!(is >> re))
		return is;
	std::cout << "imaginary: ";
	if (!(is >> im))
		return is;
	c = Complex(re, im);
	return is;
}
std::ostream & operator<<(std::ostream & os, const Complex & c)
{
	os << '(' << c.m_re << ',' << c.m_im << "i)";
	return os;
}