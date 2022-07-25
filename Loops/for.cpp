#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter Value of N :";
    cin>>n;

    bool isPrime = 1;
    for(int i = 2; i<n; i++){
        if(n%i==0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 0){
        cout<<"Number is Not a prime number"<<endl;
    }
    else{
        cout<<"Number is a Prime Number"<<endl;
    }

    return 0;

}