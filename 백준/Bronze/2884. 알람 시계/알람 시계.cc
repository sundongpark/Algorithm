#include <iostream>

int main() 
{
	int h, m, time;
	std::cin >> h >> m;
	time = (h * 60 + m - 45) % (60 * 24);
	time = time > 0 ? time : 60 * 24 + time;

	std::cout << (time / 60) % 24 << " " << time % 60;
	return 0;
}