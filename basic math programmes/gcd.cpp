#include<iostream>
using namespace std;


int GCD(int a, int b){
    if(a==0){
        return b;
    }
    else{
        return a;
    }

    while(a!=b){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}

int main(){

    int a,b;
    cout<<"Enter 2 numbers to calculate GCD : ";
    cin>>a>>b;

    int answer = GCD(a,b);

    cout<<"The GCD is : "<<answer<<endl;

    return 0;

}