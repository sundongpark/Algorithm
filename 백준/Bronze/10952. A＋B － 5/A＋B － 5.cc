#include <iostream>

int main() 
{
	int a, b;
	while (true)
	{
		std::cin >> a >> b;
		if (!a && !b)
			break;
		std::cout << a + b << std::endl;
	}
	return 0;
}