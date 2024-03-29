#include <iostream>
typedef int BOOL;
enum{FALSE, TRUE};

template <class Type, int maxsize> class queue
{
protected:
	Type element[maxsize];
	int queue_pointer;
	int end_queue;

public:
	BOOL empty() const;
	BOOL full() const;

	queue();
	virtual ~queue();
	virtual BOOL pop(Type& bottom_elem);
	virtual BOOL push(const Type& new_elem);
};