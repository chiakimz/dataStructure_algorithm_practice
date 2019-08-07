#pragma once
#include "sets.hpp"


class Int_sets : public Set<int, 1000> 
{
public:
	Int_sets();
	~Int_sets();

public:
	Int_sets // union
		operator!(const Set<int, 1000>& Set2) const;
};
