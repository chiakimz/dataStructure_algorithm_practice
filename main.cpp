#include <iostream>
#include "queue.temp.hpp"
#include <vector>

int main()
{
	Queue<int> testQueue(0);
	int delElement;

	testQueue.read();
	testQueue.print();
	std::cout << "Pop a few items? How many?\n";
	int delNum;
	std::cin >> delNum;
	for(int i = 0; i < delNum; i++)
		testQueue.pop();
	testQueue.print();

return 0;
}