#include <string>
#include <iostream>

 std::string greet(const std::string& n)
{
	 return "Hello, < n > how are you doing today?";
	
}

int main()
{

	greet("Ryan");
	std::cout << "Hello, < n > how are you doing today?";


}