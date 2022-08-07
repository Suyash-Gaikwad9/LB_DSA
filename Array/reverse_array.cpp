#include<iostream>
using namespace std;

void Print_array(int arr[],int size){
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" "<<endl;
    }
}

void reverse(int arr[],int size){
    int start = 0;
    int end = size-1;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }


}

int main(){

    int n;
    cout<<"Enter the total number of elements in an array :";
    cin>>n;

    int arr[100];
    cout<<"Enter the elements :"<<endl;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"The normal array :"<<endl;
    Print_array(arr,n);

    cout<<"Reversed array :";
    reverse(arr,n);
    cout<<endl;
    Print_array(arr,n);
    
    


    return 0;
}