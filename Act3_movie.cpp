#include <iostream>

using namespace std;

int main ()
{
	int age;
	float money;
	char parent;
	
	cout << "Enter age ";
	cin >> age;

	if (age < 13){
		cout <<"With or without parent? [y=yes/no=no] "<<endl;
		cin >> parent;
		if (parent == 'y'){
			cout << "G,PG movie\n";
		}else if (parent == 'n'){
			cout << "G only\n";
		}
	}else if (age >= 14 && age <=15) {
		cout << "With or without parent? [y=yes/n=no] "<<endl;
		cin >>parent;
		if (parent == 'y'){
			cout <<"G,PG,R movie\n";
		}else if (parent == 'n'){
			cout <<"G,PG only\n";
		}
	}else if (age >= 16){
		cout <<"G,PG,R movie\n";
	}
	cout << "Enter money "<<endl;
	cin >> money;
	if (money <= 7.50){
		cout <<"matinee";
	}else if (money >= 7.50){
		cout <<"Evening";
	}
		return 0;
}