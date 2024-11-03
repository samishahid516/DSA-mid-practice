#include<iostream>

using namespace std;

typedef struct Node* Nodeptr;

struct Node
{
	int data;
	Nodeptr next;
};

class LinkedList
{
	Nodeptr list;
public:
	LinkedList();
	void IAS(int value);
	void IAE(int value);
	void Traverse();
	int DAS();
	int DAE();
	void IA2(int value);
};

LinkedList::LinkedList()
{
	list = NULL;
}

void LinkedList::IAS(int value)
{
	Nodeptr temp = new Node;
	temp->data = value;
	temp->next = list;
	list = temp;

}

void LinkedList::IAE(int value)
{
	if (list == NULL)
	{
		IAS(value);
	}

	Nodeptr q = list;
	while (q->next != NULL)
	{
		q = q->next;
	}
	Nodeptr temp;
	temp = new Node();
	q->next = temp;
	temp->data = value;
	temp->next = NULL;

}

void LinkedList::Traverse()
{
	Nodeptr temp = list;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
}

int LinkedList::DAS()

{
	if (list == NULL)
	{
		return -999;
	}

	Nodeptr temp = list;
	list = list->next;
	int x = temp->data;
	delete temp;
	return x;
}

int LinkedList::DAE()
{
	if (list == NULL)
	{
		return -999;
	}

	if (list->next == NULL)
	{
		DAS();
	}
	else
	{
		Nodeptr q = list;
		while (q->next->next != NULL)
		{
			q = q->next;
		}
		Nodeptr temp = q->next;
		int x = temp->data;
		q->next = NULL;
		delete temp;
		return x;
	}
}

void LinkedList::IA2(int value)
{
	Nodeptr q = list;
	for (int i = 0; i < 1; i++)
	{
		q = q->next;
	}
	Nodeptr future = q->next;
	Nodeptr temp = new Node;
	temp->data = value;
	q->next = temp;
	temp->next = future;
}

int main()
{
	LinkedList L1;
	L1.IAS(001);
	L1.IAE(002);
	L1.IAE(004);
	L1.IAE(005);
	L1.Traverse();
	L1.IA2(3);
	L1.Traverse();
}