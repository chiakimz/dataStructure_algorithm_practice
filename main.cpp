#include <iostream>
#include "stack_template.hpp"

int main()
{
	queue<int, 10> int_queue;
	queue<float, 4> float_queue;
	int obj;
	float fobj;

	// test int stack
	for(int i = 0; i < 5; i++)
	{
		std::cout << "Entre an integer to push: ";
		std::cin >> obj;
		int_queue.push(obj);
	}

	// test float stack
	for(int i = 0; i < 5; i++)
	{
		std::cout << "Entre a float to push: ";
		std::cin >> fobj;
		float_queue.push(fobj);
	}

	// test pop
	std::cout << "Popping stuff off the int stack:\n";
	while(int_queue.pop(obj))
		std::cout << obj << ' ';
	std::cout << std::endl;

	// test pop & empty stack check
	std::cout << "Popping stuff off the float stack:\n";
	while(!float_queue.empty())
	{
		float_queue.pop(fobj);
		std::cout << fobj << ' ';
	}
	std::cout << std::endl;
	return 0;
}