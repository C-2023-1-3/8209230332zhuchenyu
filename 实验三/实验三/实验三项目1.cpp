#include<iostream>
using namespace std;
int yue(int a, int b) {
	int c;
	if (a < b) {
		c = a;
		a = b;
		b = c;
		
	}
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}
int bei(int a, int b) {
	int d;
	int e;
	int f;
	d = yue(a, b);
	e = a * b;
	f = e / d;
	return f;
}
int main() {
	int a;
	int b;
	cin >> a >> b;
	 cout<<"���Լ��Ϊ��" << yue(a, b)<<endl;
	 cout << "��С������Ϊ��" << bei(a, b);
}
