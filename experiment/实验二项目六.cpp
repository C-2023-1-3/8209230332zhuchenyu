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
			cout << "���Լ��Ϊ��" << b << endl;
			break;
		}
		a = b;
		b = c;
	} while (c != 0);
	e = e / b;
	cout << "��С������Ϊ��" << e << endl;
	return 0;
}