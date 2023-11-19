#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, e;
	cin >> a >> b;
	if (b > a)
	{
		d = a;
		a = b;
		b = d;
	}
	e = a * b;
	do {
		c = a % b;
		if (c == 0)
		{
			cout << "最大公约数为：" << b << endl;
			break;
		}
		a = b;
		b = c;
	} while (c != 0);
	e = e / b;
	cout << "最小公倍数为：" << e << endl;
	return 0;
}