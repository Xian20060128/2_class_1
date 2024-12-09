#include<string>
#include <iostream>
//#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Course.h"
#include "Utility.h"
#include"2_class_1.h"
#include "2_class_1.h"
using namespace std;

int main()
{

	InitializeData();
}

void InitializeData()
{
	Student student1("L458968745", "陳", "小白", "男", "2005-01-27", "S050", Department::ComputerSciece, ClassName::_1A);
	student1.display();

	cout << endl;
	Course course1("C001", "C++ Programming", "這門課程教授C++程式語言");
	Course course2("C002", "Java Programming", "這門課程教授Java程式語言");
	Course course3("C003", "Python Programming", "這門課程教授Python程式語言");


	vector<Course> teacher1_courses = { course1, course2, course3 };

	Teacher teacher1("T584698751", "王", "富貴", "男", "2005-07-07", "T777", Department::ComputerSciece, ClassName::_1A, teacher1_courses);

	cout << "----------------" << endl;
	teacher1.display();
}
