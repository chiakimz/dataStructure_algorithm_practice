#pragma once
#include "sets.hpp"

template<class Type, int SetSize>
class Int_sets : public Set<int, SetSize - 1> 
{
public:
	Int_sets(){}
	Int_sets(10) : Set<int, 10>(10){}
	~Int_sets(){}

public:
	bool operator!(const Set<int, 10>& Set2) const;
};
