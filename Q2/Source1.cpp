#include "Header.h"
#include <iostream>


listd::NodeList::Node::Node(char value) {
	this->value = value;
	this->next = nullptr;
}

listd::NodeList::Node::~Node()
{
	delete next;
}

void listd::NodeList::remove_dupe()
{
	Node* temp = head;
	

	while (true) {
		if (temp->next->value == temp->value) {
			if (temp->next == tail) {
				delete temp->next;
				tail = temp;
				break;
			}
			else {
				Node* temp_d = temp->next;
				temp->next = temp_d->next;
				temp_d->next = nullptr;
				delete temp_d;
			}
		}
		else {
			if (temp->next == tail)
				break;
			temp = temp->next;
		}
		
	}
	print_out_list();
}


void listd::NodeList::print_out_list() {
	Node* temp = head;
	while (true) {
		std::cout << temp->value;
		if (temp == tail)
			return;
		temp = temp->next;
	}
}


void listd::NodeList::add_node(char value) {

	Node* temp = new Node(value);
	if (head == nullptr) {
		head = temp;
		tail = temp;
	}
	else {
		tail->next = temp;
		tail = temp;
	}
	
	return;
}