class CircularQueue{
    
    int *arr;
    int front;
    int rear;
    int size;
    
    
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        //to check if queue is full or not
        if( (front==0 && rear==size-1) || (rear==(front-1) % (size-1))){
            //cout<<"queue is full"<<endl;
            return false;
        }
        else if(front==-1){    //first element to push
            front=rear=0;
        }
        else if(rear == size-1 && front != 0){
             //condition used to maintain cyclic nature
            rear = 0;
        }
        else{
            rear++;
        }
        //push inside the queue
        arr[rear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        if(front==-1){
            //queue is empty 
            //cout<<"Queue is empty"<<endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if(front==rear){
            //single element present in queue
            front = rear = -1;
        }
        else if(front == size-1){
            //front pointer reached to last index of queue
            front = 0;
        }
        else{
            //normal ppo
            front++;
        }
        return ans;
    }
};