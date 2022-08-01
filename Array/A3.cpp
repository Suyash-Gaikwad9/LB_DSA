#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i = 0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}


int main(){

    int n;
    cout<<"Enter total number of elements :"<<endl;
    cin>>n;
    int arr[100];
    cout<<"Enter the values :"<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the key value to search :";
    int key;
    cin>>key;


    bool result = search(arr,n,key);

    if(result == 1){
        cout<<"Element found..!"<<endl;
    }
    else{
        cout<<"Element not found..!"<<endl;
    }
    return 0;
}