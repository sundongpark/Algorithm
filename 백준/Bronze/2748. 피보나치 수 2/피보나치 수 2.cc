#include <iostream>

int main()
{
	int a;
	long long fibonacci[91];

	fibonacci[0] = 0;
	fibonacci[1] = 1;

	for (int j = 2; j <= 90; j++)
		fibonacci[j] = fibonacci[j - 1] + fibonacci[j - 2];

	std::cin >> a;
	std::cout << fibonacci[a] << '\n';

	return 0;
}