#include <iostream>

using namespace std;

int main()
{
	int age;
	cout << "What is your age: ";
	cin >>age;
	if(age >= 0 && age <= 15){
		cout << "You're too young to drive";
	}else if (age == 16){
		cout << "Better clear the road";
	}else if (age >= 16){
		cout << "You're getting pretty old";
	}
	
	return 0;
}