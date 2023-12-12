#include<iostream>
using namespace std;
bool is_prime(int m)
{
	int n;
	for (n = 2; n < m; n++)
	{
		if (m % n == 0)
		{
			return false;
		}
	}
	return true;
}
void fun(int s=200)
{
	int c = 1, d = 2;
	while (c <= s)
	{
		if (is_prime(d) == 1)
		{
			if (c % 10 == 0)
			{
				cout << '\t' << d << endl;
			}
			else
			{
				cout << '\t' << d;
			}
			c++;
		}
		d++;
	}
}
int main()
{
	int x, y;
	cout << "ÇëÊäÈëÊý×Ö:";
	cin >> x;
	cout << is_prime(x) << endl;
	fun();
	return 0;
}
