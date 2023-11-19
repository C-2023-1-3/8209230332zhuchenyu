#include<iostream>
using namespace std;
int main()
{
	double a = 2, b = 0.8, c = 0, d = 0, e;
	for (a = 2; a <= 100; a = a * 2)
	{
		c = c + a * b;
		d++;
	}
	e = c / d;
	cout << "平均值为：" << e << endl;
	return 0;
}