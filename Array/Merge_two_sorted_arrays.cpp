#include<iostream>
using namespace std;

void merge(int arr1[],int n, int arr2[], int m, int arr3[]){
    
    int i= 0;
    int j= 0;
    int k= 0;

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }

    //printing 1st loop remaining values
    while(i<n){
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    //printing 2nd loop remaining values
    while(i<n){
        arr3[k] = arr1[i];
        k++;
        i++;
    }




}

void print (int ans[], int n){
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}


int main(){

    int n1;
    cout<<"Enter the total number of elements in array1 :";
    cin>>n1;
    int n2;
    cout<<"Enter the total number of elements in array2 :";
    cin>>n2;
    
    int arr1[20];
    int arr2[20];

    cout<<"Enter the values inside array 1 :"<<endl;
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }

    cout<<"Enter the values inside array 2 :"<<endl;
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int arr3[50];

    merge(arr1, n1, arr2, n2, arr3);

    print(arr3,n1+n2);


    return 0;

}