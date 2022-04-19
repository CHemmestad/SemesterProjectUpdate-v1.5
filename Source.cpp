#include "Course.h"
#include "AddCourse.h"
#include "InitializeLinkedList.h"
#include <iostream>

using namespace std;

struct Node;

int main() {
	
	int x = 0;

	while (x != 5) {
		LinkedList list;
		AddCourse add;
		string course;

		list.makeList();

		system("cls");

		cout << "\n\t\tMAIN MENU\n\n" << endl;
		cout << "Pick an option" << endl;
		cout << "\t1. All Courses\n\t2. Add A Course\n\t3. Delete A Course\n\t4. Leave";
		cout << "\n\nEnter 1, 2, or 3 to choose : ";

		cin >> x;

		switch (x) {
		case 1: //All Courses
			list.print();
			system("pause");
			break;
		case 2: //Add Course
			cin.ignore();
			add.addCourse();
			system("pause");
			break;
		case 3: //Delete Course
			list.printCourseName();
			cout << endl << "Which course do you want to delete? : ";
			cin.ignore();
			getline(cin, course);
			list.remove(course);
			remove("Courses.txt");
			rename("NewFile.txt", "Courses.txt");
			system("pause");
			break;
		case 4: //Leave
			x = 5;
			break;
		default:
			cout << ("Invalid") << endl;
			system("pause");
			break;
		}
		system("pause");
		list.~LinkedList();
	}

	return 0;
}