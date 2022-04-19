#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Node;

class LinkedList {
public:
	LinkedList();
	~LinkedList();

	void makeList();
	//void edit();
	void remove(string course);
	void newFile();
	//void find();
	void print();
	void printCourseName();

private:
	Node* pos;
	Node* head;
	Node* tail;

};

#endif // !LINKEDLIST_H

