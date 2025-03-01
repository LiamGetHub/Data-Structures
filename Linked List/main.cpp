#include "LinkedList.h"

int main() {
    LinkedList list;
    
    // TODO: Add test cases when functions are implemented
   list.appendNode(list.createNode(1));
   list.appendNode(list.createNode(2));
   list.appendNode(list.createNode(4));
   list.appendNode(list.createNode(5));
   list.appendNode(list.createNode(3));
   list.appendNode(list.createNode(2));
   list.appendNode(list.createNode(5));



    list.printList(); // Should print an empty list
    return 0;
}
