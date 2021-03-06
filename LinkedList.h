#pragma once
#include "Node.h"   
#include "Iterator.h"
#include <iostream>


///////////////////////////////

template <typename T>
class LinkedList
{
private:
    Node<T>* m_head = nullptr;
    Node<T>* m_tail = nullptr;
    int m_nodeCount = 0;
    


public:

    LinkedList();
    LinkedList(const LinkedList<T>&);
    ~LinkedList();
    
    void destroy();

    Iterator<T>begin();
    Iterator<T>end();
    

    bool insert(const T& value, int index);
    bool remove(const T& value);
    bool getData(Iterator<T>& Iter, int index);

    const bool isEmpty();
    const bool contains(const T& object);

    void pushFront(const T& value);
    void pushBack(const T& value);
    void sort();
    void initialize();

    const void print();

    const int getLength();

    const LinkedList<T>& operator=(const LinkedList<T>& otherLinkedList);

};


//Linked List class
template<typename T>
inline LinkedList<T>::LinkedList()
{

    
}

template<typename T>
inline LinkedList<T>::LinkedList(const LinkedList<T>& other)
{
    m_head = other->m_head;
    m_tail = other->m_tail;
    m_nodeCount = other->m_nodeCount;
    delete other;
}

template<typename T>
inline LinkedList<T>::~LinkedList()
{
    destroy();

}


//Deletes all nodes in the list
template<typename T>
inline void LinkedList<T>::destroy()
{
    Node<T>* current;
    Node<T>* next;
    current = m_head;
    next = nullptr;

    while (current != nullptr)
    {
        next = current->next;
        delete current;
        current = next;
    }
    m_nodeCount = 0;

}


//Returns an iterator pointing to the first node in the list
template<typename T>
inline Iterator<T> LinkedList<T>::begin()
{
    return Iterator<T>(m_head);
}



//Returns the next item after the last node in the list
template<typename T>
inline Iterator<T> LinkedList<T>::end()
{
    
    return Iterator<T>(m_tail);
}



//Adds a new node at the given index
template<typename T>
inline bool LinkedList<T>::insert(const T& value, int index)
{
    if (isEmpty() == true)
    {
        return false;
    }
    if (index >= m_nodeCount or index < 0)
    {
        return false;  
    }
    Node<T>* temp;
    temp = new Node<T>(value);
    Node<T>* current;
    current = m_head;

    for (int i = 0; i < index; i++)
    {
        if (current->next != nullptr)
        {
            current = current->next;
        }
        else return false;
    }
    current->previous->next = temp;
    temp->previous = current->previous;
    temp->next = current;
    current->previous = temp;
    m_nodeCount++;
    delete temp;

}



//Remove all nodes with the given value
template<typename T>
inline bool LinkedList<T>::remove(const T& value)
{
    Node<T>* iterator;
    iterator = m_head;
    if (m_head->info = value)
    {
        if (getLength() = 1)
        {
            m_head = nullptr;
            m_tail = nullptr;
            delete iterator;
            m_nodeCount--;
            return true;
        }
        m_head = iterator->next;
        delete iterator;
        m_nodeCount--; 
        return true;

    }
    if (m_tail->info = value)
    {
        iterator = m_tail;
        m_tail = iterator->previous;
        delete iterator;
        m_nodeCount--;
        return true;

    }
    iterator = iterator->next;
    while (iterator != nullptr)
    {
        if (iterator->info = value)
        {
            iterator->next->previous = iterator->previous;
            iterator->previous->next = iterator->next;
            delete iterator;
            return true;
        }
        else
            iterator = iterator->next;
    }
}



//Sets the given iterator to point to a node at the given index
template<typename T>
inline bool LinkedList<T>::getData(Iterator<T>& Iter, int index)
{
    Node<T>* iterator = nullptr;
    return iterator->info();
}



//Returns whether or not the list has any nodes in it
template<typename T>
inline const bool LinkedList<T>::isEmpty()
{
    return m_nodeCount == 0;
}



//Checks to see if the given item is in the list
template<typename T>
inline const bool LinkedList<T>::contains(const T& object)
{
    return false;
}



//Adds a new node to the beginning of the list
template<typename T>
inline void LinkedList<T>::pushFront(const T& value)
{
    Node<T>* node = new Node<T>(value);

    
        m_head->previous = node;
        node->next = m_head;
    
    
}



//Adds a new node to the end of the list
template<typename T>
inline void LinkedList<T>::pushBack(const T& value)
{
    Node<T>* node = new Node<T>(value);
    m_tail->next = node;
    node->previous = m_tail;

}




template<typename T>
inline void LinkedList<T>::sort()
{
    for (int i = 0; i < getLength(); i++)
    {
        Node<T>* node = m_head;

        for (int j = 0; j < getLength() - 1; j++)
        {
            if (node->info > node->next->info)
            {
                T temp = node->info;
                node->info = node->next->info;
                node->next->info = temp;
            }

            node = node->next;
        }
    }
}



//Set the default values for the first node pointer,
//the last node pointer, and the node count
template<typename T>
inline void LinkedList<T>::initialize()
{
    m_head = nullptr;
    m_tail = nullptr;
    m_nodeCount = 0;

}



//Prints the values for all the nodes
template<typename T>
inline const void LinkedList<T>::print()
{

    for (int i = 0; i <m_nodeCount; i++)
    {
        std::cout << m_nodeCount;
    }
}



//Returns the anount of nodes in the list
template<typename T>
inline const int LinkedList<T>::getLength()
{
    return  m_nodeCount;
}



