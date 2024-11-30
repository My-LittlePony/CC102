#include <iostream>
using namespace std;

int main() {
	for (int i = 01; i < 9; ++i) {
		for (int j = 1; j < 8; ++j) {
			if ((i + j) % 2 == 0) {
				cout << "# ";
			} else {
				cout << " * ";
			}
		}
		cout << endl;
	}
}