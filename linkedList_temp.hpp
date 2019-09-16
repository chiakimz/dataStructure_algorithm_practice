//#pragma once
//#include "linkedList.hpp"
//
//template<class Type>
//List<Type>::~List()
//{
//	ListNode *temp = _head->_next;
//
//	while(temp)
//	{
//		_head->_next = temp->_next;
//		delete temp;
//		temp = _head->_next;
//	}
//	delete _head;
//}
//
//template <class Type>
//bool List<Type>::empty() const
//{
//	return _head->_next == 0 ? true : false;
//}
//
//template <class Type>
//void List<Type>::insert(const Type& new_element)
//{
//	for(ListNode *marker = _head; 
//		marker->_next; 
//		marker = marker->_next);
//	marker->_next = new ListNode(new_element, marker->_next);
//
//}
//
//template <class Type>
//bool List<Type>::delete_element(const Type& del_element)
//{
//	ListNode *marker = _head, *temp;
//
//	for (; marker->_next && 
//		marker->_next->_element != delete_element; 
//		marker = marker->_next);
//	if ((temo = marker->_next) && 
//		marker->_next->_element == del_element)
//	{
//		marker->_next = marker->_next->_next;
//		delete temp;
//		return true;
//	}
//	else
//		return false;
//}
//
//template <class Type>
//void List<Type>::print() const
//{
//	std::cout << "Traversal of list: ";
//	ListNode *marker = _head->_next;
//	for (; marker; marker = marker->_next)
//		std::cout << marker->_element << ' ';
//	std::cout << endl;
//}
//
//template<class Type>
//void List<Type>::read()
//{
//	Type new_element;
//
//	std::cout << "Input list elements. End with " << _default_val << "\n";
//	std::cout << "Enter element: ";
//	std::cin >> new_element;
//	while (new_element != _default_val)
//	{
//		insert(new_element);
//		std::cout << "Enter element: ";
//		std::cin >> new_element;
//	}
//}