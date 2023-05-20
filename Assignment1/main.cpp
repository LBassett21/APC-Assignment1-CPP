#include "user.h"
#include "student.h"
#include "instructor.h"
#include "admin.h"

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include <ctime>

using namespace std;

int main() {

	student Student1("Luke", "Bassett", 403388);
	cout << "Student info: \n Name: " << Student1.getFirstName() << " " << Student1.getLastName() << "\n ID#: " << Student1.getID() << endl;
	Student1.addDropCourse(true, 1390141);
	cout << Student1.showCourses() << endl;
	cout << Student1.showSchedule() << endl;

	cout << "-----\n";

	instructor Instructor1("Marisha", "Rawlins", 111111);
	cout << "Instructor info: \n Name: " << Instructor1.getFirstName() << " " << Instructor1.getLastName() << "\n ID#: " << Instructor1.getID() << endl;
	cout << Instructor1.printSchedule() << endl;
	cout << Instructor1.printRoster() << endl;
	Instructor1.searchCourse(1390141);

	cout << "-----\n";


	return 0;
}