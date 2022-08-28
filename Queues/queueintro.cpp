#include<iostream>
#include<queue>
using namespace std;

class Queue {
    int *arr;
    int size;
    int qfront;
    int rear;
public:
    Queue() {
        size = 100001;
        arr = new int[size];
        qfront= 0;
        rear = 0;
        
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(qfront==rear){
            return 1;
        }
        else{
            return 0;
        }
    }

    void enqueue(int data) {
        //enqueue means push opearation
        if(rear == size){
            //cout<<"Queue is full"<<endl;
        }
        else{
            arr[rear]= data;
            rear++;
        }
    }

    int dequeue() {
        // dequeue means pop operation
        if(qfront==rear){
            return -1;
        }
        else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront==rear){
                qfront=0;
                rear=0;
            }
            return ans;
        }
    }

    int front() {
        if(qfront==rear){
            return -1;
        }
        else{
            return arr[qfront];
        }
    }
};


int main(){




    /*
    //create a queue
    queue<int>q;

    //push elements in queue
    q.push(10);
    cout<<"Front of queue is : "<<q.front()<<endl;
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout<<"Size of Queue is : "<<q.size();
    cout<<endl;

    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout<<"Size of Queue is : "<<q.size();
    cout<<endl;

    if(q.empty()){
        cout<<"Queue is empty..!"<<endl;
    }
    else{
        cout<<"Queue is not empty..!"<<endl;
    }
    */



    return 0;
}