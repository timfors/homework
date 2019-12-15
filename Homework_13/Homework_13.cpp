// Homework_13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	string str, res = "";;
	char ind;

	cout << "enter index" << endl;
	cin >> ind;
	cout << "enter string" << endl;
	cin >> str;
	

	char actualSymb = str[1], prevSymb = str[0];
	if (ind == 'n') {
		int counter = 1;
		for (int i = 1; i < str.length(); i++) {
			actualSymb = str[i];
			if (actualSymb == prevSymb)
				counter++;
			else {
				res += prevSymb;
				if (counter > 1)
					res += (counter + '0');
				counter = 1;
				prevSymb = actualSymb;
			}
		}
		if (counter > 1) {
			res += actualSymb;
			if (counter > 1)
				res += (counter + '0');
			counter = 1;
		}
		else {
			res += actualSymb;
		}
	}
	else if (ind == 'm') {
		for (int i = 1; i < str.length(); i++) {
			actualSymb = str[i];
			if (actualSymb > '1' && actualSymb <= '9')
				for (int j = 0; j < actualSymb - '0'; j++)
					res += prevSymb; 
			else {
				res += actualSymb;
				prevSymb = actualSymb;
			}
		}
	}

	cout << res;
}

