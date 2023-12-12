#include<iostream>
#include<iomanip>
#include"mytemperature.h"
using namespace std;
int main() {
	double a, b;
	cout << "cel to fah:";
	cin >> a;
	cout << fixed << setprecision(1) << celsius_to_fah(a) << endl;
	cout << "fah to cel:";
	cin >> b;
	cout << fixed << setprecision(2) << fahrenheit_to_cels(b) << endl;
	return 0;
}