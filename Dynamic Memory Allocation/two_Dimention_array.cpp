#include<iostream>
using namespace std;

int main(){

    int row;
    cin>>row;


    int col;
    cin>>col;

    int **arr = new int*[row];

    //initialization of an array
    for(int i=0; i<row; i++){
        arr[i] = new int[col];
    }

    //giving values/inputs in array
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    //printing the array
    cout<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //releasing memory
    for(int i=0; i<row; i++){
        delete []arr[i];
    }

    delete []arr;
    





    return 0;
}