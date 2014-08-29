#ifndef PLORG_H_
#define PLORG_H_
class Plorg
{
private:
	enum{NAME_SIZE = 19, DEF_CI = 50};
	char m_name[NAME_SIZE + 1];
	int m_CI;
public:
	Plorg(const char* name = "Plorga");
	void SetCI(int CI);
	void Report() const;
};
#endif