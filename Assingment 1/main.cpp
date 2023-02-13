// Write your program here
#include <iostream>
#include <fstream>
#include <queue>
#include <stack>
#include "huffmanTree.h"
using namespace std;

int main()
{
    //string filename;
    //cin >> filename;

    ifstream fin("text.txt");
    //priority_queue<pair<int,char >  > pq;
    stack<pair<int,char> > s;

    queue<pair<int,char> > practiceQ;


    char letter;
    int frequency;

    
    queue<Node*> Nodeq;
    stack<Node*> Nodes;
    /*
    while we read in from our file, we will read in letter and frequency.
    we will push it into our priority Queue, the lower the frequency the higher the priority in our queue.
    if frequencys match, we compare the ascii value.
    we will push from the top of our priority queue into our stack so that in our stack our top will be the one with lowest frequency ane ascii value
    */
   /*
    while(fin >> letter , fin >> frequency)
            pq.push(make_pair(frequency, letter));

    while(!pq.empty())
    {
        cout << "pq: " <<pq.top().second << " " << pq.top().first << endl;
        practiceQ.push(pq.top());
        s.push(pq.top());
        pq.pop();
    }
    while(!practiceQ.empty())
    {
        cout << practiceQ.front().second << " " << practiceQ.front().first << endl;
        practiceQ.pop();
    }
    */
    //tree.insert(s.top().first, s.top().second,root , Nodeq, Nodes);

    PriorityQueue pq;
    
    //pq(frequency,letter);
    //Node* tally = pq.getFront();

    Node* newNode = new Node(3,'A');
    pq.ppush(newNode);
    newNode = new Node(3,'C');
    pq.ppush(newNode);      
    newNode = new Node(1,'B');
    pq.ppush(newNode);
    newNode = new Node(2,'D');
    pq.ppush(newNode);

    //pq.print(pq.getFront());


   
    //huffTree.createTree(tp);

  

    huffmanTree huffTree;
    Node* test = pq.getFront();
    //Node* he = huffTree.createTree(test);    
    huffTree.InOrderPrint(huffTree.createTree(test));
    
    // Use the root of the Huffman tree as needed
    //huffmanTree huffTree;
    //Node* rot = pq.getFront();  // create the root node of the Huffman tree
    
    // call the insert function
   // huffTree.insert(rot);

    //pq.print(tally);


    /*
    pq.ppush(3,'A',tally);
    pq.ppush(3,'C',tally);
    pq.ppush(1,'B',tally);
    pq.ppush(2,'D',tally);
    */



    
    //pq.print(pq.getFront());
    //cout << pq.Getsize();
    //pq.pop();
    //huffmanTree mytree;
    //Node * host = pq.getFront();
    
    //mytree.insert(host);
    //Node * hosting = pq.getFront();
    //mytree.InOrderPrint(hosting);
    //huffmanTree huffman;
    //Node* rot = huffman.getRoot(); // initialize the root node of your Huffman Tree

    // call the InOrderPrint function

   

    //huffmanTree test;
    //Node* input = pq.getFront();
    //test.insert();
    //Visualize the Huffman tree
    






    
    
    /*
    Node* rot = huffTree.getRoot();
    huffTree.InOrderPrint(rot);
    */
    //pass in top.first(frequency) and top.second(char))

    return 0;
}