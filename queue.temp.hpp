#pragma once
#include "queue.hpp"

template<typename Type>
Queue<Type>::~Queue()
{
	// destructor. set a temporary node to traverse through the queue and delete all the nodes by using pointer. at the end of the while loop delete the head and we're clean
	QueueNode *temp = _head->_next;
	
	while(temp)
	{
		_head->_next = temp->_next;
		delete temp;
		temp = _head->_next;
	}
	delete _head;
}

template<typename Type>
bool Queue<Type>::empty() const
{
	return _head->_next == 0 ? true : false;
}

template <typename Type>
void Queue<Type>::insert(const Type& newElement)
{
	// traversing the queue till the end, and when it reaches the end we add the new element
	for(QueueNode *_marker = _head; _marker->_next; _marker = _marker->_next);
	_marker->_next = new QueueNode(newElement, _marker->next);

}