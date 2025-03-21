#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

class Node {
public:
    int data;
    Node* nextNode;

    Node(int value);
};

class LinkedList {
private:
    Node* headPtr;

public:
    LinkedList();
    ~LinkedList();

    void printList() const; // Provided as an example, you can implement more

    // TODO: Implement functions in LinkedList.cpp
    Node* createNode(int value);
    void appendNode(Node* newNode);
    void deleteNode(int value); 
    bool searchNode(int value);
    void insertAt(int value, int position);
    int getLength();
};

#endif // LINKEDLIST_H
