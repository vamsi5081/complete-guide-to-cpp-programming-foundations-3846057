// Complete Guide to C++ Programming Foundations
// Exercise 00_03 added multiplication
// Using the Exercise Files in GitHub Codespaces, by Eduardo Corpeño 

#include <iostream>

int main(){
    float num_1, num_2, result1, result2;

    std::cout << "Enter number 1: " << std::flush;
    std::cin >> num_1;
    std::cout << "Enter number 2: " << std::flush;
    std::cin >> num_2;
    
    result1 = num_1 + num_2;

    result2 = num_1 * num_2;
    
    std::cout << "The result of the addition is " << result1 << std::endl;
    std::cout << std::endl;
    std::cout << "The result of the multiplication is " << result2 << std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}
