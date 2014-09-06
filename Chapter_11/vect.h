#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
namespace VECTOR{
class Vector
{
public:
	enum Mode {RECT, POL};
private:
	double m_x;
	double m_y;
	double m_mag;
	double m_ang;
	Mode m_mode;
	
	void set_mag();
	void set_ang();
	void set_x();
	void set_y();
public:
	Vector();
	Vector(double n1, double n2, Mode form = RECT);
	void reset(double n1, double n2, Mode form = RECT);
	~Vector();
	double xval() const { return m_x;}
	double yval() const {return m_y;}
	double magval() const {return m_mag;}
	double angval() const {return m_ang;}
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