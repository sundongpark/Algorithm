#include <iostream>

int main()
{
	int n, a;
	int fibonacci[2][41];

	fibonacci[0][0] = 1;
	fibonacci[0][1] = 0;
	fibonacci[1][0] = 0;
	fibonacci[1][1] = 1;

	for (int j = 2; j <= 40; j++)
	{
			fibonacci[0][j] = fibonacci[0][j - 1] + fibonacci[0][j - 2];
			fibonacci[1][j] = fibonacci[1][j - 1] + fibonacci[1][j - 2];
	}

	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> a;
		std::cout << fibonacci[0][a] << ' ' << fibonacci[1][a] << '\n';
	}

	return 0;
}