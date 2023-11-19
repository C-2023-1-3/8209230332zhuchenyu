#include<iostream>
using namespace std;
int main(){
		int a, b, i;
		for (i = 1; i <= 5; i++)
		{
			
			for (b = 1; b <= i; b++)
			{
				cout << "*";
			}
			cout << '\n';
		}
		return 0;

}