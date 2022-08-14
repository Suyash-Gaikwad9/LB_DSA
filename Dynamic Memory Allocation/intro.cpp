#include<iostream>
using namespace std;

void PrintArray(int *arr, int n){
    cout<<"Printing all elements..!"<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int GetSum(int *arr, int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    return sum;
}


int main(){
/*
    int i = 5;
    int &j = i;

    cout<<"Printing i : "<<i<<endl;
    i++;
    cout<<"Printing i : "<<i<<endl;
    cout<<endl;
    cout<<"Printing j : "<<j<<endl;
    j++;
    cout<<"Printing j : "<<j<<endl;

    cout<<"Address of i : "<<&i<<endl;
    cout<<"Address of j : "<<&j<<endl;
*/


    int n;
    cout<<"Enter total number of elements : ";
    cin>>n;

    int *arr = new int[n];

    //taking input
    cout<<"Enter element one by one "<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    PrintArray(arr, n);
    int ans = GetSum(arr,n);

    cout<<"The Sum of all elements is "<<ans<<endl;


    return 0;
}