#include <iostream>

using namespace std;

int main()
{
	char choice;
	
	cout << "is it raining? [y/n]: ";
	cin >> choice;
	
	if(choice == 'y') {
		cout << "Get an Umbrella";
	}
	
	else if(choice =='n')  {
		cout << "12t is sunny";
	}
	
	
}