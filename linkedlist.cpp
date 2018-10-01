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


void list::add (char ch)
{
	//Set previous and current nodes to traverse
	node * prev = NULL;
	node * curr = head;

	//Traverse the list
	while(curr != NULL && curr->item < ch)
	{
		prev = curr;
		curr = curr->next;
	}

	//Add data to list
	node * newNode = new node;//create new node to contain ch
	newNode->item = ch;//add it to the item
	newNode->next = NULL;
	newNode->next = curr;//don't enter while loop again
	if(prev == NULL)
		head = newNode;
	else
		prev->next = newNode;

}
