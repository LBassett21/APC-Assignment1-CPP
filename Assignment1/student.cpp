#include "student.h"
#include <iostream>
using namespace std;

student::student(string f, string l, double i) : user{f, l, i} {
	
}
string student::showCourses() const {
	return "Showing your courses... kinda";
}
void student::addDropCourse(bool ad, int crn) {
	if (ad == true) {
		cout << "You added course: " << crn << endl;
	}
	else {
		cout << "You removed course: " << crn << endl;
	}
}
string student::showSchedule() const {
	return "Showing your schedule... kinda";
}