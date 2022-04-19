#include "InitializeLinkedList.h"

struct Node {
	string name;
	string id;
	string credits;
	string type;
	string maxCapacity;
	string daysOfWeek;
	string start;
	string end;
	string classroom;
	string date;
	Node* next;
};

LinkedList::LinkedList() {
	pos = NULL;
	head = NULL;
	tail = NULL;
}

LinkedList::~LinkedList() {
}

void LinkedList::newFile() {
	ofstream outfile;
	outfile.open("NewFile.txt");

	pos = head;
	while (pos != NULL) {
		outfile << endl << "Class" << endl;
		outfile << pos->name << endl;
		outfile << "ID" << endl;
		outfile << pos->id << endl;
		outfile << "Credits" << endl;
		outfile << pos->credits << endl;
		outfile << "Type" << endl;
		outfile << pos->type << endl;
		outfile << "Max" << endl;
		outfile << pos->maxCapacity << endl;
		outfile << "Days" << endl;
		outfile << pos->daysOfWeek << endl;
		outfile << "Start" << endl;
		outfile << pos->start << endl;
		outfile << "End" << endl;
		outfile << pos->end << endl;
		outfile << "Room" << endl;
		outfile << pos->classroom << endl;

		outfile << "Date" << endl;
		outfile << pos->date << endl;

		outfile << "END" << endl;

		pos = pos->next;
	}
	outfile << "END OF LIST" << endl;
	outfile.close();
}

void LinkedList::remove(string course) {
	pos = head;
	Node* temp = NULL;
	while (pos != NULL) {
		cout << "While Test" << endl;
		if (pos->name == course) {
			cout << "Test 1" << endl;
			temp = pos;
			head = pos->next;
			delete temp;
			break;
		}
		else if (pos->next->name == course) {
			cout << "Test 2" << endl;
			temp = pos->next;
			pos->next = pos->next->next;
			delete temp;
			break;
		}
		else {
			cout << "Test 3" << endl;
			pos = pos->next;
		}
		cout << "Something" << endl;
	}
	cout << "Loop ended" << endl;
	newFile();
}

void LinkedList::print() {
	pos = head;
	while (pos != NULL) {
		cout << "------------------------------" << endl;
		cout << pos->name << endl;
		cout << pos->daysOfWeek << endl;
		cout << pos->classroom << endl;
		cout << pos->date << endl;
		pos = pos->next;
	}
}

void LinkedList::printCourseName() {
	pos = head;
	while (pos != NULL) {
		cout << "______________________________" << endl << endl;
		cout << pos->name << endl;
		pos = pos->next;
	}
}

void LinkedList::makeList() {
	string current;

	ifstream infile;
	infile.open("Courses.txt");

	while (current != "END OF LIST") {
		getline(infile, current);
		if (current == "END OF LIST") {
			break;
		}
		//system("pause");
		//cout << "Does not equal 'END OF LIST'" << endl; //Check
		//cout << current << endl; //Check
		Node* temp = new Node();
		temp->next = NULL;
		if (!infile) {
			continue;
		}
		while (current != "END") {
			//cout << "Does not equal 'End'" << endl; //Check
			//cout << current << endl; //Check
			getline(infile, current);
			if (current == "END") {
				break;
			}
			if (current == "Class") {
				getline(infile, current);
				temp->name = current;
			}
			else if (current == "ID") {
				getline(infile, current);
				temp->id = current;
			}
			else if (current == "Credits") {
				getline(infile, current);
				temp->credits = current;
			}
			else if (current == "Type") {
				getline(infile, current);
				temp->type = current;
			}
			else if (current == "Max") {
				getline(infile, current);
				temp->maxCapacity = current;
			}
			else if (current == "Days") {
				getline(infile, current);
				temp->daysOfWeek = current;
			}
			else if (current == "Start") {
				getline(infile, current);
				temp->start = current;
			}
			else if (current == "End") {
				getline(infile, current);
				temp->end = current;
			}
			else if (current == "Room") {
				getline(infile, current);
				temp->classroom = current;
			}
			else if (current == "Date") {
				getline(infile, current);
				temp->date = current;
			}
		}
		//cout << "'END' loop ended" << endl; //Check
		if (head == NULL) {
			head = temp;
			pos = temp;
			tail = temp;
		}
		else {
			pos->next = temp;
			pos = pos->next;
			tail = pos;
		}
	}
	//cout << "'END OF LIST' loop ended" << endl; //Check
	infile.close();
}