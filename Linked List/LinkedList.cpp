#include "LinkedList.h"

Node::Node(int value) : data(value), nextNode(nullptr) {}

LinkedList::LinkedList() : headPtr(nullptr) {}

LinkedList::~LinkedList() {
    // TODO: Implement destructor to free memory
}

void LinkedList::printList() const {
    Node* temp = headPtr;
    while (temp) {
        std::cout << temp->data << " -> ";
        temp = temp->nextNode;
    }
    std::cout << "nullptr" << std::endl;
}

void LinkedList::appendNode(Node* newNode){
    if (!newNode) {
        std::cout << "Attempted to append a nullptr node!" << std::endl;
        return;
    }

    if (headPtr == nullptr) // if the list is empty
    {
        headPtr = newNode;
        std::cout << "List was empty. Set headPtr to: " << headPtr->data << std::endl;
    }
    else 
    {
        Node* nodePtr = headPtr;
        while (nodePtr->nextNode != nullptr)
        {
            nodePtr = nodePtr->nextNode;
        }
        nodePtr->nextNode = newNode;
        std::cout << "Appended node with value: " << newNode->data << " at address: " << newNode << std::endl;
    }
}


Node* LinkedList::createNode(int value)
{
    Node* newNode = new Node(value);
    std::cout << "Created Node with value: " << newNode->data << " at address: " << newNode << std::endl;
    return newNode;
}

// need to implement:   void deleteNode(int value); 
//need to implement:    bool searchNode(int value);
