//#include <iostream>
//#include <string>
//using namespace std;
//
//#define MAX 100
//typedef char ItemType;
//
//class stack {
//    int top;
//    ItemType arr[100];
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
//}
//
//void check_expression(string exp) {
//    stack s;
//    for (int i = 0; i < exp.length(); i++) {
//        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
//            s.push(exp[i]);
//        }
//        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
//            if (s.isempty()) {
//                cout << "Not Balanced" << endl;
//                return;
//            }
//            else {
//                char x = s.pop();
//                if ((exp[i] == ')' && x != '(') ||
//                    (exp[i] == '}' && x != '{') ||
//                    (exp[i] == ']' && x != '[')) {
//                    cout << "Not Balanced" << endl;
//                    return;
//                }
//            }
//        }
//    }
//
//    if (s.isempty()) {
//        cout << "Balanced" << endl;
//    }
//    else {
//        cout << "Not Balanced" << endl;
//    }
//}
//
//int main() {
//    string expression;
//    cout << "Enter an expression: ";
//    cin >> expression;
//    check_expression(expression);
//    return 0;
//}
