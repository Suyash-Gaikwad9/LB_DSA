#include<iostream>
using namespace std;

int main(){

    int arr[10] = {2,5,6};

    cout<<"Address of the first memory block is : "<<&arr[0]<<endl;
    cout<<"Address of the first memory block is : "<<arr<<endl;
    cout<<"Value at the zero'th index is : "<<arr[0]<<endl;

    cout<<"Value at the zero'th index is : "<<*(arr)<<endl;
    cout<<"Adding value at the zero'th index : "<<(*arr)+1<<endl;
    cout<<"Value at the first index is : "<<*(arr+1)<<endl;

    int *ptr = &arr[0];
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    cout<<*ptr+1<<endl;
    cout<<*(ptr+1)<<endl;
    


    return 0;
}