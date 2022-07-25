#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int row = 1;
    
    while(row<=n){
        //printing first triangle
        int col = 1;
        while (col<=n-row+1)
        {
            cout<<col<<" ";
            col++;
        }
        //printing second triangle
        col = 1;
        while(col<=(row-1)*2){
            cout<<"* ";
            col++;
        }
        //printing third triangle
        col = n-row+1;
        while(col>= 1){
            cout<<col<<" ";
            col--;
        }
         
        cout<<endl;
        row++;
    }

    
    
}  