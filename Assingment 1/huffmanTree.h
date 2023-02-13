// Write the definition of the huffmanTree class here.
#include <iostream>
#include <queue>
#include <stack>
using namespace std;



struct Node
{
    int frequency;
    char letter;
    //Node* mytree;

    
    Node * parent;
    // left and right is for the tree
    Node * left,*right; //
    //our next is for the priorityQueue
    Node *next;

    Node(int frequency, char letter): frequency(frequency),letter(letter),parent(nullptr),left(nullptr),right(nullptr),next(nullptr){}
};
class huffmanTree
{
private:
    Node * tree_root;

public:
    // contructor
    huffmanTree() { tree_root = nullptr; }

    // get root
    Node *getRoot() { return tree_root; }

    // insert our node
    //we will return root of tree
    Node* createTree(Node* queue);
    // print in order to check if its right
    void InOrderPrint(Node* source);
    void printTree(Node* root, int space);



    //void buildTree(int *frequencies, char *letters, int n);
};


/*Priority Queue class*/
class PriorityQueue
{
    
    private:
        //our front will have the highest priority
        Node* head;
        int size;

        

    public:
        
        PriorityQueue()
        {
            head = nullptr;
            size = 0;
        }

        Node *getFront(){return head;}
        //~PriorityQueue();
        void push(int frequency,char letter);
        void ppush(Node * tree);
        void pop();
        int Getsize(){return size;}

        void print(Node* root);
        void InOrderPrint(Node* source);

};
