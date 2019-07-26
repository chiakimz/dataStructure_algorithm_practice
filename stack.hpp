#include <iostream>
typedef int BOOL;
enum{FALSE, TRUE};

template <class Type, int maxsize> class stack
{
protected:
	Type element[maxsize];
	int stack_pointer;

public:
	BOOL empty() const;
	BOOL full() const;

	stack();
	virtual ~stack();
	virtual BOOL pop(Type& top_elem);
	virtual BOOL push(const Type& new_elem);
};