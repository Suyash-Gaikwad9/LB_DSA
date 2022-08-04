#include<iostream>
#include<algorithm>
using namespace std;

int main(){


    int arr1[5]={1, 4, 7, 8, 10};
    int arr2[3]={2, 3, 9};
    int i,j;



    cout<<"Printing both arrays :"<<endl;
    for(i =0; i<5; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(j =0; j<3; j++){
        cout<<arr2[j]<<" ";
    }

    

    i=0;
    j=0;
        while(arr1[i]>=arr2[j]){
            if(arr1[i]>arr2[j]){
                swap(arr1[i],arr2[j]);
                sort(arr1,arr2);
                i++;
        }
        else{
            i++;
        }
        }
            



        
        
        
    
    cout<<"Printing both sorted arrays :"<<endl;
    for(i =0; i<5; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(j =0; j<3; j++){
        cout<<arr2[j]<<" ";
    }



    return 0;
}