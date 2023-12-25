#pragma once
using namespace std;
class Student              
{
public:                  
	void display();
	void set_value() {
		cin >> num;
		cin >> name;
		cin >> sex;
	}
	Student() {};
	Student(int snum, const char sname[], char ssex) {
		num = snum;
		strcpy_s(name, sname);
		sex = ssex;
	}
private:
	int num;
	char name[20];
	char sex;
};
