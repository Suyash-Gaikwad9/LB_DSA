#include<iostream>
using namespace std;

class kQueue{

    public:
    int n;
    int k;
    int *front;
    int *rear;
    int *arr;
    int freeSpot;
    int *next;

    public:
        kQueue(int n, int k){
            this->n = n;
            this->k = k;
            front = new int[k];
            rear = new int[k];
            for(int i=0; i<k; i++){
                front[i] = -1;
                rear[i] = -1;
            }

            next = new int[n];
            for(int i=0; i<n; i++){
                next[i] = i+1;
            }
            next[n-1] = -1;
            arr = new int[n];
            freeSpot = 0;
        }
    //push operation
    void enque(int data, int qn){
        //check if overflow or not
        if(freeSpot == -1){
            cout<<"No empty space is available..!"<<endl;
            return;
        }

        //find index to insert or find first free index
        int index = freeSpot;

        //update freespot
        freeSpot = next[index];

        //check wether inserted element is the first element or not
        if(front[qn-1]==-1){
            front[qn-1] = index;
        }
        else{
            //link new element to the previous element
            next[rear[qn-1]] = index;
        }

        //update next
        next[index] = -1;

        //update rear
        rear[qn-1] = index;

        //push element
        arr[index] = data;

    }
    int deque(int qn){
        //check if queue/array is empty or not
        if(front[qn-1] == -1){
            cout<<"Queue is empty..!"<<endl;
            return -1;
        }
        //find index to pop
        int index= front[qn-1];

        //increment front
        front[qn-1] = next[index];


        //manage free slots
        next[index] = freeSpot;
        freeSpot = index;
        return arr[index];

    }
};


int main(){
    

    kQueue q(10,3);

    q.enque(10,1);
    q.enque(15,1);
    q.enque(20,2);
    q.enque(25,1);


    cout<<q.deque(1)<<endl;
    cout<<q.deque(2)<<endl;
    cout<<q.deque(1)<<endl;
    cout<<q.deque(1)<<endl;
    
    cout<<q.deque(1)<<endl;



    return 0;
}