#include<iostream>
using namespace std;

int search(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;


    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;

        }
        else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}

int main(){

    int n;
    cout<<"Enter total number of elements in an array :";
    cin>>n;

    int arr[100];
    cout<<"Enter the elements :"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int element;
    cout<<"Enter the element you want to search :";
    cin>>element;

    int result = search(arr,n,element);

    if(result==-1){
        cout<<"Element not found...!"<<endl;
    }
    else{
        cout<<"Element found at"<<" "<<result<<" index"<<endl;
    }



    return 0;
}