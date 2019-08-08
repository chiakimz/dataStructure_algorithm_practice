#include "int_sets.hpp"

Int_sets::Int_sets(){};

Int_sets::~Int_sets(){};

bool Int_sets::operator!() const
{
	Int_sets(10) universal_set = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int marker1 = 0, marker2 = 0, num_of_shared_elements = 0;
	
	while(marker1 < 10)
	{
		if(universal_set._element[marker1] < _element[marker2])
		{
			marker1++;
		}
		else if (universal_set.element[marker1] == _element[marker2])
		{
			marker1++; marker2++;
			while(marker2 < _num_of_elements - 1)
			{
				if(universal_set.element[marker1] != _element[marker2])
					return false;
				else
					marker1++; marker2++;
			}
			return true;
		}
	}
}