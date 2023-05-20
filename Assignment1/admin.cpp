#include "admin.h"
#include "student.h"
#include <iostream>
#include <string>
using namespace std;

admin::admin(string f, string l, double i) : user{f, l, i} {

}
void admin::addRemoveCourse(bool ar, int crn) {
	if (ar == true) {
		cout << "Adding course number: " << crn << endl;
	}
	else {
		cout << "Removing course number: " << crn << endl;
	}
}
void admin::addRemoveUser(bool ar, double idn){
	if (ar == true) {
		string fn;
		string ln;
		cout << "Creating new user, please enter the following information" << endl;
		cout << "First name: ";
		cin >> fn;
		cout << "Last name: ";
		cin >> ln;
		student newStudent(fn, ln, idn);
		cout << "New student created: " << newStudent.getFirstName() << " " << newStudent.getLastName() << " (ID#: " << newStudent.getID() << ")\n";
	}
	else {
		cout << "Removed user: " << idn << endl;
	}
}
void admin::addRemoveStudentCourse(bool ar, int crn, double idn) {
	if (ar == true) {
		cout << "Added course: " << crn << " for student " << idn << endl;
	}
	else {
		cout << "Removed course: " << crn << " for student " << idn << endl;
	}
}
string admin::printSchedule(int crn) {
	return "Showing schedule for course: " + to_string(crn) + "... kinda.";
}
string admin::printRoster(int crn) {
	return "Showing roster for course: " + to_string(crn) + "... kinda.";
}