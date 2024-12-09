#include<string>
#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Utility.h"
using namespace std;

int main()
{
	Person person1("L598745847", "Xian", "Oscar", "M", "2006-01-27");

	Person* person2 = new Person();
	person2->setId("Q256984257");
	person2->setLastName("Wang");
	person2->setFirstName("David");
	person2->setGender("M");
	person2->setBirthDate("2006-12-05");

	person1.display();
	cout << endl;
	person2->display();

	Student student1("L598745847", "Xian", "Oscar", "M", "2006-01-27", "S001", Department::ComputerSciece, ClassName::_1A);
	student1.display();
}