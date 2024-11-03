//#include <iostream>
//#include <string>
//using namespace std;
//
//#define MAX 100
//typedef char ItemType;  
//
//class stack {
//	int top;
//	ItemType arr[MAX];
//
//public:
//	stack();
//	bool is_empty();
//	bool is_full();
//	void push(ItemType newitem);
//	void pop(ItemType& item);
//	ItemType peek();
//};
//
//stack::stack() {
//	top = -1;
//}
//
//bool stack::is_empty() {
//	return top == -1;
//}
//
//bool stack::is_full() {
//	return top == MAX - 1;
//}
//
//void stack::push(ItemType newitem) {
//	if (is_full()) {
//		cout << "Stack is full" << endl;
//	}
//	else {
//		top++;
//		arr[top] = newitem;
//	}
//}
//
//void stack::pop(ItemType& item) {
//	if (is_empty()) {
//		cout << "Stack is empty" << endl;
//	}
//	else {
//		item = arr[top];
//		top--;
//	}
//}
//
//ItemType stack::peek() {
//	if (!is_empty()) {
//		return arr[top];
//	}
//	return -1; 
//}
//
//
//int precedence(char op) {
//	if (op == '+' || op == '-') {
//		return 1;
//	}
//	else if (op == '*' || op == '/') {
//		return 2;
//	}
//	return 0;
//}
//
//
//string infix_to_postfix(string exp) {
//	stack s;
//	string postfix ;
//
//	for (int i = 0; i < exp.length(); i++) {
//		
//		if ((exp[i] >= 'a' && exp[i] <= 'z') || (exp[i] >= 'A' && exp[i] <= 'Z')) {
//			postfix = postfix + exp[i];
//		}
//		
//		else if (exp[i] == '(') {
//			s.push(exp[i]);
//		}
//		
//		
//		else if (exp[i] == ')') {
//			char x;
//			s.pop(x);
//			while (x != '(') {
//				postfix = postfix + x;
//				s.pop(x);
//			}
//		}
//		
//		else {
//			while (!s.is_empty() && precedence(s.peek()) >= precedence(exp[i])) {
//				char x;
//				s.pop(x);
//				postfix = postfix + x;
//			}
//			s.push(exp[i]);
//		}
//	}
//
//	
//	while (!s.is_empty()) {
//		char x;
//		s.pop(x);
//		postfix += x;
//	}
//
//	return postfix;
//}
//
//int main() {
//	string expression;
//	cout << "Enter an infix expression: ";
//	cin >> expression;
//
//	string postfix = infix_to_postfix(expression);
//	cout << "Postfix expression: " << postfix << endl;
//
//	return 0;
//}
