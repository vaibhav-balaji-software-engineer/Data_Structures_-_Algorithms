#include<iostream>
using namespace std;

int main() {
    int i;
    float marks[4]= {23.77f, 89.99f, 99.92f, 67.00f};
    /*
    //Either an array can be declared like this
    float marks[4]= {23.77, 89.99, 99.92, 67};
    //Or this
    int extraMarks[4];
    extraMarks[0]=12;
    extraMarks[1]=34;
    extraMarks[2]=89;
    extraMarks[3]=100;
    cout<< "ExtraMarks"<< endl;
    cout<< (extraMarks[0])<< endl;
    cout<< (extraMarks[1])<< endl;
    cout<< (extraMarks[2])<< endl;
    cout<< (extraMarks[3])<< endl;

    cout<< "Marks"<< endl;
    cout<< (marks[0])<< endl;
    cout<< (marks[1])<< endl;
    //Changes can be made to arrays like this. i.e 99.92 got changed to 96. Make sure to do it before the print statement
    marks[2]= 96;
    cout<< (marks[2])<< endl;
    cout<< (marks[3])<< endl;
    */
   marks[2]= 96;
   
   cout<<"Using For Loop"<<endl;
    for(i=0; i<4; i++){
        cout<< marks[i]<< endl;
    }
    cout<< "Using While Loop"<< endl;
    i=0;
    while(i<4) {
        cout<< marks[i]<< endl;
        i++;
    }

    cout<< "Using Do While Loop"<< endl;
    i=0;
    do {
        cout<< marks[i]<<endl;
        i++;
    }
    while(i<4);

    //Challenge Done


    //Pointers and Arrays
    cout<< "In terms of pointer:"<< endl;
    float *p;
    p=marks;
    for(i=0; i<4; i++) {
        cout<< *(p + i)<< endl;
    }
    cout<< " The Address of the printed array values"<< endl;
    for(i=0; i<4; i++) {
        cout<< p+ i<< endl;

    }

    //Alternate
    cout<< "Printing using only pointer "<< endl;
    cout<< *(p++)<< endl;
    cout<< *(p++)<< endl;
    cout<< *(p++)<< endl;
    cout<< *(p++)<< endl;

    return 0;
}