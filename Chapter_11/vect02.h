#ifndef VECTOR02_H_
#define VECTOR02_H_
#include <iostream>
#include <cmath>
namespace VECTOR{
class Vector
{
public:
	enum Mode {RECT, POL};
private:
	double m_x;
	double m_y;
	Mode m_mode;
	
	void set_x(double mag, double ang);
	void set_y(double mag, double ang);
public:
	Vector();
	Vector(double n1, double n2, Mode form = RECT);
	void reset(double n1, double n2, Mode form = RECT);
	~Vector();
	double xval() const { return m_x; }
	double yval() const { return m_y; }
	double magval() const { return std::sqrt(m_x * m_x + m_y * m_y); }
	double angval() const { return (m_x || m_y) ? std::atan2(m_y, m_x) : 0.0; }
	void polar_mode();
	void rect_mode();
	Vector operator+(const Vector & b) const;
	Vector operator-(const Vector & b) const;
	Vector operator-() const;
	Vector operator*(double n) const;
	friend Vector operator*(double n, const Vector & a);
	friend std::ostream & operator<<(std::ostream & os, const Vector & v);
};
}
#endif