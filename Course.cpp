#include "Course.h"

Course::Course() {
	name = "";
	id = "";
	credits = NULL;
	type = "";
	maxCapacity = NULL;
	daysOfWeek = "";
	start = NULL;
	end = NULL;
	classroom = "";
	dump = "";
}
//initialize
void Course::initializeName() {
	cout << "What is the name of this course? (string) : " << endl;
	getline(cin, name);
}
void Course::initializeId() {
	cout << "What is the ID for this course? (string) : " << endl;
	getline(cin, id);
}
void Course::initializeCredits() {
	cout << "How many credits is this course worth? (int) : " << endl;
	cin >> credits;
}
void Course::initializeType() {
	cout << "What type of course is this? (string) : " << endl;
	getline(cin, type);
}
void Course::initializeMaxCapacity() {
	cout << "What is the max capacity for this course? (int) : " << endl;
	cin >> maxCapacity;
}
void Course::initializeDaysOfWeek() {
	cout << "What days will this course be on? (string) (Example : MonWedFri) : " << endl;
	getline(cin, daysOfWeek);
}
void Course::initializeStart() {
	cout << "What time does this course start? (int) (Example : 0900) : " << endl;
	cin >> start;
}
void Course::initializeEnd() {
	cout << "What time does this course end? (int) (Example : 1000) : " << endl;
	cin >> end;
}
void Course::initializeClassroom() {
	cout << "What classroom is this course in? (string) (Example : Science 107) : " << endl;
	getline(cin, classroom);
}
// sets
void Course::setName(string name_) {
	name = name_;
}
void Course::setId(string id_) {
	id = id_;
}
void Course::setCredits(int credits_) {
	credits = credits_;
}
void Course::setType(string type_) {
	type = type_;
}
void Course::setMaxCapacity(int maxCapacity_) {
	maxCapacity = maxCapacity_;
}
void Course::setDaysOfWeek(string daysOfWeek_) {
	daysOfWeek = daysOfWeek_;
}
void Course::setStart(int start_) {
	start = start_;
}
void Course::setEnd(int end_) {
	end = end_;
}
void Course::setClassroom(string classroom_) {
	classroom = classroom_;
}
//print
void Course::printCourse() {
	string dash = " - ";
	cout << "Course/Sec/Notes" << endl;
	cout << name << dash << credits << dash << maxCapacity << endl;
	cout << type << dash << id << endl;
	cout << "Times/Days" << endl;
	cout << start << dash << end << endl;
	cout << daysOfWeek << endl;
	cout << "Building & Room" << endl;
	cout << classroom << endl;
}

string Course::getName() {
	return name;
}
string Course::getId() {
	return id;
}
int Course::getCredits() {
	return credits;
}
string Course::getType() {
	return type;
}
int Course::getMaxCapacity() {
	return maxCapacity;
}
string Course::getDaysOfWeek() {
	return daysOfWeek;
}
int Course::getStart() {
	return start;
}
int Course::getEnd() {
	return end;
}
string Course::getClassroom() {
	return classroom;
}