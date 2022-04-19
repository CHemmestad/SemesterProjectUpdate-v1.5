#include "Date.h"

Date::Date() {
	startDay = NULL;
	startMonth = NULL;
	startYear = NULL;
	endDay = NULL;
	endMonth = NULL;
	endYear = NULL;
}
//intitialize
void Date::initializeStartDay() {
	cout << "Enter the day. (int) : " << endl;
	cin >> startDay;
}
void Date::initializeStartMonth() {
	cout << "Enter the month. (int) : " << endl;
	cin >> startMonth;
}
void Date::initializeStartYear() {
	cout << "Enter the year. (int) : " << endl;
	cin >> startYear;
}
void Date::initializeEndDay() {
	bool valid = false;
	cout << "Enter the day. (int) : " << endl;
	while (!valid) {
		cin >> endDay;
		if ((endDay >= startDay)&&(endMonth == startMonth)&&(endYear == startYear)) {
			valid = true;
			break;
		}
		else if ((endMonth >= startMonth)&&(endYear == startYear)) {
			valid = true;
			break;
		}
		else if (endYear > startYear) {
			valid = true;
			break;
		}
		else {
			cout << "Invalid day" << endl;
			cout << "Note: day must be greater than or equal to " << startDay << endl;
		}
	}
}
void Date::initializeEndMonth() {
	bool valid = false;
	cout << "Enter the month. (int) : " << endl;
	while (!valid) {
		cin >> endMonth;
		if ((endMonth >= startMonth)&&(endYear == startYear)) {
			valid = true;
			break;
		}
		else if (endYear > startYear) {
			valid = true;
			break;
		}
		else {
			cout << "Invalid month" << endl;
			cout << "Note: month must be greater than or equal to " << startMonth << endl;
		}
	}
}
void Date::initializeEndYear() {
	bool valid = false;
	cout << "Enter the year. (int) : " << endl;
	while (!valid) {
		cin >> endYear;
		if (endYear >= startYear) {
			valid = true;
			break;
		}
		else {
			cout << "Invlaid year" << endl;
			cout << "Note: year must be greater than or equal to " << startYear << endl;
		}
	}
}
//sets
void Date::setStartDay(int day_) {
	startDay = day_;
}
void Date::setStartMonth(int month_) {
	startMonth = month_;
}
void Date::setStartYear(int year_) {
	startYear = year_;
}
void Date::setEndDay(int day_) {
	endDay = day_;
}
void Date::setEndMonth(int month_) {
	endMonth = month_;
}
void Date::setEndYear(int year_) {
	endYear = year_;
}
//print
void Date::printDate() {
	cout << startMonth << "/"
		<< startDay << "/"
		<< startYear << " - ";
	cout << endMonth << "/"
		<< endDay << "/"
		<< endYear << endl;
}

int Date::getStartDay() {
	return startDay;
}
int Date::getStartMonth() {
	return startMonth;
}
int Date::getStartYear() {
	return startYear;
}
int Date::getEndDay() {
	return endDay;
}
int Date::getEndMonth() {
	return endMonth;
}
int Date::getEndYear() {
	return endYear;
}

//is older function()