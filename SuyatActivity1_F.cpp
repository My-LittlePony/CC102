#include <iostream>
using namespace std;

int main() {
	char symbol;
	cout << "Enter symbol: ";
	cin >> symbol;
	for (int i = 0; i < 8; i++) 
	{
		for (int j = 0; j < i; j++)
			{
			cout << " " << symbol;
		}
		cout << " ";
		for (int j = i + 1; j < 8; j++) 
		{
			cout << " " << symbol;
		}
		cout << endl;
	}
}