#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	char x;
	cout << "ÇëÊäÈëÒ»´®ÈÎÒâ×Ö·û£º \n";
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
	cout << "Ó¢ÎÄ×ÖÄ¸ :" << a << endl;
	cout << "¿Õ¸ñ :" << b << endl;
	cout << "Êý×Ö×Ö·û :" << c << endl;
	cout << "ÆäËû×Ö·û :" << d << endl;
}
