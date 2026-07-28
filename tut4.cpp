#include<iostream>
using namespace std;

int global = 9;
void sum() {
    int a;
    cout<< global;

}

int main() {
    int global= 990;
    global= 1000;
    /*
    int a=5;
    int b=4; 
    */

    int a=14, b=15;
    float pi=3.14;
    char alphabet= 'a', character= '*', number= '1';
    bool is_true= false;


    sum();

    cout<<global<<" "<< is_true;

    // cout<< "This is tutorial 4.\nHere the value of a is "<< a << " and the value of b is "<< b;
    // cout<< "\nThe value of pi is: "<< pi;
    // cout<< "\nThe alphabet is "<< alphabet<<", the character is "<< character << " and the number is "<< number;
    return 0;
}