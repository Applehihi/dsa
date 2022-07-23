#include "Node.hpp"
#include <iostream>

int main(void) {
    std::cout << "Making 2 nodes with type int and data 2 and 4" << std::endl;
    Node<int> node_1(2);
    Node<int> node_2(4);
    std::cout << "Setting node_1 next to node_2" << std::endl;
    node_1.setNext(&node_2);
    std::cout << "node_1 data: " << node_1.getData() << std::endl;
    std::cout << "node_2 data using getNext() from node_1: " << node_1.getNext()->getData() << std::endl;
    std::cout << "Setting node_2 data to 5" << std::endl;
    node_2.setData(5);
    std::cout << "node_2 data: " << node_2.getData() << std::endl;
}