#include <iostream>
#include "test.hpp"

void main()
{
	dog dog1(12.5, 40), dog2(20, 30);
	dog dog3 = max(dog1, dog2);
	std::cout << "The larger dog is: ";
	dog3.print();
	std::cout << "Banana" << std::endl;
}