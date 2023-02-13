// Write the implementation of the member functions of the huffmanTree class here.
#include <iostream>
#include <queue>
#include <stack>
#include <iomanip>
#include "huffmanTree.h"
using namespace std;

/*
Node* huffmanTree::createTree(Node * &queue)
{
    //we will pass in our queue by reference because we will keep updating it

    tree_root = queue;
    PriorityQueue answer;
    Node * temp = tree_root;
    // at the end well return temp
                //Node* newNode = new Node(1,'F');
                //answer.ppush(newNode);
    while(temp != nullptr)
    {
       //cout << temp->letter << " " << temp->frequency << endl;
        answer.ppush(temp);
        temp = temp->next;
    }
    //while size of q is greater than 1

    //while(answer.Getsize() != 1)
    //{
        //cout << answer.Getsize();

    //}
    while(answer.Getsize() > 1)
    {
        Node* left = answer.getFront();
        //int num1 = left->frequency;
        //cout << num1 << " ";
        answer.pop();
        Node* right = answer.getFront();
        //int num2 = right->frequency;
        //cout << num2 << endl;
        answer.pop();
        //int total = num1 +num2;
        cout << left->frequency + right->frequency << endl;
        Node* newNode = new Node(left->frequency+right->frequency,'\0');
        tree_root = newNode;
        newNode->left = left;
        newNode->right = right;
        answer.ppush(newNode);

    }



    //InOrderPrint(tree_root);

}
*/
/*
Node *huffmanTree::createTree(Node *queue)
{
    PriorityQueue pq;

    
    // First, we add all the Nodes from the linked list `queue` to the priority queue
    while (queue != nullptr)
    {
        pq.push(queue->frequency,queue->letter);
        queue = queue->next;
    }

    // Then we keep popping two elements from the priority queue and merging them into a new node until there's only one node left in the queue.
    while (pq.Getsize() > 1)
    {
        Node *left = pq.getFront();
        //cout << "Left frequency: " << left->frequency << endl;
        pq.pop();
        Node *right = pq.getFront();
       //cout << "Right frequency: " << right->frequency << endl;
        pq.pop();
        cout << "Right frequency: " << right->frequency << endl;

        Node *newNode = new Node(left->frequency + right->frequency, '\0');
        //cout << "New node frequency: " << newNode->frequency << endl;
        tree_root = newNode;
        newNode->left = left;
        newNode->right = right;
        pq.push(newNode->frequency, newNode->letter);
    }

    tree_root = pq.getFront();
    return tree_root;
}
*/
Node *huffmanTree::createTree(Node *queue) {
    PriorityQueue pq;

    // First, we add all the Nodes from the linked list `queue` to the priority queue
    while (queue != nullptr) {
        pq.ppush(queue);
        queue = queue->next;
    }

    // Then we keep popping two elements from the priority queue and merging them into a new node until there's only one node left in the queue.
    while (pq.Getsize() > 1) {
        
        Node *left = new Node(pq.getFront()->frequency,pq.getFront()->letter);
        //cout << pq.getFront()->letter << " " << pq.getFront()->frequency<< endl;
        pq.pop();
        Node *right = new  Node(pq.getFront()->frequency,pq.getFront()->letter);
        // cout << pq.getFront()->letter<<" " << pq.getFront()->frequency << endl;

        pq.pop();
        
        Node *newNode = new Node(left->frequency + right->frequency, '\0');

        newNode->left = left;
        newNode->right = right;
        pq.ppush(newNode);
    }
    tree_root = pq.getFront();
    tree_root->right = pq.getFront();
    cout << tree_root->frequency;
    //InOrderPrint(tree_root);
    return tree_root;
}
void huffmanTree::InOrderPrint(Node *source)
{
    if (source == nullptr)
        return;
    InOrderPrint(source->left);
    cout << source->letter << " " << source->frequency << endl;
    InOrderPrint(source->right);
}

void huffmanTree::printTree(Node *root, int space)
{
    if (root == nullptr)
        return;

    space += 10;
    printTree(root->right, space);

    cout << endl;
    for (int i = 10; i < space; i++)
        cout << " ";
    cout << root->letter << "(" << root->frequency << ")" << endl;

    printTree(root->left, space);
}
/*
void huffmanTree::InOrderPrint(Node* source)
{
    if(source == nullptr)
        return;
    InOrderPrint(source->left);
    cout << source->letter << " " << source->frequency << endl;
    InOrderPrint(source->right);
}*/
