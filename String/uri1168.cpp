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
#include <string>

int main(){
	
	/*
	*	Set integer variables
	*/
	int contLeds;
	int index;
	int doOver;
	int stringLength;
	
	/*
	*	Set a string to compare
	*/
	std::string numbers;

	std::cin >> doOver;
	std::cin.ignore();

	for ( int i = 0; i < doOver; i++ ) {

		getline( std::cin,numbers );
		stringLength = numbers.length();
		index = 0;
		contLeds = 0;

		while(1) {

			if( index == stringLength ) break;
	        else if(numbers.at( index ) == '1') contLeds += 2;
	        else if(numbers.at( index ) == '2') contLeds += 5;
	        else if(numbers.at( index ) == '3') contLeds += 5;
	        else if(numbers.at( index ) == '4') contLeds += 4;
	        else if(numbers.at( index ) == '5') contLeds += 5;
	        else if(numbers.at( index ) == '6') contLeds += 6;
	        else if(numbers.at( index ) == '7') contLeds += 3;
	        else if(numbers.at( index ) == '8') contLeds += 7;
	        else if(numbers.at( index ) == '9') contLeds += 6;
			else if(numbers.at( index ) == '0') contLeds += 6;
			index++;
		}

		std::cout << contLeds << " leds" << std::endl;
	}


return 0;
}