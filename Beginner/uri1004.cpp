/*
*	Created by Leonardo Goulart
*	Student at UFRN - Federal university of Rio Grande do Norte
*	I.T. Bachelor degree
*	Question 1004 - Simple Product
*/

/*
*	Header 
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
	int prod;

	/*
	*	Insert two integers
	*/
	std::cin >> valueA;
	std::cin >> valueB;

	prod = valueA * valueB;

	/*
	*	Print prod
	*/
	std::cout << "PROD = " << prod << std::endl;

/*
*	Default
*/
return 0;
}
