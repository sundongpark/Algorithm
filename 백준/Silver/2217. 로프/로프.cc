#include <iostream>
#include <vector>
#include <algorithm>

int main() 
{
	int n, w, result = 0;
	std::vector<int> weights;

	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> w;
		weights.push_back(w);
	}
	std::sort(weights.rbegin(), weights.rend());
	for (int i = 0; i < n; i++)
	{
		if (result < weights.at(i) * (i + 1))
			result = weights.at(i) * (i + 1);
	}
	std::cout << result;
	return 0;
}