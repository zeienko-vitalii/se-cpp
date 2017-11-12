/*
* @file List.cpp
* Містить реалізацію класа List
* @date 2017.09.17
* @author shcherbinina
*/
#include "List.h"
#include "Capacity.h"
#include <fstream>

List::List() :head(NULL), tail(NULL), size(0)
{
}

List::List(Capacity x)
{
	add(x);
}

List::~List()
{
	while (head) 
	{
		tail = head->next; 
		delete head; 
		head = tail; 
	}
	size = 0;
}

void List::add(Capacity x)
{
	Node *temp = new Node; 
	temp->next = NULL;  
	temp->x = x;

	if (head != NULL) 
	{
		temp->prev = tail; 
		tail->next = temp; 
		tail = temp; 
	}
	else 
	{
		size = 0;
		temp->prev = NULL; 
		head = tail = temp; 
	}
	size++;
}

void List::show()
{
	
	Node *temp = head; 
	while (temp != NULL) 
	{
		cout << temp->x << "\n"; 
		temp = temp->next; 
	}
	cout << "\n";
}

void List::remove(int pos)
{
	if (pos == 0){
		Node *del = head;
		head = head->next;
		delete del;
	}
	else if (pos == (size-1)){
		Node *del = tail;
		tail = tail->prev;
		delete del;
	}
	else {
		Node* del = head;
		for (int i = 0; i < pos; i++)
			del = del->next;
		del->prev->next = del->next;
		del->next->prev = del->prev;
		delete del;
	}
	size--;
}

Capacity* List::get(int pos) {
	if (pos<0 || pos>(size-1)){
		cout << "Illegal index\n";
		return (new Capacity);
	}
	Node *tmp = head;
	for (int i = 0; i < pos; i++)
		tmp = tmp->next;
	return &(tmp->x);
}

int List::lenght()
{
	return size;
}

void List::save(string filename)
{
	ofstream fileStream;
	fileStream.open(filename, ios_base::out | ios_base::binary | ios_base::trunc);
	for (int i = 0; i < this->size; i++){
		get(i)->OnStore(fileStream);
		fileStream << "\n";
	}
	fileStream.close();
}

void List::load(string filename, int size)
{
	ifstream fileStream;
	fileStream.open(filename, ios_base::in | ios_base::binary);
	for(int i = 0 ; i<size;i++){
		Capacity temp;
		temp.OnLoad(fileStream);
		this->add(temp);
	}
	fileStream.close();
}