#include<iostream>
using namespace std;

void print(int arr[], int size){
    cout<<"Size of an array is "<<size<<endl;
    
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}


bool linearSearch(int arr[], int size, int k){
    print(arr, size);

    //base case
    if(size == 0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        bool remainingPart = linearSearch(arr+1, size-1,k);
        return remainingPart;
    }
}


int main(){

    int arr[5] = {3,5,1,2,6};
    int size = 5;

    int key = 4;
    bool ans = linearSearch(arr, size, key);

    if(ans == 1){
        cout<<"Element Found "<<endl;
    }
    else{
        cout<<"Element not found "<<endl;
    }


    return 0;
}