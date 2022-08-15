#include<iostream>
using namespace std;

long long int factorial(long long n){

    //base case
    if(n == 0){
        return 1;
    }
    //f(n) = 2 * f(n-1) this is the equation we are following here so f(n) is a big problem and f(n-1) is a small problem
    int smallProblem = factorial(n-1);
    int bigProblem = n*smallProblem;
    return bigProblem;

}

int main(){

    long long int n;
    cin>>n;
    
    long long int ans = factorial(n);
    cout<<"Factorial is : "<<ans<<endl;


    return 0;
}