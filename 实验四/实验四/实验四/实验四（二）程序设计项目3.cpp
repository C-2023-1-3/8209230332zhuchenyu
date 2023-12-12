#include<iostream>
using namespace std;
int a;
void fun(int s[])
{
	for (int k = 0; k < a; k++)
	{
		for (int h = 0; h < a; h++)
		{
			if (s[k] < s[h])
			{
				int t;
				t = s[h];
				s[h] = s[k];
				s[k] = t;
			}
		}
	}
}
int main()
{
	int b;
	cout << "please input the size of the array:";
	cin >> a;
	int* arr = new int[a];
	cout << "please input the details of the array:";
	for (int i = 0; i < a; i++)
	{
		cin >> *(arr + i);
	}
	cout << "请选择你要查看数组中的项目：";
	cin >> b;
	cout << arr[b - 1] << endl;
	fun(arr);
	for (int m = 0; m < a; m++)
	{
		cout << *(arr + m);
	}
	delete[]arr;
	return 0;
}
