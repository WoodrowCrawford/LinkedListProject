#pragma once
#include "Node.h"
template<typename T>	
class Iterator
{
public:
	Iterator();
	Iterator(Node<T>* node);
	Iterator<T> operator++();
	Iterator<T> operator--();
	const bool operator==(const Iterator<T>& iter);
	const bool operator!= (const Iterator<T>& iter);
	T operator*();
	
private:
	Node<T>* m_current = nullptr;
};

template<typename T>
inline Iterator<T>::Iterator()
{
}

template<typename T>
inline Iterator<T>::Iterator(Node<T>* node)
{
	m_current = node;
}

template<typename T>
inline Iterator<T> Iterator<T>::operator++()
{
	if (m_current->next != nullptr)
	{
		m_current = m_current->next;
		return *this;
	}
	return nullptr;
	

}

template<typename T>
inline Iterator<T> Iterator<T>::operator--()
{
	if (m_current->previous != nullptr)
	{
		m_current = m_current->previous;
		return *this;
	}
	return nullptr;
}

template<typename T>
inline const bool Iterator<T>::operator==(const Iterator<T>& iter)
{
	return *this == *iter;
}

template<typename T>
inline const bool Iterator<T>::operator!=(const Iterator<T>& iter)
{
	return *this != *iter;
}

template<typename T>
inline T Iterator<T>::operator*()
{
	return m_current->info;
}
