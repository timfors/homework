
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
		cout << "Enter row " << i + 1 << ":" <<  endl;
		int* row = new int[m];
		for (int j = 0; j < m; j++) {
			cin >> row[j];
		}
		arrA[i] = row;
	}

	vector<int> firstRow;
	for (int i = 0; i < m; i++)
		firstRow.push_back(arrA[0][i]);
		
	

	
	for (int i = 1; i < n; i++) {
		int a = 0;
		int j = 0;
		while (j < m && a < firstRow.size()) {
			if (firstRow.at(a) == arrA[i][j]) 
			a++;
			else if (firstRow[a] < arrA[i][j]) {
				firstRow.erase(firstRow.begin() + a);
				j--;
			}
			j++;
		}
	}
	

	cout << firstRow[0];
	 
	for (int i = 0; i < n; i++) 
		delete arrA[i];
	
	delete arrA;

}

