#ifndef NODEHPP
#define NODEHPP

//**********
//Class definition
//**********

template <class T>
class Node {
public:
    Node();
    Node(T);
    T getData(void);
    void setData(T p_data);
    Node* getNext(void);
    void setNext(Node* p_next);
private:
    T m_data;
    Node* m_next = nullptr;
};

//**********
//Implementation
//**********

template <class T>
Node<T>::Node() {
    return;
}

template <class T>
Node<T>::Node(T p_data) {
    this->m_data = p_data;
}

template <class T>
T Node<T>::getData(void) {
    return this->m_data;
}
    
template <class T>
void Node<T>::setData(T p_data) {
    this->m_data = p_data;
}

template <class T>
Node<T>* Node<T>::getNext(void) {
    return this->m_next; 
}

template <class T>
void Node<T>::setNext(Node<T>* p_next) {
    this->m_next = p_next;
}
#endif