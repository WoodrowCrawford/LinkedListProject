#pragma once
template <typename T>
class Node
{
public:

	T info;
	Node<T>* next = nullptr;
	Node<T>* previous = nullptr;
	Node<T>();
	Node<T>(T value) { info = value; }

};

template<typename T>
inline Node<T>::Node()
{

}
