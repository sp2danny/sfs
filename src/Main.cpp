
#include <iostream>
#include <stdexcept>






extern void Main();

int main(int, char**)
{
	try
	{
		Main();
	}
	catch (...)
	{
		std::cout << "unknown exception.\n";
	}
}

