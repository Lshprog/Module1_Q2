#include "Header.h"
#include <iostream>

int main(){

	listd::NodeList nodelist = listd::NodeList();
	nodelist.add_node('1');
	nodelist.add_node('1');
	nodelist.add_node('1');
	nodelist.add_node('2');
	nodelist.add_node('2');
	nodelist.add_node('2');
	nodelist.add_node('2');
	nodelist.add_node('3');
	nodelist.add_node('3');
	nodelist.add_node('2');
	nodelist.print_out_list();
	std::cout << "\nList without dupes: ";
	nodelist.remove_dupe();
}