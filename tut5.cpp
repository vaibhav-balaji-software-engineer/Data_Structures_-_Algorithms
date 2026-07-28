#include<iostream>
using namespace std;

int main() {
    int num1, num2,sum;
    cout<<"Enter the value of 1st number\n";
    cin>> num1; 
    /* 
    << is Called Instertion operator just for knowledge
    >> is Called extraction operator
    */
    cout<< "Enter the value of 2nd number\n";
    cin>> num2;
    cout<< "The 1st number is "<< num1<< " and "<< "The second number is "<< num2;

    sum= num1 + num2;
    cout<< "\nThe sum is "<< sum;
    return 0;
}