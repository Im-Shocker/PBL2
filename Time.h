#include <iostream>
using namespace std;
class Time {
	string tm;
public:
	Time();
	Time(string);
	friend ostream& operator << (ostream&, const Time&);
};