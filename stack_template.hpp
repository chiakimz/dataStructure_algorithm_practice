#include "stack.hpp"

//Constructor
template <class Type, int maxsize>
stack<Type, maxsize>::stack()
	:stack_pointer(-1)
{}

//Destructor
template <class Type, int maxsize>
stack<Type, maxsize>::~stack()
{}

template <class Type, int maxsize>
BOOL stack<Type, maxsize>::empty() const
{
	return stack_pointer == -1 ? TRUE : FALSE;
}

template <class Type, int maxsize>
BOOL stack<Type, maxsize>::full() const
{
	return stack_pointer == maxsize -1 ? TRUE : FALSE;
}

template <class Type, int maxsize>
BOOL stack<Type, maxsize>::pop(Type& top_elem)
{
	if(empty())
	{
		std::cout << "Stack empty: Pop failed.\n";
		return FALSE;
	}
	top_elem = element[stack_pointer--];
	return TRUE;
}

template <class Type, int maxsize>
BOOL stack<Type, maxsize>::push(const Type& new_elem)
{
	if(full())
	{
		std::cout << "Stack full: Push failed.\n";
		return FALSE;
	}
	element[++stack_pointer] = new_elem;
	return TRUE;
}