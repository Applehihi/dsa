#ifndef LINKED_LISTHPP
#define LINKED_LISTHPP
#include "Node.hpp"

//**********
//Class definition
//**********

template <class T>
class Linked_List {
public:
    void push(T p_data);
    void append(T p_data);
    void begin(void);
    void traverse(void);
    T getData(void);
private:
    Node<T>* m_head = nullptr;
    Node<T>* m_current = nullptr;
};

//**********
//Implementation
//**********

template <class T>
void Linked_List<T>::push(T p_data) {
    Node<T>* new_node = new Node<T>(p_data);
    new_node->setNext(this->m_head);
    this->m_head = new_node;
}

template <class T>
void Linked_List<T>::append(T p_data) {
    //If list is initially empty
    if(this->m_head == nullptr) {
        this->m_head = new Node<T>(p_data);
        return;
    }
    //Traverse to end of list
    Node<T>* current = this->m_head;
    while(current->getNext() != nullptr) {
        current = current->getNext();
    }
    //Append
    current->setNext(new Node<T>(p_data));
}

template <class T>
void Linked_List<T>::begin(void) {
    this->m_current = this->m_head;
}

template <class T>
void Linked_List<T>::traverse(void) {
    this->m_current = m_current->getNext();
}

template <class T>
T Linked_List<T>::getData(void) {
    return this->m_current->getData();
}


#endif