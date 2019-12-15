
#include <iostream>
#include <map>
using namespace std;

int main()
{
	int n, t, result = 0;
	cout << "enter N" << endl;
	cin >> n;
	cout << "enter array" << endl;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >>arr[i];

	cout << "enter T" << endl;
	cin >> t;

	map <int, bool> foundedNumbers;


	for (int i = 0; i < n; i++) {
		int num = arr[i];
		if (foundedNumbers[t - num]) 
			result++;
		else 
			foundedNumbers[num] = true;
	}

	cout << result;
}
