#include<iostream>
using namespace std;

int getmax(int arr[],int size){
    int max = INT_MIN;
    for(int i = 0; i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int getmin(int arr[],int size){
    int min = INT_MAX;
    for(int i = 0; i<size;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int main(){

    int n,i;
    cout<<"Enter number of elements inside the array :"<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the values of an array"<<endl;
    
    
    for(i=0; i<n; i++){
        cin>>array[i];
    }

    cout<<"Printing the array :"<<endl;

    for(i = 0; i<n;i++){
        cout<<array[i]<<endl;
    }

    cout<<"Maximum Value inside the array is :"<<getmax(array,n)<<endl;
    cout<<"Minimum Value inside the array is :"<<getmin(array,n)<<endl;



    return 0;
}