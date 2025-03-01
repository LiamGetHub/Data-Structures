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

Node* LinkedList::createNode(int value)
{
    Node* newNode = new Node(value);
    std::cout << "Created Node with value: " << newNode->data << " at address: " << newNode << std::endl;
    return newNode;
}

void LinkedList::appendNode(Node* newNode){
    if (!newNode) {
        std::cout << "Attempted to append a nullptr node!" << std::endl;
        return;
    }

    // if the list is empty
    if (headPtr == nullptr) { 
    
        headPtr = newNode;
        std::cout << "List was empty. Set headPtr to: " << headPtr->data << std::endl;
    }

    // go to end of the list
    else {
        Node* nodePtr = headPtr;
        while (nodePtr->nextNode != nullptr)
        {
            nodePtr = nodePtr->nextNode;
        }
        nodePtr->nextNode = newNode;
        std::cout << "Appended node with value: " << newNode->data << " at address: " << newNode << std::endl;
    }
}

bool LinkedList::searchNode(int value) {
    Node * nodePtr = headPtr;

    //if the ist is empty
    if (headPtr == nullptr) {
        return false;
    }

    //check first node cuz we dont in the while loop
    if (headPtr->data == value){
        return true;
    }

    //if not empty, iterate through list
    else {
        //iterates through the list
        while (nodePtr->nextNode != nullptr) {

            if (nodePtr->nextNode->data == value){
                return true; //found
            }
            nodePtr = nodePtr->nextNode;
        }
        return false; //not found && at end of list
    }
}


// need to implement:   void deleteNode(int value); 
//need to implement:    bool searchNode(int value);
