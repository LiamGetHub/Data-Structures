#include "LinkedList.h"

Node::Node(int value) : data(value), next(nullptr) {}

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::~LinkedList() {
    // TODO: Implement destructor to free memory
}

void LinkedList::printList() const {
    Node* temp = head;
    while (temp) {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    std::cout << "nullptr" << std::endl;
}

void LinkedList::addNode(int value) {
    
}

// TODO: Implement addNode(int value)
// TODO: Implement deleteNode(int value)
