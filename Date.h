#ifndef DATE_H
#define DATE_H

#include <iostream>

using namespace std;

class Date {
public:
	Date();

	void setStartDay(int day_);
	int getStartDay();
	void setStartMonth(int month_);
	int getStartMonth();
	void setStartYear(int year_);
	int getStartYear();
	void setEndDay(int day_);
	int getEndDay();
	void setEndMonth(int month_);
	int getEndMonth();
	void setEndYear(int year_);
	int getEndYear();

	void initializeStartDay();
	void initializeStartMonth();
	void initializeStartYear();
	void initializeEndDay();
	void initializeEndMonth();
	void initializeEndYear();

	void printDate();

private:
	int startDay;
	int startMonth;
	int startYear;
	int endDay;
	int endMonth;
	int endYear;
};
#endif