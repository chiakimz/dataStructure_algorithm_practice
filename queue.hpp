#pragma once
#include <iostream>

template<typename Type>
class Queue
{
protected:
	struct QueueNode
	{
		Type _element;
		QueueNode *_next;

		QueueNode() : _next(0) {}
		QueueNode(Type element, QueueNode *node = 0)
			:_element(element), _next(node) {} // constructor with an empty queue
	
	};

	QueueNode *_head;
	Type _defaultVal;

public:
	Queue() : _head(new QueueNode) {}
	Queue(Type defaultVal), _head(new QueueNode) {}
	virtual ~Queue();
	bool empty() const;
	virtual void insert(const Type& newElement);
	virtual bool pop(const Type& delElement);
	void print() const;
	void read();

};