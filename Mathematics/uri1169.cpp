/*
*	Created by Leonardo Goulart
*	Student at UFRN - Federal university of Rio Grande do Norte
*	I.T. Bachelor degree
*	Question 1169 - Grains in a Chess Board
*/

#include <iostream>
#include <cmath>

int main() {

	long long int squares;
	int doOver;

	std::cin >> doOver;

	for ( int i = 0; i < doOver; i++ ) {
		std::cin >> squares;

			squares = pow( 2, squares ) / 12000;

		std::cout << squares << " kg" << std::endl;
	}

return 0;
}
