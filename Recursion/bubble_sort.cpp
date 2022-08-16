#include<iostream>
using namespace std;

void sortArray(int arr[],int n){

    //base case
    if(n==0 || n==1){
        return ;
    }

    //proecessing
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    //recursive call
    sortArray(arr,n-1);

}



int main(){

    int arr[10] = {4,2,6,5,9,44,66,23,65,89};
    int n = 10;
    
    sortArray(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;




    return 0;
}