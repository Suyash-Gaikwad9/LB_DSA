#include<iostream>
using namespace std;

int power(int n){
    //base case
    if(n == 0){
        return 1;
    }
    //f(n) = 2 * f(n-1) this is the equation we are following here so f(n) is a big problem and f(n-1) is a small problem
    int smallProblem = power(n-1);
    int bigProblem = 2*smallProblem;


    return bigProblem;
}



int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int ans = power(n);

    cout<<"Power is : "<<ans<<endl;

    return 0;
}