/*
*	Created by Leonardo Goulart
*	Student at UFRN - Federal university of Rio Grande do Norte
*	I.T. Bachelor degree
*	Question 1161 - Fatorial Sum
*/

#include <iostream>

long long int Fatorial (int number) {
	if ( number <= 1) {
		return 1;
	}
	else {
		return number * Fatorial ( number - 1 );
	}
}

int main() {

	int numberOne;
	int numberTwo;
	long long int sum = 0;

	while ( std::cin >> numberOne ) {
		
		std::cin >> numberTwo;

		sum = Fatorial ( numberOne ) + Fatorial ( numberTwo );

		std::cout << sum << std::endl;
	}

return 0;
}
