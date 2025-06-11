#include<iostream>
using namespace std;

int main(){

    //Arithmetic Operations
    int a = 2+2 ;  // Addition operation
    int b = 3-1; //Subtraction Operation
    int c = 2*2; //Multiplication Operation
    int d = 4/2; //Division Operation
    int e = 6%2; //Modulo OPeration: returns divion remainder

    int x = 100;
    int y = 100;

    cout<<"Arithmetic Operations\n"<<endl;
    cout<< a <<endl;
    cout<< b <<endl;
    cout<< c <<endl;
    cout<< d <<endl;
    cout<< e <<endl;
    cout<< ++x <<endl;
    cout<< --y <<"\n"<<endl;

    // Comparison Operator

    if(5<2){
        cout<<"False\n";
    }

    if (5>4){
        cout<<"True\n";
    }

    if(5==5){
        cout<<"True\n";
    }

    if(5!=4){
        cout<<"True\n";
    }

    // There are two more, greater than equals to >= and smaller than equals to <=

    return 0;
}