// Type conversion in Cpp

#include<iostream>
#include <stdio.h>

int main() {
    float f1 = 5.5;
  	int a;
  
    // Automatic type conversion from float to int
    a = f1;

    // Manual type conversion from int to float
    float f2 = (float)a;

    std::cout<< a <<std::endl;
    std::cout<< f1 <<std::endl;
    std::cout<< f2 <<std::endl;

    return 0;
}