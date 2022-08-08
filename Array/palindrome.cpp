#include<iostream>
using namespace std;

int getLength(char name[]){
    int count=0;
    for(int i=0; name[i] != '\0'; i++ ){
        count++;
    }
    return count;
}

void revese(char name[], int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        swap(name[start], name[end]);
        start++;
        end--;
    }
    cout<<"Reverse :"<<name<<endl;
}

char toLowerCase(char ch){
    if(ch>='a'&&ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool isPalindrome(char a[], int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(toLowerCase(a[s]) != toLowerCase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}




int main(){

    char name[20];
    cout<<"Enter Your name :"<<endl;
    cin>>name;


    cout<<"Your name is :";
    cout<<name<<endl;
    int len = getLength(name);
    cout<<"Length = "<<len<<endl;
    revese(name,len);

    int result = isPalindrome(name,len);

    if(result==1){
        cout<<"String is palindrome..!"<<endl;
    }
    else{
        cout<<"String is not a palindrome..!"<<endl;
    }

    return 0;
}