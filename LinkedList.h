#pragma once
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

/////////////////////////////


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
    Node<T>m_first;
    Node<T>m_last;
    int m_nodeCount;


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
}

template<typename T>
inline Node<T>::Node(T value)
{
}

template<typename T>
inline Node<T>* Node<T>::next()
{
    return NULL;
}

template<typename T>
inline Node<T>* Node<T>::previous()
{
    return NULL;
}

template<typename T>
inline T Node<T>::data()
{
    return T();
}

///////////////////////////



//Iterator class
template<typename T>
inline Iterator<T>::Iterator()
{
}

template<typename T>
inline Iterator<T>::Iterator(Node<T>*)
{
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

///////////////////////////////


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

template<typename T>
inline void LinkedList<T>::destroy()
{
}

template<typename T>
inline Iterator<T> LinkedList<T>::begin()
{
    return Iterator<T>();
}

template<typename T>
inline Iterator<T> LinkedList<T>::end()
{
    return Iterator<T>();
}

template<typename T>
inline bool LinkedList<T>::remove(const T& value)
{
    return false;
}

template<typename T>
inline bool LinkedList<T>::getData(Iterator<T>& Iter, int index)
{
    return false;
}

template<typename T>
inline const bool LinkedList<T>::isEmpty()
{
    return false;
}

template<typename T>
inline const bool LinkedList<T>::contains(const T& object)
{
    return false;
}

template<typename T>
inline void LinkedList<T>::pushFront(const T& value)
{
}

template<typename T>
inline void LinkedList<T>::pushBack(const T& value)
{
}

template<typename T>
inline void LinkedList<T>::initialize()
{
}

template<typename T>
inline const void LinkedList<T>::print()
{
    return void();
}

template<typename T>
inline const int LinkedList<T>::getLenght()
{
    return 0;
}

template<typename T>
inline const LinkedList<T>& LinkedList<T>::operator=(const LinkedList<T>& otherLinkedList)
{
    // TODO: insert return statement here
}
