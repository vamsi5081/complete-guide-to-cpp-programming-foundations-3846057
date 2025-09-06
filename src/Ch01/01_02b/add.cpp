#include <iostream>

// Function declaration
float add(float a, float b){
    return a + b; // Return the sum of a and b
}

int main(){
    float num_1, num_2, result1, result2;

    std::cout << "Enter number 1: " << std::flush;
    std::cin >> num_1;
    std::cout << "Enter number 2: " << std::flush;
    std::cin >> num_2;
    int result = add(num_1, num_2); // Function call with arguments 5 and 3
    std::cout << "The sum is: " << result << std::endl;
    return 0;
}