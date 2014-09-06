#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>
class Complex
{
private:
	double m_re;
	double m_im;
public:
	Complex();
	Complex(double re, double im);
	Complex operator~() const;
	Complex operator+(const Complex & c) const;
	Complex operator-(const Complex & c) const;
	Complex operator*(const Complex & c) const;
	Complex operator*(double mul) const;
	friend Complex operator*(double mul, const Complex c) { return c * mul; }
	friend std::istream & operator>>(std::istream & is, Complex & c);
	friend std::ostream & operator<<(std::ostream & is, const Complex & c);
};
#endif