#include "Time.h"

Time::Time()
{
}
Time::Time(string tm)
{
	while (tm[0] == ' ') tm.erase(0, 1);
	if (tm[2] != '/') tm = "0" + tm;
	if (tm[5] != '/') tm.insert(3, "0");
	this->tm = tm;
}
ostream& operator<<(ostream& o, const Time& t)
{
	o << t.tm;
	return o;
}
