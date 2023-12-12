#include<iostream>
using namespace std;
int main()
{
	bool a[100];
	const int s = 100;
	int y;
	for (int z = 0; z < 100; z++)
	{
		a[z] = 0;
	}
	for (int i = 1; i <= s; i++)
	{
		for (int x = i - 1; x < 100; x = x + i)
		{
			if (a[x] == 0)
			{
				a[x] = 1;
			}
			else
			{
				a[x] = 0;
			}
		}
	}
	for (y = 0; y < 100; y++)
	{
		if (a[y] == 1)
		{
			cout << y + 1 << " ";
		}
	}
	return 0;
}
