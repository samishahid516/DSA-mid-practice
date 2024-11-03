//#include <iostream>
//#include <string>
//using namespace std;
//
//#define MAX 100
//
//class stack
//{
//	int top;
//	char arr[MAX];
//public:
//	stack();
//	bool isempty();
//	bool isfull();
//	void push(char);
//	char pop();
//};
//
//stack::stack()
//{
//	top = -1;
//}
//
//bool stack::isempty()
//{
//	return top == -1;
//}
//
//bool stack::isfull()
//{
//	return top == MAX - 1;
//}
//
//void stack::push(char x)
//{
//	if (isfull())
//	{
//		cout << "Stack is full" << endl;
//	}
//	else
//	{
//		top++;
//		arr[top] = x;
//	}
//}
//
//char stack::pop()
//{
//	if (isempty())
//	{
//		cout << "Stack is empty" << endl;
//		return ' ';
//	}
//	else
//	{
//		char x = arr[top];
//		top--;
//		return x;
//	}
//}
//
//int main()
//{
//	stack s;
//	string str;
//	string a;
//	cout << "Enter a string: ";
//
//	getline(cin, str);
//
//
//	for (int i = 0; i < str.length(); i++)
//	{
//		s.push(str[i]);
//	}
//
//	cout << "Reversed string: ";
//	for (int i = 0; i < str.length(); i++)
//	{
//		a += s.pop();
//		cout << a[i];
//
//	}
//	cout << endl;
//
//	if (str == a)
//	{
//		cout << "The string is a palindrome" << endl;
//	}
//	else
//	{
//		cout << "The string is not a palindrome" << endl;
//	}
//
//}
//
////#include <iostream>
////using namespace std;
////
////float factorial(int n)
////{
////	if (n == 0) {
////		return 1;
////	}
////	else {
////		return n * factorial(n - 1);
////	}
////}
////
////int main() 
////{
////	int n;
////	cout << "Enter a number: ";
////	cin >> n;
////	cout << "Factorial of " << n << " is " << factorial(n) << endl;
////	return 0;	
////	
////}
//
//
////#include <iostream>
////using namespace std;
////
////int table(int n, int i)
////{
////	if (i > 10) {
////		return 0;
////	}
////	else {
////		cout << n << " x " << i << " = " << n * i << endl;
////		return table(n, i + 1);
////	}
////}
////
////int main()
////{
////	int n;
////	cout << "Enter a number: ";
////	cin >> n;
////	table(n, 1);
////	return 0;
////}
//
////#include <iostream>
////using namespace std;
////
////int fabonacci(int n)
////{
////	if (n == 0) {
////		return 0;
////	}
////	else if (n == 1) {
////		return 1;
////	}
////	else {
////		return fabonacci(n - 1) + fabonacci(n - 2);
////	}
////}
////
////int main() 
////{
////	int n;
////	cout << "Enter a number: ";
////	cin >> n;
////	cout << "Fabonacci of " << n << " is " << fabonacci(n) << endl;
////	return 0;
////
////}