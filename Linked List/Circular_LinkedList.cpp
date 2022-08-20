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


void insertNode(Node* &tail, int element, int d) {

    //empty list
    if(tail==NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        //non empty list
        //assuming that the element is present in the list

        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }

        //element found on curr position
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;


    }

}

void print(Node* &tail){
    Node* temp = tail;


    //empty list
    if(tail == NULL){
        cout<<"List is empty...!"<<endl;
        return;
    }


    do{
        cout<<tail->data <<" ";
        tail = tail->next;
    }while(tail!=temp);

    
    cout<<endl;

}


void deleteNode(Node* &tail, int value){
    //empty list
    if(tail == NULL){
        cout<<"List is empty..!"<<endl;
    }
    else{
        //non empty case
        //assuming that given value is present in the list
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value){
            prev= curr;
            curr= curr->next;
        }    

        prev->next = curr->next;


        //1 node in linked list
        if(curr==prev){
            tail = NULL;
        }

        //>=2 node linked list

        if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr; 


    }
}

bool isCircularList(Node* tail){
    if(tail == NULL){
        //empty list case
        return true;
    }

    //single node case
    Node* temp = tail->next;
    while(temp!= NULL && temp!= tail){
        temp = temp->next;
    }

    if(temp == tail){
        return true;
    }


    return false;
}

int main(){

    Node* tail = NULL;

    //inserting into empty list
    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);
    
    insertNode(tail, 5, 7);
    print(tail);

    if(isCircularList(tail)){
        cout<<"Linked list is circular in nature..!"<<endl;
    }
    else{
        cout<<"Linked list is not circular..!"<<endl;
    }

/*
    insertNode(tail, 7, 9);
    print(tail);

    insertNode(tail, 5, 6);
    print(tail);

    insertNode(tail, 9, 10);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);


    deleteNode(tail,3);
    print(tail);
*/
    return 0;
}