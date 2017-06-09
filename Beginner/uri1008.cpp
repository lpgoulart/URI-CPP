/*
*   Created by Leonardo Goulart
*   Student at UFRN - Federal university of Rio Grande do Norte
*   I.T. Bachelor degree
*   Question 1008 - Salary
*/

#include <iostream>

int main() {
   
    int valueHour;
    int number;
    float salary;
    float workedHours;
    
    std::cin >> number;
    std::cin >> valueHour;
    std::cin >> workedHours;

    salary = ( valueHour * workedHours );
    
    /*
    *  Set the decimal precision of floating variable
    */
    std::cout << std::fixed;
    std::cout.precision(2);
    
    std::cout << "NUMBER = " << number << std::endl;
    std::cout << "SALARY = U$ " << salary << std::endl;
    
    return 0;
}