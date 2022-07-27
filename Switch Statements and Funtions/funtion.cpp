#include<iostream>
using namespace std;

int cal(int n){
    if(n%2==0){
        cout<<"This Number is Even Number "<<endl;
    }
    else{
        cout<<"This Number is an Odd Number "<<endl;
    }
        return 0;
}


int main(){

    int num;
    cin>>num;

    cal(num);



    return 0;
}