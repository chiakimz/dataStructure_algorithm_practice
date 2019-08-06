#include <iostream>
#include "sets_temp.hpp"

int main()
{
	set<long, 100> Set1(0), Set2(0), Set3;
	Set1.read();
	Set1.print();
	Set2.read();
	Set2.print();
	Set3 = Set1 + Set2;
	std::cout << "****Union:\n";
	Set3.print();
	Set3 = Set1 * Set2;
	std::cout << "****Intersection:\n";
	Set3.print();
	Set3 = Set1 - Set2;
	std::cout << "****Difference:\n";
	Set3.print();
	bool subset = Set1 <= Set2;
	bool equal = Set1 == Set2;
	std::cout << "banana" << std::endl;
	return 0;
}