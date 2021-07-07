#include "MutantStack.hpp"
#include <iostream>
#include <stack>

void test1() {
	std::cout << "______________TEST1:______________" << std::endl;
	MutantStack<int> mstack;
	std::cout << "pushing 5 and 17 to stack..." << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "on top we have:" << std::endl;
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "the size after popping:" << std::endl;
	std::cout << mstack.size() << std::endl;
	std::cout << "pushing 3, 5, 737..." << std::endl;
	mstack.push(3); mstack.push(5); mstack.push(737);
	MutantStack<int>::iterator it = mstack.begin(); MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "iterating the stack:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << " - ";
		++it;
	}
    std::cout << std::endl;
	std::cout << "creating a copy of mutantstack to a regular stack..." << std::endl;
	std::stack<int> s(mstack);
	std::cout << "iterating the new stack by popping the top element:" << std::endl;
	for (int i = 0; i < 4; i++) {
		std::cout << s.top() << " - ";
		s.pop();
	}
    std::cout << std::endl;
}

void test2() {
	std::cout << "______________TEST2:______________" << std::endl;
	MutantStack<int> mstack;
    std::cout << "pushing 5 17 88 64 45 20 to stack" << std::endl;
	mstack.push(5);
	mstack.push(17);
	mstack.push(88);
	mstack.push(64);
	mstack.push(45);
	mstack.push(20);
    std::cout << "on top of stack we have:" << std::endl;
	std::cout << mstack.top() << std::endl;
    std::cout << "size of stack:" << std::endl;
	std::cout << mstack.size() << std::endl;
	mstack.pop();
    std::cout << "size of stack after popping the top element:" << std::endl;
	std::cout << mstack.size() << std::endl;
    std::cout << "on top of stack we have:" << std::endl;
	std::cout << mstack.top() << std::endl;
    std::cout << "iterating the stack:" << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << " - ";
		++it;
	}
    std::cout << std::endl;
}

int main() {
    test1();
	test2();

	return 0;
}