#include<iostream>
using namespace std;
int main() {
	double a, b, c, l;
	cout << "请输入三角形的三边a,b,c" << endl;
    cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	if ((a+b)<c||(b+c)<a||(a+c)<b) {
		cout << "该三边不构成三角形";

	}
	else {
		l = a + b + c;
		cout << "该三边构成三角形，且周长为" << l<<endl;
		if ((a==b)||(a==c)||(b==c)) {
			cout << "此三角形为等腰三角形";
		}
		else {
			cout << "此三角形不为等腰三角形";
		}
		return 0;


	}
}