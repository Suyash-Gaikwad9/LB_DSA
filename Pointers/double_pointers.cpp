#include<iostream>
using namespace std;

int main(){

    int i = 5;
    int *p = &i;
    int **p2 = &p;


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



    return 0;
}