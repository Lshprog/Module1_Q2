#pragma once
namespace listd{
struct NodeList {
private:
	struct Node {
		Node* next;
		char value;
		Node(char value);
		~Node();
	};
	Node* head = nullptr;
	Node* tail = nullptr;

public:
	void remove_dupe();
	void add_node(char value);
	void print_out_list();

	};
}