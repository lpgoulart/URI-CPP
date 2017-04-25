/*
*	Created by Leonardo Goulart
*	Student at UFRN - Federal university of Rio Grande do Norte
*	I.T. Bachelor degree
*	Question 1005 - Average 1
*/

/*
*	Include headers 
*/
#include <iostream>

int main() {

	/*
	*	 The input contains two values of floating point (double precision)
	*/
	double valueA;
	double valueB;
	
	/*
	*	Set a floating point (double precision)
	*/
	double average;

	/*
	*	Insert a floating number
	*/
	std::cin >> valueA;
	std::cin >> valueB;
	
	average = ( ( valueA * 3.5 ) + ( valueB * 7.5 ) ) / 11;

	/*
	*	Set precision
	*/
	std::cout << std::fixed;
	std::cout.precision(5); 

	/*
	*	Print average
	*/
	std::cout << "MEDIA = " << average << std::endl;

/*
*	Default
*/
return 0;
}
