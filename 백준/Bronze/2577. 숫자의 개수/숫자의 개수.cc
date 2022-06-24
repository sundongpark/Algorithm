#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a, b, c;
	int num[10] = { 0 };
	cin >> a >> b >> c;
	a = a * b * c;
	string result = to_string(a);
	for (int i = 0; i < result.size(); i++)
		num[result[i] - '0']++;
	for (int i = 0; i < 10; i++)
		cout << num[i] << '\n';
	return 0;
}