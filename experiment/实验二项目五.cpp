#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	char x;
	cout << "������һ�������ַ��� \n";
	while ((x = getchar()) != '\n')
	{
		if (x >= 'a' && x <= 'z' || x >= 'A' && x <= 'Z')
		{
			a++;
		}
		else if (x == ' ')
		{
			b++;
		}
		else if (x >= '0' && x <= '9')
		{
			c++;
		}
		else
		{
			d++;
		}
	}
	cout << "Ӣ����ĸ :" << a << endl;
	cout << "�ո� :" << b << endl;
	cout << "�����ַ� :" << c << endl;
	cout << "�����ַ� :" << d << endl;
}
