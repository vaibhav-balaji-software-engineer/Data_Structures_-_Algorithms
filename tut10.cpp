#include<iostream>
using namespace std;

/*
    Loops in C++
*/
int main() {
     int i=1,n,mul=1;
     cout<< "Enter n";
     cin>>n;

    // int i=0;
    // cout<< i<< endl;
    // i++;
    // cout<< i;

    // Raw for loop example
    // for(i=0(in);i<=5(con);i++(updation)) {
    //     cout<<i<< endl;
    // } 

    /*
    // Raw While loop code
    while(i<=40(condition only)) {
        cout<< i++<<endl;

    }
    */
    
    //Do While
    // do 
    // {
    //     cout<<i++<<endl;
    // }
    // while(false);//Do code runs atleast once without checking and eventually checks it later

    do
    {
        mul= i*n;
        cout<<mul<<endl;
        i++;
    } while (i<=n);
    
      
    return 0;
}