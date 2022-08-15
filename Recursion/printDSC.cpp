#include<iostream>
using namespace std;

void printASC(int n){

    //base case
    if(n==0){
        return ;
    }

    cout<<endl<<n<<" ";

    printASC(n-1);

    
    
}


int main(){

    int n;
    cin>>n;

    printASC(n);


    return 0;
}