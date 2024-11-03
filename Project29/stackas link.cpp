#include <iostream>
using namespace std;

typedef struct Node* Nodeptr;

struct Node {
    int data;
    Nodeptr next;
};

class Stack {
private:
    Nodeptr top;
public:
    Stack();
    void push(int value);
    int pop();
    bool isEmpty();
    void traverse();
};

Stack::Stack() {
    top = NULL;
}

void Stack::push(int value) {
    Nodeptr p = new Node;
    p->data = value;
    p->next = top;
    top = p;
}

int Stack::pop() {
    if (isEmpty()) {
        cout << "Stack is empty!" << endl;
        return -1;
    }
    int value = top->data;
    Nodeptr q = top;
    top = top->next;
    delete q;
    return value;
}

bool Stack::isEmpty() {
    return top == NULL;
}

void Stack::traverse() {
    for (Nodeptr p = top; p != NULL; p = p->next) 
    {
	   cout << p->data << " ";
    }
    cout << endl; 
}

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.traverse();  // Output: 30 20 10
    cout << "Popped: " << s.pop() << endl; // Output: Popped: 30
    cout << "Popped: " << s.pop() << endl; // Output: Popped: 20
    s.traverse();  // Output: 10
    return 0;
}



#include <iostream>
using namespace std;

typedef struct Node* Nodeptr;

struct Node {
    int data;
    Nodeptr next;
};

class Queue {
private:
    Nodeptr front;  
    Nodeptr rear;   
public:
    Queue();
    ~Queue();
    void enqueue(int value);  
    int dequeue();            
    bool isEmpty();           
    void traverse();          
};

Queue::Queue() {
    front = rear = NULL;
}

Queue::~Queue() {
    while (!isEmpty()) {
        dequeue();
    }
}

void Queue::enqueue(int value) {
    Nodeptr p = new Node;  
    p->data = value;
    p->next = NULL;

    if (isEmpty()) {
        
        front = rear = p;
    }
    else {
        rear->next = p;
        rear = p;
    }
}

int Queue::dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty!" << endl;
        return -1;  
    }

    int value = front->data;
    Nodeptr q = front;  
    front = front->next;

   
    if (front == NULL) {
        rear = NULL;
    }
    delete q; 
    return value;
}


bool Queue::isEmpty() {
    return front == NULL;
}

void Queue::traverse() {
    Nodeptr p = front;  
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.traverse();  // Output: 10 20 30

    cout << "Dequeued: " << q.dequeue() << endl; // Output: Dequeued: 10
    q.traverse();  // Output: 20 30

   
    return 0;
}

