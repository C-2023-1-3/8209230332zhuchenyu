#include<iostream>
using namespace std;
const int a = 999;
void count(const char s[], int counts[])
{
	int k = 0, j = 0;
	for (int i = 0; i < 26; i++)
	{
		counts[i] = 0;
	}
	for (k = 0; k < a; k++)
	{
		if ((s[k] <= 90) && (s[k] >= 65))
		{
			counts[s[k] - 65] += 1;
		}
		else if ((s[k] <= 122) && (s[k] >= 97))
		{
			counts[s[k] - 97] += 1;
		}
	}
	for (j = 0; j < 26; j++)
	{
		if (counts[j] != 0)
		{
			int m = j + 97;
			cout << char(m) << ":" << counts[j] << "times" << endl;
		}
	}
}
int main()
{
	char s[a];
	cout << "Enter a string:" << endl;
	cin.getline(s, a);
	int counts[26];
	count(s, counts);
	return 0;
}
