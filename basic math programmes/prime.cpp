#include<iostream>
using namespace std;


bool isPrime(int n){

    if(n<=1){
        return false;
    }
    for(int i=2; i<n; i++){
        if(i/10==0){
            return 0;
            break;

        }
    }
    return 1;
}

int main(){
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;

    if(isPrime(n)){
        cout<<"Enterd number is not a prime number...!"<<endl;
    }
    else{
        cout<<"Enterd number is a prime number...!"<<endl;
    }



    return 0;
}