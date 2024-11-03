//#include <iostream>
//#include <string>
//using namespace std;
//
//#define MAX 100
//typedef char ItemType;
//
//class stack {
//    int top;
//    char arr[100];
//public:
//    stack();
//    bool isempty();
//    bool isfull();
//    void push(ItemType newitem);
//    char pop();
//};
//
//stack::stack() {
//    top = -1;
//}
//
//bool stack::isempty() {
//    return top == -1;
//}
//
//bool stack::isfull() {
//    return top == MAX - 1;
//}
//
//void stack::push(ItemType newitem) {
//    if (isfull()) {
//        cout << "Stack is full" << endl;
//    }
//    else {
//        top++;
//        arr[top] = newitem;
//    }
//}
//
//char stack::pop() {
//    if (isempty()) {
//        cout << "Stack is empty" << endl;
//        return ' ';
//    }
//    else {
//        char x = arr[top];
//        top--;
//        return x;
//    }
//
//    int main()
//    {
//    }