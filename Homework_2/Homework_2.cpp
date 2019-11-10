// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
int r, sqrtR, res, sum;

using namespace std;

int Sqrt(int x) {
	int m, y, b;
	m = 0x4000;
	y = 0;
	while (m != 0) {
		b = y | m;
		y = y >> 1;
		if (x >= b) {
			x = x - b;
			y = y | m;
		}
		m = m >> 2;
	}
	return y;
}

int main()
{
	res = 0;
	cin >> r;
	sqrtR = Sqrt(r);
	if (r == sqrtR * sqrtR)
		for (int x = 1; x < sqrtR; x++) {
			sum = Sqrt(r - 1 - x * x);
			if (sum * sum != r - 1 - x * x) sum++;
			res += sum;

		}
	else
		for (int x = 1; x <= sqrtR; x++) {
			sum = Sqrt(r - x * x);
			if (sum * sum != r - x * x) sum++;
			res += sum;
		}
	int firstLine = sqrtR * sqrtR == r ? sqrtR : sqrtR + 1;
	cout << res + firstLine;
}
