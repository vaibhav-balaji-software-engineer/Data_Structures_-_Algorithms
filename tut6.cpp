#include<iostream>
using namespace std;

int main() {

    int a=9,b=6;

    cout<< "Operators in C++"<< endl;
    cout<< "Following are the types of operators in C++"<< "\n";

    //1.Arithmetic
    cout<< "a+b "<< (a+b)<< endl;
    cout<< "a-b "<< (a-b)<< endl;
    cout<< "a*b "<< (a*b)<< endl;
    cout<< "a/b "<< (a/b)<< endl;
    cout<< "a%b "<< (a%b)<< endl; 
    cout<< "a++ "<< (a++)<< endl; //9 (first prints a, then increaes. So a is printed as 9 but updated as 10 so next time a value is considered 10)
    cout<< "a-- "<< (a--)<< endl; //10 (first prints a, then decreases. So a is printed as 10 but updated as 9 so next time a value is considered 9)
    cout<< "++a "<< (++a)<< endl; //10 (increases the value, then prints it and then saves the value. So 9 is increased to 10, 10 is printed and now a value is 10)
    cout<< "--a "<< (--a)<< endl; //9 (10 is decreased to 9, printed and saved. So next time a is 9)
 

    //2.Assignment Operators (used for assigning values to the variables)
    int c; 
    char d;
    bool _true;

    //3. Comparison operators
    cout<< "Following are the comparison operators"<< endl;
    cout<< "a==b is " <<(a==b)<< endl;
    cout<< "a>b is " <<(a>b)<< endl;
    cout<< "a<b is " <<(a<b)<< endl;
    cout<< "a!=b is " <<(a!=b)<< endl;
    cout<< "a>=b is " <<(a>=b)<< endl;
    cout<< "a<=b is " <<(a<=b)<< endl;

    //4. Logical operators
    cout<< "Following are the comparison operators"<< endl;
    cout<< "Value of this and operator is: " <<((a==b) && (a>b))<< endl;
    cout<< "Value of this or operator is: " <<((a==b) || (a>b))<< endl;
    cout<< "Value of this not operator is: "<< (!(a==b));
    return 0;
}