/*
*	Created by Leonardo Goulart
*	Student at UFRN - Federal university of Rio Grande do Norte
*	I.T. Bachelor degree
*	Question 1024 - Encryption
*/

/*
*	Header 
*/
#include <iostream>
#include <string>

int main(){
	
	/*
	*	Set integer variables
	*/
	int doOver;
	int half;
	int index;
	int Length;

	/*
	*	Set a string to compare
	*/
	std::string encryption;
	std::string revert;

	std::cin >> doOver;
	std::cin.get();

	for ( int i = 0; i < doOver; i++ ) {

		getline( std::cin, encryption );
		Length = encryption.size();

		for (int index = 0; index < Length; index++) {
			if ( isalpha( encryption[index] ) ) {
				encryption[index] = ( encryption[index] + 3 );
			}
		}
		
		revert = "";

		for (int index = Length - 1; index >= 0; index-- ) {
			revert = revert + encryption[index];
		}

		encryption = revert;

		half = Length/2;

		for (int index = half; index < Length; index++ ) {
			encryption[index] = ( encryption[index] - 1 );
		}
		
		std::cout << encryption << std::endl;
	}


return 0;
}