#include <iostream>
#include "stack_template.hpp"

int main()
{
	stack<int, 10> int_stack;
	stack<float, 4> float_stack;
	int obj;
	float fobj;

	// test int stack
	for(int i = 0; i < 5; i++)
	{
		std::cout << "Entre an integer to push: ";
		std::cin >> obj;
		int_stack.push(obj);
	}

	// test float stack
	for(int i = 0; i < 5; i++)
	{
		std::cout << "Entre a float to push: ";
		std::cin >> fobj;
		float_stack.push(fobj);
	}

	// test pop
	std::cout << "Popping stuff off the int stack:\n";
	while(int_stack.pop(obj))
		std::cout << obj << ' ';
	std::cout << std::endl;

	// test pop & empty stack check
	std::cout << "Popping stuff off the float stack:\n";
	while(!float_stack.empty())
	{
		float_stack.pop(fobj);
		std::cout << fobj << ' ';
	}
	std::cout << std::endl;
	return 0;
}