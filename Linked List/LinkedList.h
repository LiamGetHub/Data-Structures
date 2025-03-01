#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value);
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList();
    ~LinkedList();

    void printList() const; // Provided as an example, you can implement more

    // TODO: Implement functions in LinkedList.cpp
    void addNode(int value); 
    void deleteNode(int value); 
};

#endif // LINKEDLIST_H
