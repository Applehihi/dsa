#ifndef LINKED_LISTHPP
#define LINKED_LISTHPP
#include "Node.hpp"

//**********
//Class definition
//**********

template <class T>
class Linked_List {
public:
    void append(T p_data);
    void push(T p_data);
    void insert(T p_data);
    void remove(void);
    bool find(T p_find);
    void clear(void);
    T getData(void);
    void setData(T p_data);
    void next(void);
    Node<T>* begin(void);
    bool isEmpty(void);
private:
    Node<T>* m_head = nullptr;
    Node<T>* m_current = nullptr;
};

//**********
//Implementation
//**********

template <class T>
void Linked_List<T>::append(T p_data) {
    //If list is initially empty
    if(this->isEmpty()) {
        m_head = new Node<T>(p_data);
        return;
    }
    //Traverse to end of list
    Node<T>* current = m_head;
    while(current->getNext() != nullptr) {
        current = current->getNext();
    }
    //Append
    current->setNext(new Node<T>(p_data));
}

template <class T>
void Linked_List<T>::push(T p_data) {
    Node<T>* new_node = new Node<T>(p_data);
    new_node->setNext(m_head);
    m_head = new_node;
}

template <class T>
void Linked_List<T>::insert(T p_data) {
    //Handle case where list is initially empty
    if(this->isEmpty()) {
        this->push(p_data);
        return; //Short circuit
    }
    //Invalid operation, effectively noop
    if(m_current == nullptr) {
        return; //Short circuit
    }
    Node<T>* new_node = new Node<T>(p_data);
    new_node->setNext(m_current->getNext());
    m_current->setNext(new_node);
}

template <class T>
void Linked_List<T>::remove(void) {
    //Handle case where list is empty
    if(this->isEmpty()) {
        return; //Noop
    }
    //Handle case where current active node is the start of list
    if(m_head == m_current) {
        m_head = m_current->getNext();
        delete m_current;
        return; //Short circuit
    }
    Node<T>* current = m_head;
    Node<T>* previous = nullptr;
    while(current != m_current) {
        previous = current;
        current = current->getNext();
    }
    previous->setNext(current->getNext());
    delete current;
    m_current = previous->getNext();
}

template <class T>
bool Linked_List<T>::find(T p_find) {
    Node<T>* current = m_head;
    while(current != nullptr) {
        if(current->getData() == p_find) {
            return true; //Short circuit
        }
        current = current->getNext();
    }
    return false; //Fall through
} 

template <class T>
void Linked_List<T>::clear(void) {
    Node<T>* current = m_head;
    Node<T>* to_delete = nullptr;
    while(current != nullptr) {
        to_delete = current;
        current = current->getNext();
        delete to_delete;
    }
    m_head = nullptr;
}

template <class T>
T Linked_List<T>::getData(void) {
    return m_current->getData();
}

template <class T>
void Linked_List<T>::setData(T p_data) {
    m_current->setData(T p_data);
}

template <class T>
void Linked_List<T>::next(void) {
    m_current = m_current->getNext();
}

template <class T>
Node<T>* Linked_List<T>::begin(void) {
    m_current = m_head;
    return m_current;
}

template <class T>
bool Linked_List<T>::isEmpty(void) {
    return m_head == nullptr;
}


#endif