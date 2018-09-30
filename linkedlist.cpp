#include "linkedlist.h"
#include <iostream>
#include <fstream>
#include <cassert>

using namespace std;

list::list() : head(NULL)
{
}


list::~list()
{
	node * curr = head;
	while(head)
	{
		curr = head->next;
		delete head;
		head = curr;
	}
}


