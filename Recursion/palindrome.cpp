#include<iostream>
using namespace std;

bool checkPal(string str, int i, int j){
    //base case 
    if(i>j){
        return true;
    }

    //processing
    if(str[i] != str[j]){
        return false;
    }
    else{
        //recursive call
        return checkPal(str, i+1, j-1);
    }
}


int main(){

    string str = "Neel";

    bool ans = checkPal(str, 0, str.length()-1);

    if(ans){
        cout<<"String is palindrome..!"<<endl;
    }
    else{
        cout<<"String is not palindrome..!"<<endl;
    }

    return 0;
}