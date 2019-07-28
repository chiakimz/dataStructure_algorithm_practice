#include <iostream>
template<class Type>
Type max(const Type& a, const Type& b)
{
	return (a.get_weight() > b.get_weight() ? a : b);
}

class dog
{
private:
	float _weight;
	int _numTeeth;
public:
	dog(float weight = 10.0, int numTeeth = 32):
		_weight(weight), _numTeeth(numTeeth)
	{}
	void print() { std::cout << _weight << ' ' << _numTeeth;}
	float get_weight() const {return _weight;}
};
