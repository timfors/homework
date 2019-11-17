// Homework_7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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

	int* arrA = new int[k];
	arrA[0] = 1;

	for (int i = 1; i < k; i++) {
		arrA[i] = arrA[i - 1] + 1;
	}

	PrintArray(arrA, k);

	int i = k - 1;
	while (i >= 0) {
		if (arrA[i] == n - (k - 1 - i )) { // n - (k - 1 - i ) - это нужно , поскольку чем меньше i тем меньше максимально возможное число
			i--;
		}
		else {
			arrA[i]++;
			for (int j = i + 1; j < k; j++) // а это мы обновляем все предыдущие элементы 
				arrA[j] = arrA[j - 1] + 1;
			PrintArray(arrA, k);
		}
		

	}

	delete[] arrA;
}
