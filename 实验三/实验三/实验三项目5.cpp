#include<iostream>
using namespace std;
int main() {
	int a = 1;
	for (int i = 0; i < 9; i++) {
		int b;
		b = 2 * (a + 1);
		a = b;
	}
	cout << a;
}