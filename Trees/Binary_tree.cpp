#include <iostream>
using namespace std;
#include <queue>

class node
{

public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    cout << "Enter the data : " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    // inerting for left part
    cout << "Enter data for inserting in left " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data for inserting at right " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {

        node *temp = q.front();
        
        q.pop();

        if (temp == NULL)
        {
            // previous level is completed
            cout << endl;

            if (!q.empty())
            {
                q.push(NULL);
            }
        }
    
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}


void inOrder(node* root){
    //recursive approch so first is base case
    if(root == NULL){
        return ;
    }
    
    //LNR - Left Node Right
    inOrder(root->left);
    cout<< root->data << " ";
    inOrder(root->right);
}

void preOrder(node* root){
    //recursive approch so first is base case
    if(root == NULL){
        return ;
    }
    
    //NLR - Node Left Right
    cout<< root->data << " ";

    preOrder(root->left);
    
    preOrder(root->right);
}


void postOrder(node* root){
    //recursive approch so first is base case
    if(root == NULL){
        return ;
    }
    
    //LRN - Left Right Node
    postOrder(root->left);
    postOrder(root->right);
    cout<< root->data << " ";
}




void buildFromLevel(node* &root){
    queue<node *>q;
    cout<<"Enter data for root : ";
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout<<"Enter left node for "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1){
            temp -> left = new node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter right node for "<<temp->data<<endl;
        int rigthData;
        cin>>rigthData;

        if(rigthData != -1){
            temp -> right = new node(rigthData);
            q.push(temp->right);
        }

    }
}





int main()
{

    node *root = NULL;

    buildFromLevel(root);
    levelOrderTraversal(root);
    /*
    // creation of the tree
    root = buildTree(root);

    //data - 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    // level order traversal
    // breadth first search

    cout << "Printing the levels " << endl;
    levelOrderTraversal(root);

    cout<<"Inorder traversal is : ";
    inOrder(root);
    cout<<endl;
    cout<<"Pre Order traversal is : ";
    preOrder(root);
    cout<<endl;
    cout<<"Post Order traversal is : ";
    postOrder(root);
    */
    return 0;
}