#include <iostream>
#include <cmath>

using namespace std;

int C(int n, int k)
{
	if (k == n or k == 0)
		return 1;
	else
		return C(n - 1, k - 1) + C(n - 1, k);
}
double b(const int n)
{
	double p = 0;
	for (int k = 0; k <= n * 1. / 2; k++)
		p += C(n - k, k);
	return p;
}
int f(int n)
{
	if (n == 0 or n == 1)
		return 1;
	else
		return f(n - 1) + f(n - 2);
}
int main()
{
	int n;
	int k;
	cout << "n = "; cin >> n;
	cout << "k = "; cin >> k;
	cout << endl;
	cout << "fn = " << f(n) << endl;
	cout << "b = " << b(n) << endl;
}
