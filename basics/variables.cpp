#include<iostream>
#include<stdlib.h>
#define var 10

int main(){
    // defining variables in Cpp
    // data-type varname = value;
    int a = 10;

    // defining constants in cpp
    // const data-type varname = value;

    const int b = 10;
    // we can also define const using #define outside the main function
    // #define var value

    std::cout<< a << b << var <<std::endl;
    return 0;
}