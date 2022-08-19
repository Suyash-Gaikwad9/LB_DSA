#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;



    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next == NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with data :"<<value<<endl;
    }


};

void insertAtHead(Node* &head, int d){

    //int d is new data so we need to create a new node
    Node* temp = new Node(d);
    //pointing new node to head   [ data | next ]-> head node
    temp->next = head;
    //update head
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}


void insertAtPosition(Node* &head, Node* &tail, int position, int d){

    if(position == 1){
        insertAtHead(head,d);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count<position-1){
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }

    Node* newNode = new Node(d);
    newNode->next = temp->next;
    temp->next = newNode;


}



void deleteNode(int position, Node* &head, Node* &tail){
    //deleting starting position
    if(position==1){
        Node* temp = head;
        head = head->next;
        //memory free
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev= NULL;

        int count = 1;
        while(count<position){
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;

        if(prev->next == NULL){
            tail = prev;
        }
    }


    
}



void print(Node* &head){
    //make a new pointer and point it to head
    Node* temp = head;

    //traverse a loop till it reaches to the last node (last node will be pointing to NULL)
    while(temp != NULL){
        //print the data
        cout<<temp->data<<" ";
        //incremnet the temp
        temp = temp->next;
    }
    cout<<endl;
}



int main(){

    Node* node1 = new Node(10);
    

    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtTail(tail,12);
    print(head);
    insertAtTail(tail,15);
    print(head);
    insertAtPosition(head,tail,4,22);
    print(head);


    deleteNode(4, head,tail);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;


    return 0;
}