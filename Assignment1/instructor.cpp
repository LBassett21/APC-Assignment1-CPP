#include "instructor.h"
#include <iostream>
using namespace std;

instructor::instructor(string f, string l, double i) : user{f, l, i} {

}
string instructor::printSchedule() const {
	return "Showing your schedule... kinda";
}
string instructor::printRoster() const {
	return "Showing your roster... kinda";
}
void instructor::searchCourse(int crn) {
	cout << "You searched for course: " << crn << endl;
}