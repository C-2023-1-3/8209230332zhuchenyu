#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a, b, c;
	cout << "����������:";
	cin >> a;
	b = a;
	c = (b + a / b) / 2;
	do
	{
		b = c;
		c = (b + a / b) / 2;
	} while (c - b < -0.00001 || c - b > 0.00001);
	cout << "ƽ����Ϊ" << setprecision(5) << c << endl;
	return 0;
}
