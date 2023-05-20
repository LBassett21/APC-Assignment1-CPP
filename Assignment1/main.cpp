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
	admin Admin1("Cindy", "Rosner", 000001);
	cout << "Admin info: \n Name: " << Admin1.getFirstName() << " " << Admin1.getLastName() << "\n ID#: " << Admin1.getID() << endl;
	Admin1.addRemoveCourse(true, 1390141);
	Admin1.addRemoveCourse(false, 1390141);
	Admin1.addRemoveUser(true, 403388);
	Admin1.addRemoveUser(false, 403388);
	Admin1.addRemoveStudentCourse(true, 1390141, 403388);
	Admin1.addRemoveStudentCourse(false, 1390141, 403388);
	cout << Admin1.printRoster(1390141) << endl;
	cout << Admin1.printSchedule(1390141) << endl;

	return 0;
}