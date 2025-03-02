#include "LinkedList.h"

Node::Node(int value) : data(value), nextNode(nullptr) {}

LinkedList::LinkedList() : headPtr(nullptr) {}

LinkedList::~LinkedList() {
    Node* nodePtr = headPtr;
    while (nodePtr != nullptr) {
        Node* temp = nodePtr; // Save current node
        nodePtr = nodePtr->nextNode; // Move to next node
        delete temp; // Delete saved node
    }
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

void LinkedList::deleteNode(int value) {
    // If list is empty
    if (headPtr == nullptr) {
        std::cout << "List is empty" << std::endl;
        return;
    }

    // If head node itself is the target
    if (headPtr->data == value) {
        Node* temp = headPtr;
        headPtr = headPtr->nextNode;  // Move head to next node
        delete temp;  // Delete the old head
        return;
    }

    // Traverse list to find the node to delete
    Node* nodePtr = headPtr;
    Node* prevPtr = nullptr;

    while (nodePtr != nullptr && nodePtr->data != value) {
        prevPtr = nodePtr;
        nodePtr = nodePtr->nextNode;
    }

    // If the value was found, remove the node
    if (nodePtr != nullptr) {
        prevPtr->nextNode = nodePtr->nextNode; // Unlink node
        delete nodePtr;  // Free memory
    }
}

void LinkedList::insertAt(int value, int position) {
    Node* newNode = new Node(value);

    if (position == 0) { // Insert at head
        newNode->nextNode = headPtr;
        headPtr = newNode;
        return;
    }

    Node* nodePtr = headPtr;
    for (int i = 0; nodePtr != nullptr && i < position - 1; i++) {
        nodePtr = nodePtr->nextNode;
    }

    if (nodePtr == nullptr) {
        std::cout << "Position out of bounds!" << std::endl;
        delete newNode;
        return;
    }

    newNode->nextNode = nodePtr->nextNode;
    nodePtr->nextNode = newNode;
}
