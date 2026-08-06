#include<iostream>
using namespace std;

int main() {
    // cout<< "This is tutorial 9";
    int age;
    cout<< "Enter age: "<<endl;
    cin>> age;

    //Selection statements(If else/If else-if else ladder etc)
    /*
    if(age<18 && age>=1) {
        cout<< "No Party";
    }
    else if(age==18) {
        cout<< "Get NOC for entry";
    }
    else if(age<1 || age>100) {
        cout<< "It's Invalid";
    }
    else {
        cout<< "Let's Party";
    }
        */


    //Selection statements(Switch case)
    switch(age) {
        case 18:
        {
            cout<< "U R N ADULT"<<endl;
            break; //Just escaping the block of control statements
        }
        case 100:
        {
            cout<< "My man u r more than an adult";
            break;
        }
        default:
        {
            cout<< "Invalid Input";
        }
    }
    cout<< "\nSwitch case is very very easy";

    return 0;
}