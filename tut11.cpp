#include<iostream>
using namespace std;

int main() {
    int i;
    // for(i=0;i<=40;i++) {
    //     cout<<i<<endl;
    //         if(i==2) {
    //             break;
    //         }
    //     }

    for(i=1; i<=10; i++) {
 
        if(i>5) {
            continue;
        }
    cout<< i<< endl;
    }
    return 0;
}