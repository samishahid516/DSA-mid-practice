#include <iostream>
using namespace std;

typedef struct Node* Nodeptr;

struct Node
{
	int info;
	Nodeptr next;
};

class LinkedList
{
private:
	Nodeptr list;
public:
	LinkedList();
	void insert_at_start(int x);
	int delete_from_start();
	void insert_at_end(int x);
	int delete_from_end();
	void traverse();
	void insert_at_middel(int x,int value);
	int delete_from_middel(int x);  
	Nodeptr search(int x);
	void count(int x);
};

LinkedList::LinkedList()
{
	list = NULL;
}

void LinkedList::insert_at_start(int x)
{
	Nodeptr p = new Node;
	p->info = x;
	p->next = list;
	list = p;
}

int LinkedList::delete_from_start()
{
	if (list == NULL)
		return -999;
	Nodeptr p = list;  
	int x = p->info;
	list = p->next;
	delete p;
	return x;
}

void LinkedList::insert_at_end(int x)
{
	if (list == NULL)
	{
		insert_at_start(x); 
		return;
	}
	Nodeptr p = list;
	while (p->next != NULL)
	{
		p = p->next;
	}

	Nodeptr q = new Node;
	q->info = x;
	p->next = q;
	q->next = NULL;
}

int LinkedList::delete_from_end()
{
	if (list == NULL)
		return -999;

	Nodeptr p;
	Nodeptr q = NULL;
	for (p = list; p->next != NULL; p = p->next)
	{
		q = p;
	}
	if (q != NULL)
		q->next = NULL;
	else
		list = NULL;
	int x = p->info;
	delete p;
	return x;
}

void LinkedList::traverse()
{
	for (Nodeptr p = list; p != NULL; p = p->next)
	{
		cout << p->info << " ";
	}
	cout << endl;
}

Nodeptr LinkedList::search(int x)
{
	for (Nodeptr p = list; p != NULL; p = p->next)
	{
		if (p->info == x)
			return p;
	}
	return NULL;
}

void LinkedList::insert_at_middel(int x , int value)
{
	Nodeptr p;
	for (p = list; p != NULL && p->info!=x ; p = p->next)
	{	
	}
	if (p == NULL)
	{
		insert_at_end(value);
		return;
	}
	Nodeptr q = new Node;
	q->info = value;
	q->next = p->next;
	p->next = q;
}

int LinkedList::delete_from_middel(int x) 
{
	if (list == NULL)
		return -999;
	Nodeptr p, q;
	for (p = list, q = NULL; p != NULL && p->info != x; q = p, p = p->next)
	{
	}

	if ( p == NULL)
		list = p->next;
	else
		q->next = p->next;

	delete p;
	return x;
}



int main()
{
	LinkedList l;
	cout<<"Insertion at start"<<endl;
	l.insert_at_start(10);
	l.insert_at_start(20);
	l.insert_at_start(30);
	l.traverse();


	cout<<"Insertion at end"<<endl;
	
	l.insert_at_end(300);
	l.insert_at_end(40);
	l.insert_at_end(50);
	l.traverse();

	cout <<"insertion at middel"<<endl;
	l.insert_at_middel(10,80);
	l.traverse();

	cout<<"Deletion from middle"<<endl;

	l.delete_from_middel(10);
	l.traverse();
}