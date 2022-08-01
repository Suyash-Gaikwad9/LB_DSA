#include<iostream>
using namespace std;

int sum(int arr[], int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the total number of elements in array :"<<endl;
    cin>>n;
    int arr[100];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int Arr_sum = sum(arr, n);
    cout<<"The addition of all elements in array is :"<<Arr_sum<<endl;

    return 0;
    

}