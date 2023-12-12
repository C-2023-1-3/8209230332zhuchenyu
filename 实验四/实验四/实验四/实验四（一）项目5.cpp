#include<iostream>
#include<cstring>
using namespace std;
int indexOf(const char str1[], const char str2[])
{
	int a, b;
	a = strlen(str1);
	b = strlen(str2);
	if (a > b)
	{
		return -1;
	}
	for (int i = 0; i <= b - a; i++)
	{
		for (int q = 0; q < a; q++)
		{
			if (q == a - 1 && str1[q] == str2[i + q]) {
				return i;
			}
			if (str1[q] != str2[i + q])
			{
				break;
			}
		}
	}
	return -1;
}
int main()
{
	const int size = 999;
	char str1[size], str2[size];
	cout << "Enter the first string:" << endl;
	cin.getline(str1, size);
	cout << "Enter the second string:" << endl;
	cin.getline(str2, size);
	cout << "indexOf(¡°" << str1 << "¡±, ¡°" << str2 << "¡±) is" << indexOf(str1, str2);
	return 0;
}
