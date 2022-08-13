#include<iostream>
using namespace std;

int main(){
/*
    int a = 5;
    cout<<"Value of a is : "<<a<<endl;

    cout<<"Address of a is : "<<&a<<endl;

    int *p = &a;
    cout<<"Value at pointer is : "<<*p<<endl;
    cout<<"address at pointer is : "<<p<<endl;

    (*p)++;
    cout<<"Updated value at pointer is : "<<*p<<endl;
    p = p+1;
    cout<<"Updated address at pointer is : "<<p<<endl;
*/

/*
    float f = 10.5;
    float p = 2.5;
    float* ptr= &f;
    (*ptr)++;
    *ptr = p;
    cout<<*ptr<<" "<<f<<" "<<p;

*/


    char s[] = "hello";
    char *p = s;
    cout<< s[0] << " " << p[0];



    return 0;
}