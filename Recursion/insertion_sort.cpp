#include<iostream>
using namespace std;

void sortArray(int *arr, int n){
    //base case
    if(n==0 || n==1){
        return ;
    }

    //processing 
    int i = 1;
    int j = i-1;
    for(i=1; i<n;i++){
        int temp = arr[i];
        for(j = i-1; j>=0; j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
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