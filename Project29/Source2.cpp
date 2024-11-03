#include <iostream>
#include <string>
using namespace std;

template<class ItemType>
class PriorityQueue
{
private:
	struct PriorityItem {
		ItemType item;
		int priority;
	};

	int front;
	int rear;
	int count;
	int maxQue;
	PriorityItem* items;

public:
	PriorityQueue(int max = 100);
	~PriorityQueue();
	bool isEmpty() const;
	bool isFull() const;
	void insert(const ItemType& newItem, int priority);
	void remove(ItemType& item);
	void display() const;
};

template<class ItemType>
PriorityQueue<ItemType>::PriorityQueue(int max) {
	maxQue = max;
	front = 0;
	rear = 0;
	count = 0;
	items = new PriorityItem[maxQue];
}

template<class ItemType>
PriorityQueue<ItemType>::~PriorityQueue() {
	delete[] items;
}

template<class ItemType>
bool PriorityQueue<ItemType>::isEmpty() const {
	return (count == 0);
}

template<class ItemType>
bool PriorityQueue<ItemType>::isFull() const {
	return (count == maxQue);
}

template<class ItemType>
void PriorityQueue<ItemType>::insert(const ItemType& newItem, int priority) {
	if (isFull()) {
		cout << "Queue is full" << endl;
		return;
	}
	int i;
	for ( i = rear; i != front && items[(i - 1 + maxQue) % maxQue].priority < priority; i = (i - 1 + maxQue) % maxQue)
	{
		items[i] = items[(i - 1 + maxQue) % maxQue];
	}

	items[i] = { newItem, priority };

	rear = (rear + 1) % maxQue;
	count++;
}

template<class ItemType>
void PriorityQueue<ItemType>::remove(ItemType& item) {
	if (isEmpty()) {
		cout << "Queue is empty" << endl;
		return;
	}

	item = items[front].item;
	front = (front + 1) % maxQue;
	count--;
}

template<class ItemType>
void PriorityQueue<ItemType>::display() const {
	if (isEmpty()) {
		cout << "Queue is empty" << endl;
	}
	else {
		for (int i = front; i != rear; i = (i + 1) % maxQue) {
			cout << items[i].item << " ";
		}
		cout << endl;
	}
}

int main()
{
	PriorityQueue<string> pq(5);
	cout << "Enter 'parent', 'teacher', or 'student' with their priority (higher value is higher priority): " << endl;
	string choice;
	int priority;

	for (int i = 0; i < 3; i++) {
		cout << "Enter choice: ";
		cin >> choice;
		cout << "Enter priority: ";
		cin >> priority;
		pq.insert(choice, priority);
	}

	cout << "\nPriority Queue Contents:\n";
	pq.display();

	return 0;
}
