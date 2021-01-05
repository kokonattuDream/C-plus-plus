#include <memory> // for std::unique_ptr
#include <iostream>
 
class Resource
{
public:
	Resource() { std::cout << "Resource acquired\n"; }
	~Resource() { std::cout << "Resource destroyed\n"; }
 
	friend std::ostream& operator<<(std::ostream& out, const Resource &res)
	{
		out << "I am a resource\n";
		return out;
	}
};

int example1()
{
	std::unique_ptr<Resource> res1{ new Resource{} }; // Resource created here
	std::unique_ptr<Resource> res2{}; // Start as nullptr
 
	std::cout << "res1 is " << (static_cast<bool>(res1) ? "not null\n" : "null\n");
    //res1 is not null
	std::cout << "res2 is " << (static_cast<bool>(res2) ? "not null\n" : "null\n");
    //res2 is null

	// res2 = res1; // Won't compile: copy assignment is disabled
	res2 = std::move(res1); // res2 assumes ownership, res1 is set to null
 
	std::cout << "Ownership transferred\n";
 
	std::cout << "res1 is " << (static_cast<bool>(res1) ? "not null\n" : "null\n");
	//res1 is null
    std::cout << "res2 is " << (static_cast<bool>(res2) ? "not null\n" : "null\n");
    //res2 is not null

	return 0;
} // Resource destroyed here when res2 goes out of scope
 
// The function only uses the resource, so we'll accept a pointer to the resource, not a reference to the whole std::unique_ptr<Resource>
void useResource(Resource *res)
{
	if (res)
		std::cout << *res << '\n';
}
 
int main()
{
	auto ptr{ std::make_unique<Resource>() };
 
	useResource(ptr.get()); // note: get() used here to get a pointer to the Resource
 
	std::cout << "Ending program\n";
 
	return 0;
} // The Resource is destroyed here
/**
Resource acquired
I am a resource
Ending program
Resource destroyed
**/