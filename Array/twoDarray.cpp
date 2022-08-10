#include<iostream>
using namespace std;

bool search(int array[][3], int key, int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(array[i][j]==key){
                return true;
            }
        }
    }
    return false;
}


//finding the maximum addition from all the rows
int MaxRowSum(int array[][3], int row, int col){
    int maxi = INT_MIN;
    int RowIndex = -1;
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum = sum + array[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            RowIndex = row;
        }
    }
    cout<<"The Maximum coloumn addition is "<<maxi<<endl;
    return RowIndex;
}

//print row sum
void printRowSum(int array[][3], int row, int col){
    cout<<"Addition of all rows : "<<endl;
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum = sum + array[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}


//Printng coloumn sum
void printColSum(int array[][3], int row, int col){
    cout<<"Printing Coloumn sum :"<<endl;
    for(int i=0; i<col; i++){
        int sum = 0;
        for(int j=0; j<row; j++){
            sum = sum + array[j][i];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}


int main(){

    int arr[3][3];
    cout<<"Enter elements inside the array : "<<endl;    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    //printing the 2d array
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
/*
    cout<<"Enter the element you want to search : ";
    int target;
    cin>>target;

    bool ans = search(arr,target, 3,3);
    if(search){
        cout<<"Element Found...!"<<endl;
    }
    else{
        cout<<"Elemet Not found...!"<<endl;
    }

    printRowSum(arr,3,3);
    printColSum(arr,3,3);
*/

//problem in index value;
/*
getting index value as 3 everytime
*/

    
    int ans = MaxRowSum(arr, 3,3);
    cout<<"The Maximum sum lies in "<<ans<<endl;
    return 0;
}