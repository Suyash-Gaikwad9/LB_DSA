#include<iostream>
using namespace std;
int main(){

    int a;
    int i;
    cout<<"Enter number of elements :";
    cin>>a;
    //Taking input
    int arr[a];
    cout<<"Enter values :";
    for(i=0;i<a;i++){
        cin>>arr[i];
    }

    int j = a-1;
    i=0;
    //swapping array by their index
    while (i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    //printing reverse array
    for(i=0;i<a;i++){
        cout<<" "<<arr[i];
    }
    return 0;
  

}
