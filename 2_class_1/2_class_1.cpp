#include <string>
#include <iostream>
#include "Person.h"
using namespace std;
int main()
{
   Person person1("L568465954", "Chen", "Oscar", "M", "2005-01-28");
   Person* person2 = new Person();
   person2->setId("L987654321");
   person2->setLastName("Lin");
   person2->setFirstName("Candy");
   person2->setGender("F");
   person2->setBirthDate("2005-12-02");
   person1.display();
   cout << endl;
   person2->display();
}