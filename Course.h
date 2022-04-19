#ifndef COURSE_H
#define COURSE_H

#include "Date.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Course : public Date {
public: 
	Course();

	void setName(string name_);
	string getName();
	void setId(string id_);
	string getId();
	void setCredits(int credits_);
	int getCredits();
	void setType(string type_);
	string getType();
	void setMaxCapacity(int maxCapacity_);
	int getMaxCapacity();
	void setDaysOfWeek(string daysOfWeek_);
	string getDaysOfWeek();
	void setStart(int start_);
	int getStart();
	void setEnd(int end_);
	int getEnd();
	void setClassroom(string classroom_);
	string getClassroom();

	void initializeName();
	void initializeId();
	void initializeCredits();
	void initializeType();
	void initializeMaxCapacity();
	void initializeDaysOfWeek();
	void initializeStart();
	void initializeEnd();
	void initializeClassroom();

	void printCourse();

private:
	string name;
	string id;
	int credits;
	string type;
	int maxCapacity;
	string daysOfWeek;
	int start;
	int end;
	string classroom;
	string dump;
};
#endif
