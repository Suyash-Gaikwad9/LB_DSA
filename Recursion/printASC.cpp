#include<iostream>
using namespace std;

void printASC(int n){

    //base case
    if(n==0){
        return ;
    }

    printASC(n-1);

    cout<<endl<<n<<" ";
    
}


int main(){

    int n;
    cin>>n;

    printASC(n);


    return 0;
}