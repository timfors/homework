#include <iostream>
int x;
double e, res;

using namespace std;

int main()
{
	cout << pow(3, 2);
}


int factorial(int num) {
	return num;
}

int pow(int num, int n) {
	if (n == 2) {
		return num * num;
	}
	return n % 2 == 0 ? pow(num * num, n / 2) : num * pow(num * num, n / 2);
}