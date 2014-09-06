#include "stonewt.h"
Stonewt::Stonewt()
{
	stone = pounds = pds_left = 0;
	mode = POUNDS_FL;
}
Stonewt::Stonewt(double lbs, Mode m)
{
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
	mode = m;
}
Stonewt::Stonewt(int stn, double lbs, Mode m)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
	mode = m;
}
Stonewt::~Stonewt()
{
}
void Stonewt::Set_mode(Mode m)
{
	mode = m;
}
Stonewt Stonewt::operator+(const Stonewt & st) const
{
	return Stonewt(pounds + st.pounds);
}
Stonewt Stonewt::operator-(const Stonewt & st) const
{
	return Stonewt(pounds - st.pounds);
}
Stonewt Stonewt::operator*(double a) const
{
	return Stonewt(pounds * a);
}

std::ostream & operator<<(std::ostream & os, const Stonewt & st)
{
	switch(st.mode){
	case Stonewt::STONE: 
		os << st.stone << " stones";
		break;
	case Stonewt::POUNDS_INT:
		os << int(st.pounds) << " full pounds";
		break;
	case Stonewt::POUNDS_FL:
		os << st.pounds << " pounds";
		break;
	default:
		os << "Unknown stonewts mode.";
	}
	return os;
}
