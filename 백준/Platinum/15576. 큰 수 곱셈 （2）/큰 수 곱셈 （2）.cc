#include <iostream>
#include <vector>
#include <complex>
#include <string>
#include <algorithm>

using namespace std;

const double PI = acos(-1);
typedef complex<double> cpx;

void FFT(vector<cpx>& f, cpx w)
{
	int n = f.size();
	if (n == 1) return;
	vector<cpx> even(n / 2), odd(n / 2);
	for (int i = 0; i < n; i++)
		(i % 2 ? odd : even)[i / 2] = f[i];
	FFT(even, w * w);
	FFT(odd, w * w);

	cpx wp(1);
	for (int i = 0; i < n / 2; i++)
	{
		f[i] = even[i] + wp * odd[i];
		f[i + n / 2] = even[i] - wp * odd[i];
		wp *= w;
	}
}

vector<cpx> multiply(vector<cpx> a, vector<cpx> b)
{
	int n = 1;
	while (n < a.size() + 1 || n < b.size() + 1)
		n *= 2;
	n *= 2;
	a.resize(n);
	b.resize(n);

	vector<cpx> c(n);

	cpx w(cos(2 * PI / n), sin(2 * PI / n));
	FFT(a, w);
	FFT(b, w);

	for (int i = 0; i < n; i++)
		c[i] = a[i] * b[i];

	FFT(c, cpx(1) / w);
	for (int i = 0; i < n; i++)
	{
		c[i] /= cpx(n);
		c[i] = cpx(round(c[i].real()), round(c[i].imag()));
	}
	return c;
}
int main()
{
	vector<cpx> x, y, z;
	while (1)
	{
		char c = getchar();
		if (c == ' ')
			break;
		x.push_back(cpx(c - '0'));
	}
	while (1)
	{
		char c = getchar();
		if (c == '\n' || c == EOF)
			break;
		y.push_back(cpx(c - '0'));
	}
	reverse(x.begin(), x.end());
	reverse(y.begin(), y.end());

	z = multiply(x, y);

	int len = z.size();
	int carry = 0;
	vector<int> ans;

	for (int i = 0; i < len; i++)
	{
		int n = (int)round(z[i].real()) + carry;
		carry = n / 10;
		ans.push_back(n % 10);
	}
	while (carry > 0)
	{
		ans.push_back(carry % 10);
		carry /= 10;
	}
	int i = ans.size() - 1;
	for (; i >= 0; i--)
	{
		if (ans[i])
			break;
	}
	if (i < 0)
		cout << 0;
	else
	{
		for (; i >= 0; i--)
			cout << ans[i];
	}
	return 0;
}
