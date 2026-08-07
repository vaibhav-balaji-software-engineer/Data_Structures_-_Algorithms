#include<iostream>
using namespace std;

int main() {
    //DataType which holds the address of other data types
    int a=90;
    int * b;
    b= &a;
    //&-->address operator
    //*-->dereferencing operator
    cout<<"Address of A "<< &a<< endl;
    cout<<"Address of A(more easier) "<< b<<endl;
    cout<< "Value of B "<<*b<<endl;

    //pointer to pointer use ** eg int**c= &b
    int **c= &b;
    cout<<"Address of B "<<c<<endl;
    cout<<"Address of *C alone"<<*c<<endl; // *c would be pointing towards b and not &b, and b points towards &a thereby &a is displayed
    cout<< "Value of C " << **c;
    return 0;
}