#pragma once
#include <iostream>

typedef int BOOL;
enum {FALSE, TRUE}; // enumeration is a distinct type whose value is restricted to a range of values
template <class Type, int SetSize>
class Set // it's a base class now
{
protected:
	Type _element[SetSize];
	Type _empty_element;
	int _num_of_elements;

public:
	Set();
	Set(Type empty_element);

public:
	BOOL contains(const Type& member) const;
	BOOL insert(const Type& element);
	Set<Type, SetSize> // union
		operator+(const Set<Type, SetSize>& Set2) const;
	Set<Type, SetSize> // intersection
		operator*(const Set<Type, SetSize>& Set2) const;
	Set<Type, SetSize> // difference
		operator-(const Set<Type, SetSize>& Set2) const;
	bool // test if its subset
		operator<=(const Set<Type, SetSize>& Set2) const;
	bool // test if its equal
		operator==(const Set<Type, SetSize>& Set2) const;
	void print() const;
	void read();
};