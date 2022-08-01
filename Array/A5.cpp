#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" "<<endl;
    }
}


void swapAlter(int arr[], int size){

    for(int i = 0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }

}

int main(){
    int n;
    cout<<"enter the total number of elements in an array :";
    cin>>n;
    int even[100];
    // int odd[100];
    for(int i =0; i<n; i++){
        cin>>even[i];
    }

    cout<<"Before swapping "<<endl;
    printArray(even,n);
    cout<<"After swapping "<<endl;
    swapAlter(even,n);
    printArray(even,n);

    // cout<<"Before swapping "<<endl;
    // printArray(odd,5);
    // cout<<"After swapping "<<endl;
    // swapAlter(odd,5);
    // printArray(odd,5);


    return 0;
}