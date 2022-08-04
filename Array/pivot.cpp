#include<iostream>
using namespace std;


int pivote(int arr[], int n){

    int start =0;
    int end = n-1;
    int mid = start + (end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;

}


int main(){
    int n;
    cout<<"Enter the total number of element :"<<endl;
    cin>>n;
    int arr[100];
    cout<<"Enter the values inside the array :";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"The pivote element is present at :"<< pivote(arr,n);







    return 0;
}