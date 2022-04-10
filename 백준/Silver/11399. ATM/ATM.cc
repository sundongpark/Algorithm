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
	std::sort(weights.begin(), weights.end());

	for (int i = 1; i < n + 1; i++)
		for(int j = 0; j < i; j++)
			result += weights.at(j);

	std::cout << result;
	return 0;
}