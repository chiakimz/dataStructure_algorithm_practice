#pragma once
#include <iostream>

typedef int BOOL;
enum {FALSE, TRUE}; // enumeration is a distinct type whose value is restricted to a range of values
template <class Type, int SetSize>
class set
{
private:
	Type _element[SetSize];
	Type _empty_element;
	int _num_of_elements;
public:
	set();
	set(Type empty_element);
	BOOL contains(const Type& member) const;
	BOOL insert(const Type& element);
	set<Type, SetSize> // union
		operator+(const set<Type, SetSize>& Set2) const;
	set<Type, SetSize> // intersection
		operator*(const set<Type, SetSize>& Set2) const;
	set<Type, SetSize> // difference
		operator-(const set<Type, SetSize>& Set2) const;
	bool // subset
		operator<=(const set<Type, SetSize>& Set2) const;
	void print() const;
	void read();
};