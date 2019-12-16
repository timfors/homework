// 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, m;
	cout << "Enter count of lines" << endl;
	cin >> n;
	cout << "Enter size of rows" << endl;
	cin >> m;
	int** arrA = new int*[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter line " << i + 1 << ":" << endl;
		int* line = new int[m];
		for (int j = 0; j < m; j++) {
			cin >> line[j];
		}
		arrA[i] = line;
	}
	int* posMemory = new int[n];
	int* firstLine = arrA[0];
	for (int i = 0; i < n; i++)
		posMemory[i] = 0;

	int line = 1, row;
	while (line < n && posMemory[0] < m - 1) {
		row = posMemory[line];
		if (arrA[line][row] < firstLine[posMemory[0]]) {
			posMemory[line]++;
		}
		else if (arrA[line][row] > firstLine[posMemory[0]]) {
			posMemory[0]++;
			line = 1;
		}
		else {
			posMemory[line]++;
			line++;
		}
	}

	cout << firstLine[posMemory[0]];
	for (int i = 0; i < n; i++) {
		delete[] arrA[i];
	}
	
	delete[] arrA;
	delete[] posMemory;
}




// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
