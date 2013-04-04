//
// Rat_Dot_Exe's Slot Machine Credit Converter
// Written in C++
//

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
int main() {
	double credits;
	int den;
	double r;
	double pennies = 0.01;
	double twocent = 0.02;
	double nickel = 0.05;
	double dime = 0.10;
	double quarter = 0.25;
	double fcents = 0.50;
	double dollar = 1.00;
	double five = 5.00;
	double ten = 10.00;
	string again = "y";
	
	while (again == "y") {
	cout << "Choose the denomination.\n";
	cout << "1: $0.01\n";
	cout << "2: $0.02\n";
	cout << "3: $0.05\n";
	cout << "4: $0.10\n";
	cout << "5: $0.25\n";
	cout << "6: $0.50\n";
	cout << "7: $1\n";
	cout << "8: $5\n";
	cout << "9: $10\n";
	cin >> den;
	
	cout << "How many credits?\n";
	cin >> credits;
	
	if (den == 1) {
		r = credits * pennies;
		cout << credits << " equals $" << r << "\n";  
	}
	if (den == 2) {
			r = credits * twocent;
			cout << credits << " equals $" << r << "\n"; 
	}
	if (den == 3) {
			r = credits * nickel;
			cout << credits << " equals $" << r << "\n"; 
	}
	if (den == 4) {
			r = credits * dime;
			cout << credits << " equals $" << r << "\n"; 	}
	if (den == 5) {
			r = credits * quarter;
			cout << credits << " equals $" << r << "\n"; 	}
	if (den == 6) {
			r = credits * fcents;
			cout << credits << " equals $" << r << "\n"; 	}
	if (den == 7) {
			r = credits * dollar;
			cout << credits << " equals" << r << "\n"; 	}
	if (den == 8) {
			r = credits * five;
			cout << credits << " equals $" << r << "\n"; 	}
	if (den == 9) {
			r = credits * ten;
			cout << credits << " equals $" << r << "\n"; 	}
	
	cout << "Type y to do another conversion. Type n to quit.\n";
	cin >> again;
  }
	return 0;
}