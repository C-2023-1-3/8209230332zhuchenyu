#include <iostream>             
#include "student.h"
int main()
{
	Student stud;               
	Student stud1(007, "tcg", 'm');
	stud.set_value();
	stud.display(); 
	stud1.display();
}
