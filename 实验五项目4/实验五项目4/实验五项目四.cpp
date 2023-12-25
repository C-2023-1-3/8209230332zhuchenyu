#include<iostream>
#include<cstring>
using namespace std;
class Student
{
public:
	Student() {} 
	Student(string n, double s) :num(n), score(s) {}
	string num;
	double score;
};
void max(Student* p)
{
	Student* t, * s;
	double max;
	for (t = p, s = t, max = t->score; t < (p + 5); t++)
	{
		if (t->score > max)
		{
			max = t->score;
			s = t;
		}
	}

	cout << "成绩最高的人的学号是:" << s->num << endl;
	cout<<"他的成绩是："<< max << "分" << endl;
}
int main()
{
	Student s[6];
	for (int i = 1; i < 6; i++)
	{
		cout << "请输入第" << i << "名同学的学号和成绩";
		cin >> s[i].num>> s[i].score;
	}
	max(s);
	return 0;
}
