#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;
int parseHex(const char* const hexString)
{
	int a;
	a = strlen(hexString);
	int sum = 0, n = 0;
	for (int i = 0; i < a; i++)
	{
		if (hexString[i] >= 65 && hexString[i] <= 70)
		{
			n = (hexString[i] - 55) * pow(16, a - i - 1);
		}
		else
		{
			n = (hexString[i] - 48) * pow(16, a - i - 1);
		}
		sum = sum + n;
	}
	return sum;
}
int main()
{
	const int size = 999;
	char s[size];
	cout << "please input a number:";
	cin.getline(s, size);
	cout << parseHex(s);
	return 0;
}
