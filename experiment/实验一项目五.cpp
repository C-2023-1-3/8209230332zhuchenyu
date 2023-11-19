#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double F, C;
	cout << "ÇëÊäÈë»ªÊÏÎÂ¶È" << endl;
	cin >> F ;
	C = (F - 32) / 1.8;
	cout << "ÉãÊÏÎÂ¶È=" <<fixed<<setprecision(2)<<C;
	return 0;
}