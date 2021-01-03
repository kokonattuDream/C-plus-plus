#include <iostream>
class A
{
public:
	virtual const char* getName() { return "A"; }
    virtual const char* getName1(int x) { return "A"; }
	virtual const char* getName2(int x) { return "A"; }
	virtual const char* getName3(int x) { return "A"; }
    // This version of getThis() returns a pointer to a A class
	virtual A* getThis() { std::cout << "called A::getThis()\n"; return this; }
	void printType() { std::cout << "returned a A\n"; }
};
 
class B : public A
{
public:
    virtual const char* getName1(short int x) override { return "B"; } // compile error, function is not an override
	virtual const char* getName2(int x) const override { return "B"; } // compile error, function is not an override
	virtual const char* getName3(int x) override { return "B"; } // okay, function is an override of A::getName3(int)
	// note use of final specifier on following line -- that makes this function no longer overridable
	virtual const char* getName() override final { return "B"; } // okay, overrides A::getName()
    // Normally override functions have to return objects of the same type as the base function
	// However, because B is derived from A, it's okay to return B* instead of A*
	B* getThis() override { std::cout << "called Derived::getThis()\n";  return this; }
	void printType() { std::cout << "returned a Derived\n"; }
};
 
class C : public B
{
public:
	virtual const char* getName() override { return "C"; } // compile error: overrides B::getName(), which is final
};