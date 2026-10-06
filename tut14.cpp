#include<iostream>
using namespace std;

struct employee {

    int employeeID; //4 
    char employeeCharacter; //1
    float salary; //4
    // Here 4 + 1 + 4 all bytes are used up completely since all happen at the same time

};

typedef union expense {
    int car; //4
    char fav; //1
    float cash; //4
    //Here each var is used like one at a time as a result memory is optimized(better managed)

} un;

int main() {
    cout<< "Structures"<< "\n";
    struct employee vaibhav;
    vaibhav.employeeID= 90;
    vaibhav.employeeCharacter= '*';
    vaibhav.salary= 650000.0f;

    cout<< "ID is:" <<vaibhav.employeeID << endl;
    cout<< "Character is:" <<vaibhav.employeeCharacter << endl;
    cout<< "Salary is: "<<vaibhav.salary << endl;

    struct employee christucker;
    christucker.employeeID= 56;
    christucker.employeeCharacter= '3';
    christucker.salary= 350000.0f;

    cout<< "ID 2 is:" <<christucker.employeeID << endl;
    cout<< "Character 2 is:" <<christucker.employeeCharacter << endl;
    cout<< "Salary 2 is: "<<christucker.salary << endl;

    cout<< "Unions:"<< endl;
    un steve ;
    steve.cash= 90000.0000f;
    cout<<steve.cash<< endl;

    cout<< "Enums"<< endl;
    enum meals{bf, lu, di};
    // cout<< bf<< endl;
    // cout<< lu<< endl;
    // cout<< di<< endl;

    meals m1= bf;
    cout<< (m1==0);
    return 0;
}