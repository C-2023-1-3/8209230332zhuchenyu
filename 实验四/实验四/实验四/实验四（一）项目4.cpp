#include<iostream>
using namespace std;
void merge(const int l1[], int s1, const int l2[], int s2, int l3[])
{
	int i, j;
	int k;
	int* p = &i;
	for (i = 0; i < s1; i++)
	{
		l3[i] = l1[*p];
	}
	for (i = s1; i < s1 + s2; i++)
	{
		l3[i] = l2[*p - s1];
	}
	for (i = 0; i < s1 + s2; i++)
	{
		for (j = 0; j < s1 + s2; j++)
		{
			if (l3[i] < l3[j])
			{
				k = l3[i];
				l3[i] = l3[j];
				l3[j] = k;
			}
		}
	}
	for (int i = 0; i < s1 + s2; i++)
	{
		cout << l3[i] << " ";
	}
}
int main()
{
	int s1, s2;
	cout << "how many numbers are there in the list1:";
	cin >> s1;
	int* l1 = new int[s1];
	cout << "please input list1:";
	for (int i = 0; i < s1; i++)
	{
		cin >> l1[i];
	}
	cout << "how many numbers are there in the list2:";
	cin >> s2;
	int* l2 = new int[s2];
	cout << "please input list1:";
	for (int i = 0; i < s2; i++)
	{
		cin >> l2[i];
	}
	int* l3 = new int[s1 + s2];
	merge(l1, s1, l2, s2, l3);
	delete[]l1;
	delete[]l2;
	delete[]l3;
	return 0;

}
