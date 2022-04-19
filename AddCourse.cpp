#include "AddCourse.h"
#include "Course.h"

AddCourse::AddCourse() {
}

void AddCourse::addCourse() {
	Course course;
	Date date;

	ofstream outfile;
	outfile.open("CoursesTemp.txt");

	ifstream infile;
	infile.open("Courses.txt");
	while (infile) {
		string current;
		getline(infile, current);
		if (current == "END OF LIST") {
			break;
		}
		outfile << current << endl;
	}
	infile.close();

	bool con = true;
	string yes_no = "Y";

	while (con) {
		if (con == false) {
			break;
		}
		course.initializeName();
		course.initializeId();
		course.initializeCredits();
		cin.ignore();
		course.initializeType();
		course.initializeMaxCapacity();
		cin.ignore();
		course.initializeDaysOfWeek();
		course.initializeStart();
		course.initializeEnd();
		cin.ignore();
		course.initializeClassroom();

		outfile << endl << "Class" << endl;
		outfile << course.getName() << endl;
		outfile << "ID" << endl;
		outfile << course.getId() << endl;
		outfile << "Credits" << endl;
		outfile << course.getCredits() << endl;
		outfile << "Type" << endl;
		outfile << course.getType() << endl;
		outfile << "Max" << endl;
		outfile << course.getMaxCapacity() << endl;
		outfile << "Days" << endl;
		outfile << course.getDaysOfWeek() << endl;
		outfile << "Start" << endl;
		outfile << course.getStart() << endl;
		outfile << "End" << endl;
		outfile << course.getEnd() << endl;
		outfile << "Room" << endl;
		outfile << course.getClassroom() << endl;

		system("cls");

		cout << "Start date : " << endl;
		date.initializeStartYear();
		date.initializeStartMonth();
		date.initializeStartDay();

		string dash = "/";

		outfile << "Date" << endl;
		outfile << date.getStartYear() <<
			dash << date.getStartMonth() <<
			dash << date.getStartDay();

		cout << "End date : " << endl;
		date.initializeEndYear();
		date.initializeEndMonth();
		date.initializeEndDay();

		outfile << " " << date.getEndYear() <<
			dash << date.getEndMonth() <<
			dash << date.getEndDay() << endl;

		outfile << "END" << endl;

		cout << "Add another course? Y/N : ";
		cin >> yes_no;
		if (yes_no != "Y" && yes_no != "y") {
			con = false;
			outfile << "END OF LIST" << endl;
		}
		cin.ignore();
		system("cls");
	}

	outfile.close();

	remove("Courses.txt");
	rename("CoursesTemp.txt", "Courses.txt");

	course.printCourse();
	date.printDate();
}