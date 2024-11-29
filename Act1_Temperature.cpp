#include <iostream>

using namespace std;

int main ()
{
	int temperature;
	cout << "How cold is it in your area?: ";
	cin >>temperature;
	
	if (temperature >=  0 && temperature <=31){
		cout << "Tell user to bring heavy jacket";
	}
	else if (temperature >= 32 && temperature <=50){
		cout << "Tell user to bring a light jacket";
	}
	else if (temperature >= 50){
		cout << "Tell user to not bring any jacket";
	}
	
	return 0;
}