#include<iostream>
using namespace std;

void print(int arr[], int n){

    cout<<"Size of the array is : "<<sizeof(arr)<<endl;

    cout<<"Printing the array...!"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int update(int arr[], int n){

    int sum = 0;
    for(int i=0; i<n; i++){

        sum += arr[i];

    }
    return sum;
}

int main(){

    int arr[5] = {1,2,3,4,5};

    print(arr,5);

    cout<<"The sum off all elemets in array is : "<<update(arr,5)<<endl;



    return 0;
}