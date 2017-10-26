/**
 * @file	node.cpp
 * @author	Mattheus Augusto Pinheiro de Oliveira
 * @date	26/10/2017
 * @brief	Implementação da classe Node.
*/
#include "node.h"

/**
 * @brief	Construtores:
*/
template <typename T>
Node<T>::Node(){}

template <typename T>
Node<T>::Node(Node _next, Node _before, T _target){
	next -> _next;
	before -> _before;
	target = _target;
}

/**
 * @brief	Destrutor:
*/
template <typename T>
Node<T>::~Node(){
	std::cout << "Nó deletado." << std::endl;
}

/**
 * @brief	Getters:
*/
template <typename T> 
T Node<T>::getTarget(){
	return target;
}

/**
 * @brief	Setters:
*/
template <typename T> void 
Node<T>::setNext(Node _next){
	next -> _next;
}

template <typename T> void
Node<T>::setBefore(Node _before){
	before -> _before;
}

template <typename T> void
Node<T>::setTarget(T _target){
	target = _target;
}

/**
 * @brief	Sobrecarga do operador de inserção (<<):
*/
template <typename U> 
std::ostream& 
operator<<(std::ostream& r0, const U& n0){
	n0.printNode(r0);

	return r0;
}

template <typename T> void
Node<T>::printNode(std::ostream& r0) const{
	r0 << target;
}