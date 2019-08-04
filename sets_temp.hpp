#pragma once
#include "sets.hpp"

template <class Type, int SetSize>
set<Type, SetSize>::set() 
	: _num_of_elements(0) {}

template <class Type, int SetSize>
set<Type, SetSize>::set(Type empty_element) 
	: _num_of_elements(0), _empty_element(empty_element) {}

// Use + operator for set union. Operator overloading! :D
// Elements added to union from *this and Set2 using insertion sort
template <class Type, int SetSize>
set<Type, SetSize> set<Type, SetSize>::operator+(const set<Type, SetSize>& Set2) const
{
	set<Type, SetSize> Union;
	int marker1 = 0, marker2 = 0;
	int union_size = 0;
	while (marker1 < _num_of_elements && marker2 < Set2._num_of_elements)
	{
		if(_element[marker1] < Set2._element[marker2])
		{
			Union.insert(_element[marker1]);
			marker1++; union_size++;
		}
		else if(_element[marker1] == Set2._element[marker2])
		{
			Union.insert(_element[marker1]);
			marker1++; marker2++; union_size++;
		}
		else
		{
			Union.insert(Set2._element[marker2]);
			marker2++; union_size++;
		}
	}
	for (; marker1 < _num_of_elements; marker1++)
	{
		Union.insert(_element[marker1]);
		union_size++;
	}
	for (; marker2 < Set2._num_of_elements; marker2++)
	{
		Union.insert(Set2._element[marker2]);
		union_size++;
	}
	if (union_size > SetSize)
		std::cout << "Error in Union: Union num_of_elements exceeds universal set size.\n";
	return Union;
}

// Use * operator for set intersection. Another operator overloading.
// Elements added to Intsect from *this and Set2 using insertion sort

template <class Type, int SetSize>
set<Type, SetSize> set<Type, SetSize>::operator* (const set<Type, SetSize>& Set2) const
{
	set<Type, SetSize> Intsect;
	int marker1 = 0, marker2 = 0;

	while (marker1 < _num_of_elements && marker2 < Set2._num_of_elements)
	{
		if(_element[marker1] < Set2._element[marker2])
		{
			marker1++;
		} 
		else if(_element[marker1] == Set2._element[marker2])
		{
			Intsect.insert(_element[marker1]);
			marker1++; marker2++;
		}
		else
		{
			marker2++;
		}
	}
	return Intsect;
}

// tests if "member" is in the current set
template <class Type, int SetSize> 
BOOL set<Type, SetSize>::contains(const Type& member) const
{
	for (int marker = 0; marker < _num_of_elements; marker++)
		if(_element[marker] == member)
			return TRUE;
	return FALSE;
}

// Adds "element" to current set. returns TRUE if successful
template <class Type, int SetSize>
BOOL set<Type, SetSize>::insert(const Type& element)
{
	if(!contains(element) && _num_of_elements < SetSize)
	{
		int marker = _num_of_elements;
		while (marker > 0 && element < _element[marker - 1])
		{
			_element[marker] = _element[marker - 1];
			--marker;
		}
		_element[marker] = element;
		_num_of_elements++;
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

// reads in set elements from keyboard
template<class Type, int SetSize>
void set<Type, SetSize>::read()
{
	Type new_element;

	_num_of_elements = 0;
	std::cout << "Enter elements, finish with " << _empty_element << std::endl << "Element 1: ";
	std::cin >> new_element;
	for (int i = 0; i < SetSize && new_element != _empty_element; i++)
	{
		if (contains(new_element))
		{
			std::cout << "Element already in set. \n";
			--i;
		}
		else
		{
			insert(new_element);
		}
		if(i < SetSize - 1)
		{
			std::cout << "Element " << (i + 2) << ": ";
			std::cin >> new_element;
		}
	}
}

// Prints set elements on screen
template <class Type, int SetSize>
void set<Type, SetSize>::print() const
{
	std::cout << "Set elements: ";
	for (int marker = 0; marker < _num_of_elements; marker++)
		std::cout << _element[marker] << ' ';
	std::cout << std::endl;
	std::cout << "Number of elements: " << _num_of_elements << std::endl;
}