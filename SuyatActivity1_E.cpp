#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 8; i++)
		{
        for (int j = 0; j < (8 - i - 1) * 3; j++) 
		{
            cout << " ";
        }
        for (int k = 1; k <= i + 1; k++)
			{
            cout << " " << k << " ";
        }
        cout << endl;
    }

    return 0;
}