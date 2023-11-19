#include<iostream>
using namespace std;
int main()
{
	char a;
	cout << "ÇëÊäÈë×Ö·û" << endl;
	cin >> a;
	if (a <= 'z' && a >= 'a') {
		a = a - 32;
		cout << a;
	}
	else {
		int b = a+1;
		cout << b;
	}
	return 0;

}