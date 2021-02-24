#pragma once
#include <iostream>
template <typename T>

//Node struct
struct Node
{
public:

    Node();
    Node(T value);
    Node<T>* next();
    Node<T>* previous();
    T data();
};

///////////////////////////////


//Iterator class
template <typename T>
class Iterator
{
private:

    Node<T>*m_current;

public:
    Iterator();
    Iterator(Node<T>*);

    Iterator<T>operator++;
    Iterator<T>operator--;
    Iterator<T>operator*;

    const bool operator==(const Iterator<T>& iter);
    const bool operator!=(const Iterator<T>& iter);

    

};


///////////////////////////////

template <typename T>
class LinkedList
{
private:
    Node<T>m_head;
    Node<T>m_tail;
    int m_nodeCount;
    int m_lenght;


public:

    LinkedList();
    LinkedList(LinkedList<T>&);
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

    const int getLenght();

    const LinkedList<T>& operator=(const LinkedList<T>& otherLinkedList);

};




//Node class
template<typename T>
inline Node<T>::Node()
{
    Node<T>* head;
    Node<T>* tail;
    Node<T>* n;

    //Node #1
    n = new Node<T>;
    n->data = 1;
    n->previous = NULL;
    head = n;
    tail = n;


    //Node #2
    n = new Node<T>;
    n->data() = 2;
    n->previous() = tail;
    tail->next() = n;
    tail = n;


    //Node #3
    n = new Node<T>;
    n->data() = 3;
    n->previous() = tail;
    tail->next() = n;
    tail = n;


    //Node #4
    n = new Node<T>;
    n->data() = 4;
    n->previous() = tail;
    tail->next() = n;
    tail = n;
    tail->next() = NULL;

}




template<typename T>
inline Node<T>::Node(T value)
{
   
    Node<T>* head;
    Node<T>* tail;
    Node<T>* n;

    //Node #1
    n = new Node<T>;
    n->data() = 1;
    n->previous() = NULL;
    head = n;
    tail = n;


    //Node #2
    n = new Node<T>;
    n->data() = 2;
    n->previous() = tail;
    tail->next() = n;
    tail = n;


    //Node #3
    n = new Node<T>;
    n->data() = 3;
    n->previous() = tail;
    tail->next() = n;
    tail = n;


    //Node #4
    n = new Node<T>;
    n->data() = 4;
    n->previous() = tail;
    tail->next() = n;
    tail = n;
    tail->next() = NULL;
}




template<typename T>
inline Node<T>* Node<T>::next()
{
    Node<T>* node;

    if (node->data() = 1)
    {
        node->data() = 2;
    }

    if (node->data() = 2)
    {
        node->data() = 3;
    }


    if (node->data() = 3)
    {
        node->data() = 4;
    }

    if (node->data() = 4)
    {
        node->data() = NULL;
  
    }
}




template<typename T>
inline Node<T>* Node<T>::previous()
{
    Node<T>* node;

    if (node->data() = 1)
    {
        node->data() = NULL;
    }


    if (node->data() = 2)
    {
        node->data() = 1;
    }

    if (node->data() = 3)
    {
        node->data() = 2;
    }

    if (node->data() = 4)
    {
        node->data() = 3;
    }
}




template<typename T>
inline T Node<T>::data()
{
    Node<T>* node;
    node->data = 1;
}

//////////////////////////////////



//Iterator class
template<typename T>
inline Iterator<T>::Iterator()
{
    Iterator<int>();
}

template<typename T>
inline Iterator<T>::Iterator(Node<T>*)
{
   Iterator<T>Node<int>;
   Node<T>* n;
}

template<typename T>
inline const bool Iterator<T>::operator==(const Iterator<T>& iter)
{
    return false;
}

template<typename T>
inline const bool Iterator<T>::operator!=(const Iterator<T>& iter)
{
    return false;
}

///////////////////////////////////


//Linked List class
template<typename T>
inline LinkedList<T>::LinkedList()
{

    
}

template<typename T>
inline LinkedList<T>::LinkedList(LinkedList<T>&)
{


}

template<typename T>
inline LinkedList<T>::~LinkedList()
{


}


//Deletes all nodes in the list
template<typename T>
inline void LinkedList<T>::destroy()
{


}


//Returns an iterator pointing to the first node in the list
template<typename T>
inline Iterator<T> LinkedList<T>::begin()
{
    return Iterator<T>();
}



//Returns the next item after the last node in the list
template<typename T>
inline Iterator<T> LinkedList<T>::end()
{
    return Iterator<T>();
}



//Adds a new node at the given index
template<typename T>
inline bool LinkedList<T>::insert(const T& value, int index)
{
    return false;
}



//Remove all nodes with the given value
template<typename T>
inline bool LinkedList<T>::remove(const T& value)
{
    return false;
}



//Sets the given iterator to point to a node at the given index
template<typename T>
inline bool LinkedList<T>::getData(Iterator<T>& Iter, int index)
{
    return false;
}



//Returns whether or not the list has any nodes in it
template<typename T>
inline const bool LinkedList<T>::isEmpty()
{
    return false;
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

}



//Adds a new node to the end of the list
template<typename T>
inline void LinkedList<T>::pushBack(const T& value)
{


}




template<typename T>
inline void LinkedList<T>::sort()
{

}



//Set the default values for the first node pointer,
//the last node pointer, and the node count
template<typename T>
inline void LinkedList<T>::initialize()
{


}



//Prints the values for all the nodes
template<typename T>
inline const void LinkedList<T>::print()
{
   
   
}



//Returns the anount of nodes in the list
template<typename T>
inline const int LinkedList<T>::getLenght()
{
    return  m_lenght;
}



template<typename T>
inline const LinkedList<T>& LinkedList<T>::operator=(const LinkedList<T>& otherLinkedList)
{
    // TODO: insert return statement here
}

/////////////////////////////////////////////



int main()
{
    LinkedList<int>* list;
    

    

}
