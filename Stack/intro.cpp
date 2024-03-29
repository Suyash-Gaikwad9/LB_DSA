#include<iostream>
#include<stack>
using namespace std;

class Stack{
    //properties
    public:
        int *arr;
        int top;
        int size;
    
    ///behaviour
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack is Full..!"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack is Empty..!"<<endl;
        }
    }

    int peak(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty..!"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }


};

int main(){

    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);

    cout<<st.peak()<<endl;
    st.pop();
    cout<<st.peak()<<endl;
    st.pop();
    cout<<st.peak()<<endl;
    st.pop();
    cout<<st.peak()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is empty..!"<<endl;
    }
    else{
        cout<<"Stack is not empty..!"<<endl;
    }


    /*creation of stack using STL
    stack<int>s;

    //insertion operation
    s.push(2);
    s.push(3);

    //removing element from stack
    s.pop();

    cout<<"Printing top element : "<<s.top()<<endl;

    //checking if stack is empty or not
    if(s.empty()){
        cout<<"Stack is Empty..!"<<endl;
    }
    else{
        cout<<"Stack is not empty..!"<<endl;
    }

    cout<<"Size of stack is : "<<s.size()<<endl;
    */




    return 0;
}