// TimeDate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>
#include <iomanip>

long fibonacci(unsigned n)
{
	if (n < 2) return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
auto start = std::chrono::steady_clock::now();
std::cout << "fib(42) = " << fibonacci(42) << std::endl;
auto end = std::chrono::steady_clock::now();

auto test = std::chrono::duration_cast <std::chrono::milliseconds> (end - start).count() / 1000.0;

auto howLong = std::chrono::duration_cast<std::chrono::milliseconds> (end - start).count() / 1000.0;


std::cout << "Wyliczenie tego zajelo: " << << "s" << std::endl;

}

