#include "LinkedList.h"

int main() {
    LinkedList list;
    
    // TODO: Add test cases when functions are implemented
   list.appendNode(list.createNode(1));
   list.appendNode(list.createNode(2));
   list.appendNode(list.createNode(4));
   list.appendNode(list.createNode(5));
   list.appendNode(list.createNode(6));
   list.appendNode(list.createNode(7));
   list.appendNode(list.createNode(8));
   list.printList();
   

   if (list.searchNode(1) == true){
        std::cout << "TEST 1 PASSES" << std::endl;
   }
   else {
    std::cout << "TEST 1 FAILED" << std::endl;
   }

   if (list.searchNode(5) == true){
    std::cout << "TEST 2 PASSES" << std::endl;
   }
   else {
    std::cout << "TEST 2 FAILED" << std::endl;
   }

   if (list.searchNode(8) == true){
    std::cout << "TEST 3 PASSES" << std::endl;
   }
   else {
    std::cout << "TEST 3 FAILED" << std::endl;
   }

   if (list.searchNode(10) == false){
    std::cout << "TEST 4 PASSES" << std::endl;
   }
   else {
    std::cout << "TEST 4 FAILED" << std::endl;
   }



    
    return 0;
}
