#include "user.h"
#include <iostream>
using namespace std;

user::user(string f, string l, double i) {
	firstname = f;
	lastname = l;
	ID = i;
}
void user::setFirstName(string f) {
	firstname = f;
}
void user::setLastName(string l) {
	lastname = l;
}
void user::setID(double i) {
	ID = i;
}
string user::getFirstName() const {
	return firstname;
}
string user::getLastName() const {
	return lastname;
}
double user::getID() const {
	return ID;
}
user::~user() {

}