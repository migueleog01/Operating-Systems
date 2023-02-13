#include <iostream>
#include <queue>
#include <stack>
#include "huffmanTree.h"

// in this list, if the frequency is lower it will have higher priority meaning it will be at the front.
// if the frequencys are the same we compare ASCII values of each letter


void PriorityQueue::push(int frequency, char letter)
{
    Node *newnode = new Node(frequency,letter);
    cout << "Pushing frequency: " << frequency << ", letter: " << letter << endl;
   

    if (head == nullptr)
        head = newnode;
    else
    {
        Node *cur = head;
        if (frequency < cur->frequency)
        {
            newnode->next = cur;
            head = newnode;
        }
        else
        {
            Node *previous = nullptr;
            //we took out = sign in frequency
            while (cur != nullptr && (cur->frequency < frequency || (cur->frequency == frequency && cur->letter < letter)))            
            {
                
                previous = cur;
                cur = cur->next;
            }
            if (previous != nullptr)
                previous->next = newnode;
            else
                head = newnode;
            
        }
        newnode->next = cur;
    }
    size++;
}

void PriorityQueue::ppush(Node * tree)
{
     Node *newnode = new Node(tree->frequency,tree->letter);
   

    if (head == nullptr)
        head = newnode;
    else
    {
        Node *cur = head;
        if (tree->frequency < cur->frequency)
        {
            newnode->next = cur;
            head = newnode;
        }
        else
        {
            Node *previous = nullptr;
            //we took out = sign in frequency
            while (cur != nullptr && (cur->frequency < tree->frequency || (cur->frequency == tree->frequency && cur->letter < tree->letter)))            
            {
                
                previous = cur;
                cur = cur->next;
            }
            if (previous != nullptr)
                previous->next = newnode;
            else
                head = newnode;
            
        }
        newnode->next = cur;
    }
    size++;
}



void PriorityQueue::pop()
{
    if(head != nullptr)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
        
    }
    size--;
}


void PriorityQueue::print(Node *root)
{
    if (root == nullptr)
        return;
    while (root != nullptr)
    {
        cout << root->letter << " " << root->frequency << endl;
        root = root->next;
    }
}
    void PriorityQueue::InOrderPrint(Node* source)
    {

    }



