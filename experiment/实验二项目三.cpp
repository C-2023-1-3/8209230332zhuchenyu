#include<iostream>
using namespace std;
int main() {
	double a, b, c, l;
	cout << "�����������ε�����a,b,c" << endl;
    cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	if ((a+b)<c||(b+c)<a||(a+c)<b) {
		cout << "�����߲�����������";

	}
	else {
		l = a + b + c;
		cout << "�����߹��������Σ����ܳ�Ϊ" << l<<endl;
		if ((a==b)||(a==c)||(b==c)) {
			cout << "��������Ϊ����������";
		}
		else {
			cout << "�������β�Ϊ����������";
		}
		return 0;


	}
}