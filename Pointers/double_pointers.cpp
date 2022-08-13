#include<iostream>
using namespace std;


void update(int **p2){
    // p2 = p2 + 1;
    // //No change
    // *p2 = *p2 + 1;
    // //Change
    **p2 = **p2 + 1;
    //change
}


int main(){

    int i = 5;
    int *p = &i;
    int **p2 = &p;

/*
    //printing very first level
    cout<<endl<<"printing very first level "<<endl;
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    //printing very first level
    cout<<endl<<"printing very first level "<<endl;
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;


    //printing second level
    cout<<endl<<"printing second level "<<endl;
    cout<<&p<<endl;
    cout<<p2<<endl;
*/

    cout<<endl<<"Before Update..!"<<endl;
    cout<<"Before "<<i<<endl;
    cout<<"Before "<<p<<endl;
    cout<<"Before "<<p2<<endl;
    update(p2);
    cout<<endl<<"After Update..!"<<endl;
    cout<<"After "<<i<<endl;
    cout<<"After "<<p<<endl;
    cout<<"After "<<p2<<endl;




    return 0;
}