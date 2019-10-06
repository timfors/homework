#include <iostream>

using namespace std;

long double Tree(int l, int r)
{
	if (l > r)
		return 1;
	if (l == r)
		return l;
	if (r - l == 1)
		return (long double)l * r;
	int m = (l + r) / 2;
	return Tree(l, m) * Tree(m + 1, r);
}

long double Factorial(int n) {
	if (n < 0)
		return 0;
	if (n == 0)
		return 1;
	if (n == 1 || n == 2)
		return n;
	return Tree(2, n);
}

long double Pow(int num, int n) {
	if (n == 2) {
		return (long double)num * num;
	}
	if (n == 1) {
		return num;
	}
	return n % 2 == 0 ? Pow(num * num, n / 2) : num * Pow(num * num, (n - 1) / 2);
}

int main()
{
	int x;
	double e, res;
	cin >> x >> e;
	double increment = x;
	res = 1;
	int i = 1;
	while ((increment > 0 ? increment : -increment) >= e) {
		increment = Pow(x, i) / Factorial(i);
		cout << "Pow: " << Pow(x, i) << "\n";
		cout << "Factorial: " << Factorial(i) << "\n";
		cout << "Increment: " << increment << "\n";
		res += increment;
		i++;
	}
	cout << res; 
}


