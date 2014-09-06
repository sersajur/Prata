#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>
class Stonewt
{
public:
	enum Mode{STONE, POUNDS_INT, POUNDS_FL};
private:
	enum{Lbs_per_stn = 14};
	Mode mode;
	int stone;
	double pds_left;
	double pounds;
public:
	Stonewt(double lbs, Mode m = POUNDS_FL);
	Stonewt(int stn, double lbs, Mode m = POUNDS_FL);
	Stonewt();
	~Stonewt();
	void Set_mode(Mode m);
	Stonewt operator+(const Stonewt & st) const;
	Stonewt operator-(const Stonewt & st) const;
	Stonewt operator*(double a) const;
	bool operator<(const Stonewt & st) const { return pounds < st.pounds;}
	bool operator<=(const Stonewt & st) const { return pounds <= st.pounds;}
	bool operator>(const Stonewt & st) const { return pounds > st.pounds;}
	bool operator>=(const Stonewt & st) const { return pounds >= st.pounds;}
	bool operator==(const Stonewt & st) const { return pounds == st.pounds;}
	bool operator!=(const Stonewt & st) const { return pounds != st.pounds;}
	friend Stonewt operator*(double a, const Stonewt & st){ return st * a; }
	friend std::ostream & operator<<(std::ostream & os, const Stonewt & st);
};
#endif

