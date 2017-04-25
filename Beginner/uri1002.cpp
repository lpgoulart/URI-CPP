/*
*	Created by Leonardo Goulart
*	Student at UFRN - Federal university of Rio Grande do Norte
*	I.T. Bachelor degree
*	Question 1002 - Area of a circle
*/

/*
*	Include headers 
*/
#include <iostream>
#include <cmath>

/*
*	Set a define value for pi
*/
#define n  3.14159

int main() {

	/*
	*	 The input contains a value of floating point (double precision)
	*/
	double R;
	
	/*
	*	Set a floating point (double precision)
	*/
	double area;

	/*
	*	Insert a floating number
	*/
	std::cin >> R;
	
	area = n * pow(R,2);

	/*
	*	Set precision
	*/
	std::cout << std::fixed;
	std::cout.precision(4); 

	/*
	*	Print area
	*/
	std::cout << "A=" << area << std::endl;

/*
*	Default
*/
return 0;
}
