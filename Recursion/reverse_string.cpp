#include<iostream>
using namespace std;

void reverse(string &str, int i){
    int n = str.length()-1; 
    if(i>n){
        return ;
    }

    //processing
    swap(str[i], str[n]);
    i++;
    n--;

    //recursive call
    reverse(str,i);

}

int main(){

    string str = "Suyash";

    reverse(str,0);

    cout<<str<<endl;

    return 0;
}