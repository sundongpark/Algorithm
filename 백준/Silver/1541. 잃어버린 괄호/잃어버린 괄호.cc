#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string input;
	int num[51];
	int k = 0, j = 0, l = 0, ans = 0;
	int sum[51];
	for (int i = 0; i < 51; i++)
		sum[i] = 0;
	cin >> input;
	for (int i = 0; i < input.length(); i++)
	{
		if (input.at(i) >= '0' && input.at(i) <= '9')   //문자형태의 숫자를 숫자형태로 num에 저장
		{
			int j, tmp = i;	//숫자 시작
			for (j = 0; input[i] >= '0' && input[i] <= '9'; j++, i++);
			//숫자 끝
			num[k++] = (stoi(input.substr(tmp, j)));	//문자열을 정수로 바꿔 num에 저장
		}
	}
	sum[0] = num[0];
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == '+')
			sum[l] += num[++j];
		else if (input[i] == '-')
			sum[++l] += num[++j];
	}

	ans = sum[0];
	for (int i = 1; i < 51; i++)
		ans -= sum[i];
	cout << ans;
	return 0;
}