#pragma once
#include "user.h"
class student : public user {
public:
	student(string, string, double);
	string showCourses() const;
	void addDropCourse(bool, int);
	string showSchedule() const;
	
private:

};

