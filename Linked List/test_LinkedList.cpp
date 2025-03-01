#include "LinkedList.h"
#include <iostream>
#include <cassert>

void runTests() {
    LinkedList list;

    // Test 1: Creating and Appending Nodes
    Node* node1 = list.createNode(10);
    Node* node2 = list.createNode(20);
    Node* node3 = list.createNode(30);

    list.appendNode(node1);
    list.appendNode(node2);
    list.appendNode(node3);

    std::cout << "After adding nodes: ";
    list.printList(); // Expected output: 10 -> 20 -> 30

    // Test 2: Searching for Nodes
    assert(list.searchNode(10) == true);
    assert(list.searchNode(20) == true);
    assert(list.searchNode(30) == true);
    assert(list.searchNode(40) == false); // Should not be in the list

    std::cout << "Search tests passed." << std::endl;

    // Test 3: Deleting Nodes
    list.deleteNode(20);
    std::cout << "After deleting 20: ";
    list.printList(); // Expected output: 10 -> 30

    assert(list.searchNode(20) == false);
    assert(list.searchNode(10) == true);
    assert(list.searchNode(30) == true);

    std::cout << "Deletion tests passed." << std::endl;

    // Test 4: Edge Cases - Deleting Head
    list.deleteNode(10);
    std::cout << "After deleting head (10): ";
    list.printList(); // Expected output: 30

    assert(list.searchNode(10) == false);

    // Test 5: Deleting last node
    list.deleteNode(30);
    std::cout << "After deleting last node (30): ";
    list.printList(); // Expected output: empty list

    assert(list.searchNode(30) == false);

    std::cout << "All tests passed!" << std::endl;
}

int main() {
    runTests();
    return 0;
}
