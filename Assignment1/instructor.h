#pragma once
#include "user.h"
class instructor :
    public user
{
public:
    instructor(string, string, double);
    string printSchedule() const;
    string printRoster() const;
    void searchCourse(int);

private:

};

