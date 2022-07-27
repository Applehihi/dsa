#include "Node.hpp"
#include "Linked_List.hpp"
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
    std::cout << std::endl;
    std::cout << "Making new linked list list_1" << std::endl;
    Linked_List<int> list_1;
    std::cout << "Pushing int 1" << std::endl;
    list_1.push(1);
    list_1.begin();
    std::cout << "list_1 begin data: " << list_1.getData() << std::endl;
    std::cout << "list_1 append 2" << std::endl;
    list_1.append(2);
    list_1.next();
    std::cout << "list_1 next data: " << list_1.getData() << std::endl;
    std::cout << "Making new empty linked list list_2" << std::endl;
    Linked_List<int> list_2;
    std::cout << "Appending 3 to list_2" << std::endl;
    list_2.append(3);
    list_2.begin();
    std::cout << "list_2 begin data: " << list_2.getData() << std::endl;
    std::cout << "Making new linked list list_3 with elements 4, 5" << std::endl;
    Linked_List<int> list_3;
    list_3.append(4);
    list_3.append(5);
    list_3.begin();
    std::cout << "Node addresses of list_3: " << list_3.begin() << ", " << list_3.begin()->getNext() << std::endl;
    std::cout << "Clearing list_3 with clear" << std::endl;
    list_3.clear();
    std::cout << "list_3 begin: " << list_3.begin() << std::endl;
    std::cout << "list_3 empty: " << list_3.isEmpty() << std::endl;
    std::cout << "Making list_4 with elements char a, c" << std::endl;
    Linked_List<char> list_4;
    list_4.append('a');
    list_4.append('b');
    std::cout << "Inserting b after list_4 begin" << std::endl;
    list_4.begin();
    list_4.insert('b');
    list_4.next();
    std::cout << "list_4 second element: " << list_4.getData() << std::endl;
    std::cout << "Making empty list_5" << std::endl;
    Linked_List<int> list_5;
    std::cout << "Inserting 1 into list_5" << std::endl;
    list_5.insert(1);
    list_5.begin();
    std::cout << "list_5 first element: " << list_5.getData() << std::endl;
    std::cout << "Appending 2 to list_5" << std::endl;
    list_5.append(2);
    list_5.begin();
    std::cout << "Removing first element of list_5" << std::endl;
    list_5.remove();
    list_5.begin();
    std::cout << "list_5 first element: " << list_5.getData() << std::endl;
    std::cout << "1 in list_5?: " << list_5.find(1) << ", 2 in list_5?: " << list_5.find(2) << std::endl;
}