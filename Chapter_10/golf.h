#ifndef GOLF_H_
#define GOLF_H_

class Golf
{
private:
	static const int Len = 40;
	char m_fullname[Len];
	int m_handicap;
public:
	Golf(const char * name = "", int hc = 0);
	int SetGolf();
	void Handicap(int hc);
	void ShowGolf() const;
};
#endif