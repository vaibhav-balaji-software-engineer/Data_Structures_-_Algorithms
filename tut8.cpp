#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    /*
    int a=90;
    cout<< "The original a value: "<<a<<endl;
    a=78;
    cout<< "Value can be changed/updated as its not a constant: " <<a;
    */

    //constants in C++

    /*const float pi= 3.14f;
    cout<<pi;
    pi= 90;
    cout<< "Cannot chnage the constant at all";*/

    /*
    int _90= 3;
    int _80= 0;
    int _70= 8;

    cout<<setw(5)<<_90<<endl;
    cout<<setw(4)<<_80<<endl;
    cout<<setw(3)<<_70<<endl;

    */

    //Operator Precedence
    int a=3,b=4;
    int c= (((a*5)-b)+45);
    cout<< "Value: "<<c;

    return 0;
}