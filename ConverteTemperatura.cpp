#include <iostream>
#include <iomanip>

using namespace std;

union temperatura {
	float celsius;
	float fahrenheit;
	
};

int main(){
	setlocale(LC_ALL,"Portuguese");
	temperatura temp;
	int x = 0;
	float celsius = 0;
	float fahrenheit = 0;
	float cf=0;
	float fc=0;
	
	
	cout << "digite (1) para converter Celsius-Fahrenheit ou (2) para converter Fahrenheit-Celsius " << endl;
	cin  >> x;
	
	if (x == 1) { 
		cout << "informe a temperatura " << endl;
		cin  >> celsius;
		temp.celsius = celsius;  
		cf = celsius * 1.8 + 32;
		cout << fixed << setprecision(2);
		cout<< "Temperatura em Fahrenheit: " << cf << endl;
	}
	
	else if (x == 2) {
		cout << "informe a temperatura" << endl;
		cin  >> fahrenheit;
		temp.fahrenheit = fahrenheit;  
		fc = (fahrenheit-32)/1.8;
		cout << fixed << setprecision(2);
		cout<< "Temperatura em Celsius: "<< fc << endl;
			
	}
	
	
	
	return 0;
}
