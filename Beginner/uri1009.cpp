/*
*   Created by Leonardo Goulart
*   Student at UFRN - Federal university of Rio Grande do Norte
*   I.T. Bachelor degree
*   Question 1009 - Salary With Bonus
*/

#include <iostream>

int main() {
   
    std::string employeeName;
    double fixSalary;
    double extraSalary;
    double soldValue;
    double finalSalary;
    
    /*
    *	Inputs
    */
    std::getline( std::cin, employeeName );
    std::cin >> fixSalary;
    std::cin >> soldValue;
    
    extraSalary = ( ( soldValue ) * 15 ) / 100;
    finalSalary = fixSalary + extraSalary;
    
    /*
    *	Set the decimal precision of floating variable
    */
    std::cout << std::fixed;
    std::cout.precision(2);
    
    /*
    *	Output
    */
    std::cout << "TOTAL = R$ " << finalSalary << std::endl;
    
    return 0;
}