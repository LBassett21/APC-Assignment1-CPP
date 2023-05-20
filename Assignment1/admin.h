#pragma once
#include "user.h"
class admin :
    public user
{
public:
    admin(string, string, double);
    void addRemoveCourse(bool, int);
    void addRemoveUser(bool, double);
    void addRemoveStudentCourse(bool, int, double);
    string printSchedule(int);
    string printRoster(int);

private:

};

