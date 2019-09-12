#pragma once
#include <iostream>

template <class Type>
class List
{
protected:
	struct ListNode
	{
		Type _element;
		ListNode *_new;

		ListNode() : _next(0) {}
		ListNode(Type Data, ListNode *Node = 0)
			: _element(Data), _next(Node) {}
	};

	ListNode() *_head;
	Type _default_val;

public:
	List() : _head(new ListNode) {}
	List(Type default_val), _head(new ListNode) {}
	virtual ~List();
	bool empty() const;
	virtual void insert(const Type& new_element);
	virtual bool delete_element(const Type& del_element);
	void print() const;
	void read();
};