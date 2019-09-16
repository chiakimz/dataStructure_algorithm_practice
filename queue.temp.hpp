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
	for(QueueNode *marker = _head; marker->_next; marker = marker->_next)
		marker->_next = new QueueNode(newElement, marker->_next);

}

template <typename Type>
bool Queue<Type>::pop()
{
	// since this is a queue, we want the first element to go out. if the queue is not empty, we pop the element of head node and return true, otherwise return false
	QueueNode *marker = _head->_next;
	if(!empty())
	{
		delete marker;
		return true;
	}
	else
		return false;
}

template <typename Type>
void Queue<Type>::print() const
{
	std::cout << "Traversal of queue: ";
	QueueNode *marker = _head->_next;
	for (; marker; marker = marker->_next)
		std::cout << marker->_element << ' ';
	std::cout << std::endl;
}

template <typename Type>
void Queue<Type>::read()
{
	Type newElement;

	std::cout << "Input queue elements. End with " << _defaultVal << "\n";
	std::cout << "Entre element: ";
	std::cin >> newElement;
	while (newElement != _defaultVal)
	{
		insert(newElement);
		std::cout << "Entre element: ";
		std::cin >> newElement;
	}
}