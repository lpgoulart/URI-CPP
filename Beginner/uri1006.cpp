/*
*	Created by Leonardo Goulart
*	Student at UFRN - Federal university of Rio Grande do Norte
*	I.T. Bachelor degree
*	Question 1006 - Average 2
*/

/*
*	Include headers 
*/
#include <iostream>

int main() {

	/*
	*	 The input contains three values of floating point (double precision)
	*/
	double valueA;
	double valueB;
	double valueC;
	
	/*
	*	Set a floating point (double precision)
	*/
	double average;

	/*
	*	Insert a floating number
	*/
	std::cin >> valueA;
	std::cin >> valueB;
	std::cin >> valueC;
	
	average = ( ( valueA * 2 ) + ( valueB * 3 ) + ( valueC * 5 ) ) / 10;

	/*
	*	Set precision
	*/
	std::cout << std::fixed;
	std::cout.precision(1); 

	/*
	*	Print average
	*/
	std::cout << "MEDIA = " << average << std::endl;

/*
*	Default
*/
return 0;
}
