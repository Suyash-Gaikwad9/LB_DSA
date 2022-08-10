#include<iostream>
using namespace std;

bool search(int array[][4], int key, int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(array[i][j]==key){
                return true;
            }
        }
    }
    return false;
}


int main(){

    int arr[3][4];
    
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }
    //printing the 2d array
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter the element you want to search : ";
    int target;
    cin>>target;

    bool ans = search(arr,target, 3,4);
    if(search){
        cout<<"Element Found...!"<<endl;
    }
    else{
        cout<<"Elemet Not found...!"<<endl;
    }

    return 0;
}