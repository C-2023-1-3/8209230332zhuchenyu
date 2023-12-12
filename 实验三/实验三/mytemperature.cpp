#include<iostream>
double celsius_to_fah(double cel) {
		double a;
		a = (cel * 9) / 5 + 32;
		return a;

	}
	double fahrenheit_to_cels(double fah) {
		double b;
		b = (fah - 32) * 5 / 9;
		return b;
	}
