
#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
	int n,m;
	cout << "Enter count of rows" << endl;
	cin >> n;
	cout << "Enter size of colums" << endl;
	cin >> m;

	int** arrA = new int*[n];
	 
	for (int i = 0; i < n; i++) {
		cout << "Enter line " << i + 1 << ":" <<  endl;
		int* line = new int[m];
		for (int j = 0; j < m; j++) {
			cin >> line[j];
		}
		arrA[i] = line;
	}

	int* posMemory = new int[m];

	int* firstLine = arrA[0];

	for (int i = 0; i < m; i++)
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
	
	 
	delete[] arrA;
	delete[] firstLine;
	delete[] posMemory;

}

