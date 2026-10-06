#include<iostream>
using namespace std;

int sum(int a, int b); // Concept of function prototyping
void g();
int main() {
    int num1, num2; //Actual Parameters
    cout<<"N1: "<< endl;
    cin>>num1;
    cout<<"N2: "<< endl;
    cin>>num2;
    cout<<"Sum: "<< sum(num1,num2)<<endl;
    g();
    return 0;
}
//a and b here in sum() are formal parameters
int sum(int a , int b) {
    int c ;
    c= a+ b;
    return c;
}

void g() {
    //void indicates return 0
    cout<< "Power";
}