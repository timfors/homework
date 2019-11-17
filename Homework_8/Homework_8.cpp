// Homework_8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

void PrintArray(int* arrA, int k)
{
	for (int i = 0; i < k; i++)
		cout << arrA[i] << " ";
	cout << endl;
}

int main()
{
	int n, k;
	cout << "Enter n" << endl;
	cin >> n;
	cout << "Enter k" << endl;
	cin >> k;

	int* numbers = new int[k];
	int* multipliers = new int[k];

	for (int i = 0; i < k; i++) {
		numbers[i] = 1;
		multipliers[i] = 1;
	}

	PrintArray(numbers, k);

	int i = k - 1;

	while (i >= 0) 
	{
		if (numbers[i] == n && multipliers[i] > 0 || numbers[i] == 1 && multipliers[i] < 0) {
			multipliers[i] *= -1;
			i--;
		}
		else {
			numbers[i] += 1 * multipliers[i];
			i = k - 1;
			PrintArray(numbers, k);
		}
	}

}
