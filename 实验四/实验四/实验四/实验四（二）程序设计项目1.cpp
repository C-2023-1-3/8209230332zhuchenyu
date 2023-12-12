#include<iostream>
#include<cstring>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	int a, b;
	a = strlen(s1);
	b = strlen(s2);
	if (a > b)
	{
		return -1;
	}
	for (int i = 0; i < b - a; i++)
	{
		for (int p = 0; p < a; p++)
		{
			if (p == a - 1 && s1[p] == s2[i + p])
			{
				return i;
			}
			if (s1[p] != s2[i + p])
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
	char l1[size], l2[size];
	cout << "enter the first string:";
	cin.getline(l1, size);
	cout << "enter the second string:";
	cin.getline(l2, size);
	cout << "indexOf(¡°" << l1 << "¡±, ¡°" << l2 << "¡±) is" << indexof(l1, l2);
	return 0;
}
