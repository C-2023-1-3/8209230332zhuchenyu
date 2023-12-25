#include<iostream>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int sec;
public:
	void seth()
	{
		cin >> hour;
	}
	void setm()
	{
		cin >> minute;
	}
	void sets()
	{
		cin >> sec;
	}
	int geth() {
		return hour;
	}
	int getm() {
		return minute;
	}
	int gets() {
		return sec;
	}

};
int main()
{
	Time t1;
	t1.seth();
	t1.setm();
	t1.sets();
	cout << t1.geth() << ":" << t1.getm() << ":" << t1.gets();
	return 0;
}
