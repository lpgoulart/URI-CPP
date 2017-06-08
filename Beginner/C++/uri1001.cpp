/*
*	Created by Leonardo Goulart
*	Student at UFRN - Federal university of Rio Grande do Norte
*	I.T. Bachelor degree
*	Question 1001 - Extremely Basic
*/

/*
*	Header that defines the standard input/output stream objects
*/
#include <iostream>

int main() {

	/*
	*	Set two integer values
	*/
	int valueA;
	int valueB;
	
	/*
	*	Set a integer to receive the sum of the two numbers
	*/
	int sum;

	/*
	*	Insert two integers
	*/
	std::cin >> valueA;
	std::cin >> valueB;

	sum = valueA + valueB;

	/*
	*	Print sum
	*/
	std::cout << "X = " << sum << std::endl;

/*
*	Default
*/
return 0;
}
