#include<iostream>
using namespace std;

void print(int *arr,int s, int e){

    for(int i=s; i<=e; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}

bool binarySearch(int *arr, int s, int e, int k){

    print(arr,s,e);

    //base case when element not found
    if(s>e){
        return false;
    }

    int mid = s + (e-s)/2;
    //when element found
    if(arr[mid]==k){
        return true;
    }

    if(arr[mid]<k){
        return binarySearch(arr,mid+1,e,k);
    }
    else{
        return binarySearch(arr,s,mid-1,k);
    }



}



int main(){

    int arr[6] = {2,4,6,10,12,18};

    int size = 6;
    int key = 18;

    bool ans = binarySearch(arr,0,size-1,key);

    if(ans == 1){
        cout<<"Element found...!"<<endl;
    }
    else{
        cout<<"Element not found..!"<<endl;
    }

    return 0;
}