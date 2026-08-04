#include<iostream>
using namespace std;
int d=99;
int main() {
    //Built-in DataTypes and scope resolution operators with things like declaring a global variable
    // int a,b,c,d;
    // cout<< "Enter the value of a: ";
    // cin>>a;
    // cout<< "\nEnter the value of b: ";
    // cin>>b;
    // cout<< "\nEnter the value of c: ";
    // cin>>c;
    // d= (a+b+c);
    // cout<< "\nThe sum is: "<<d;
    // cout<< "\nThe global variable is: "<< ::d;

    //float, double and long double literals and talks about float and sizeof() differences
    /*float d=45.67f;
    double e=45.965l;
    cout<<"The size of 34.4 is: "<< sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is: "<< sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is: "<< sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is: "<< sizeof(34.4l)<< endl;
    cout<<"The size of 34.4L is: "<< sizeof(34.4L);*/

    //Reference Variables
    // int _99= 349;
    // int &_67= _99;
    // cout<< _99<<endl<< _67<<endl;

    //TypeCasting Variables
    /*int hgh= 99;
    float opp=87.99999;

    cout<< float(hgh)<<endl;
    cout<< int(opp);*/

    int a=45;
    float b=45.46;

    cout<<float(a)<<endl;
    cout<<(float)a<<endl;

    cout<< int(b)<<endl;
    cout<< (int)b<<endl;
    int c=  int(b); //Just for storing value of b (integer DT in c)

    cout<< (a+b)<<endl;
    cout<< (a+ int(b))<<endl;
    cout<< (a+ (int)b)<<endl;

    return 0;
}

