#include "stack.hpp"

//Constructor
template <class Type, int maxsize>
queue<Type, maxsize>::queue()
	:queue_pointer(0), end_queue(0)
{}

//Destructor
template <class Type, int maxsize>
queue<Type, maxsize>::~queue()
{}

template <class Type, int maxsize>
BOOL queue<Type, maxsize>::empty() const
{
	return queue_pointer == end_queue ? TRUE : FALSE;
}

template <class Type, int maxsize>
BOOL queue<Type, maxsize>::full() const
{
	return end_queue == maxsize - 1 ? TRUE : FALSE;
}

template <class Type, int maxsize>
BOOL queue<Type, maxsize>::pop(Type& bottom_elem)
{
	if(empty())
	{
		std::cout << "Stack empty: Pop failed.\n";
		return FALSE;
	}
	bottom_elem = element[queue_pointer++];
	return TRUE;
}

template <class Type, int maxsize>
BOOL queue<Type, maxsize>::push(const Type& new_elem)
{
	if(full())
	{
		std::cout << "Stack full: Push failed.\n";
		return FALSE;
	}
	element[end_queue++] = new_elem;
	return TRUE;
}