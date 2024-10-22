#include "main.hpp"

int main()
{
	Stack s(20);

	// Simple test for stack 
	// Put 10 elements into the stack 
	for (int i = 0; i < 10; i++)
		s.push(i);
	s.printAll();
	cout << "Total size of the stack is: " << s.getSize() << endl;
	cout << "Top element is: " << s.topEl() << endl;

	// Pop all elements from the stack 
	while (!s.isEmpty())
		cout << s.pop() << "\t";
	cout << endl;
	cout << "Top element is: " << s.topEl() << endl;

	// Main Test for reverse string 
	string str = "Hello, World!";
	reverse_string(str);
	cout << "Reversed string: " << str << endl;


	// Main Test for stack 
	// The balanced parentheses problem 
	// Use a stack to check whether a string of parentheses is balanced 
	string exp1 = "{('A':30), ('B':20), ('C':10), [1,2,3,4], [6,7,8],{a,b,c}, {1,2,3,4,5}}";
	string exp2 = "DOB_list = sorted([list(map(int, f)) for f in [dob.split('-') for dob in [person['DOB'] for person in people_dict]]])";
	string exp3 = "((([]{}{{{{{{((((({{{{}}})))))}}}}}})))";
	string exp4 = "((([]{}{{{{((((({{{{}}})))))}}}}}})))";
	int idx;
	if ((idx = check_parentheses(exp1)) == 0)
		cout << "The expression 1 is balanced" << endl;
	else
		cout << "The expression 1 is not balanced at the index " << idx << endl;

	if ((idx = check_parentheses(exp2)) == 0)
		cout << "The expression 2 is balanced" << endl;
	else
		cout << "The expression 2 is not balanced at the index " << idx << endl;

	if ((idx = check_parentheses(exp3)) == 0)
		cout << "The expression 3 is balanced" << endl;
	else
		cout << "The expression 3 is not balanced at the index " << idx << endl;
	if ((idx = check_parentheses(exp4)) == 0)
		cout << "The expression 4 is balanced" << endl;
	else
		cout << "The expression 4 is not balanced at the index " << idx << endl;
}