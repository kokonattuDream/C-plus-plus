#include <iostream>
#include <vector>
 
void printStack(const std::vector<int> &stack)
{
	for (auto element : stack)
		std::cout << element << ' ';
	std::cout << "(cap " << stack.capacity() << " length " << stack.size() << ")\n";
}
 
int behavior1()
{
	std::vector<int> stack{};
 
	printStack(stack); // (cap 0 length 0)
 
	stack.push_back(5); // push_back() pushes an element on the stack
	printStack(stack); // 5 (cap 1 length 1)
 
	stack.push_back(3);
	printStack(stack); // 5 3 (cap 2 length 2)
 
	stack.push_back(2);
	printStack(stack); // 5 3 2 (cap 3 length 3)
 
	std::cout << "top: " << stack.back() << '\n'; // back() returns the last element
    //top: 2
	stack.pop_back(); // pop_back() pops an element off the stack
	printStack(stack); // 5 3 (cap 3 length 2)
 
	stack.pop_back();
	printStack(stack); // 5 (cap 3 length 1)
 
	stack.pop_back();
	printStack(stack); // (cap 3 length 0)
 
	return 0;
}

int behavior2()
{
	std::vector<int> stack{};
 
	stack.reserve(5); // Set the capacity to (at least) 5
 
	printStack(stack); //(cap 5 length 0)
 
	stack.push_back(5);
	printStack(stack); // 5 (cap 5 length 1)
 
	stack.push_back(3);
	printStack(stack); //5 3 (cap 5 length 2)
 
	stack.push_back(2);
	printStack(stack); //5 3 2 (cap 5 length 3)
 
	std::cout << "top: " << stack.back() << '\n'; //top: 2
 
	stack.pop_back();
	printStack(stack); //5 3 (cap 5 length 2)
 
	stack.pop_back();
	printStack(stack); //5 (cap 5 length 1)
 
	stack.pop_back();
	printStack(stack); //(cap 5 length 0)
 
	return 0;
}