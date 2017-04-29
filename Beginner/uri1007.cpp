/*
*   Created by Leonardo Goulart
*   Student at UFRN - Federal university of Rio Grande do Norte
*   I.T. Bachelor degree
*   Question 1007 - Difference
*/

#include <iostream>

int main() {
   
    int varA;
    int varB;
    int varC;
    int varD;
    
    std::cin >> varA;
    std::cin >> varB;
    std::cin >> varC;
    std::cin >> varD;
    
    varA = ( ( varA * varB ) - ( varC * varD ) );
    
    std::cout << "DIFERENCA = " << varA << std::endl;
    
    return 0;
}