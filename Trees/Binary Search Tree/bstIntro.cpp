#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void inOrder(Node *root)
{
    // recursive approch so first is base case
    if (root == NULL)
    {
        return;
    }

    // LNR - Left Node Right
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(Node *root)
{
    // recursive approch so first is base case
    if (root == NULL)
    {
        return;
    }

    // NLR - Node Left Right
    cout << root->data << " ";

    preOrder(root->left);

    preOrder(root->right);
}

void postOrder(Node *root)
{
    // recursive approch so first is base case
    if (root == NULL)
    {
        return;
    }

    // LRN - Left Right Node
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {

        Node *temp = q.front();

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

Node *insertIntoBST(Node *root, int d)
{
    // base case
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if (d > root->data)
    {
        // we need to insert in right part
        root->right = insertIntoBST(root->right, d);
    }
    else
    {
        // we need to insert in left part
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}

Node *minVal(Node *root)
{
    Node *temp = root;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node *maxVal(Node *root)
{
    Node *temp = root;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

Node *deletefromBST(Node *root, int val)
{
    // base case
    if (root == NULL)
    {
        return root;
    }

    if (root->data == val)
    {
        // delete node which has 0 child nodes
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // delete node which has 1 child node

        // left child
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        // right child
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // delete node which has 2 child nodes
        if (root->left != NULL && root->right != NULL)
        {
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deletefromBST(root->right, mini);
            return root;
        }
    }
    else if (root->data > val)
    {
        // goto left side of tree to delete node
        root->left = deletefromBST(root->left, val);
        return root;
    }
    else
    {
        // value is greater than data in root so go to right side of tree to delete the node
        root->right = deletefromBST(root->right, val);
        return root;
    }
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

int main()
{

    Node *root = NULL;
    cout << "Enter data to create BST : ";

    takeInput(root);

    levelOrderTraversal(root);

    cout << "Printing InOrder : " << endl;
    inOrder(root);

    cout << endl
         << "Printing preOrder : " << endl;
    preOrder(root);

    cout << endl
         << "Printing PostOrder : " << endl;
    postOrder(root);

    cout << endl
         << "Min value is : " << minVal(root)->data << endl;

    cout << "Max value is : " << maxVal(root)->data << endl;

    //deleting node from BST

    root = deletefromBST(root, 90);

    levelOrderTraversal(root);

    cout << "Printing InOrder : " << endl;
    inOrder(root);

    cout << endl
         << "Printing preOrder : " << endl;
    preOrder(root);

    cout << endl
         << "Printing PostOrder : " << endl;
    postOrder(root);

    cout << endl
         << "Min value is : " << minVal(root)->data << endl;

    cout << "Max value is : " << maxVal(root)->data << endl;

    return 0;
}