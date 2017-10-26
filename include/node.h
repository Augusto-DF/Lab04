/**
 * @file	node.h
 * @author	Mattheus Augusto Pinheiro de Oliveira
 * @date	26/10/2017
 * @brief	Declaração da Classe Node
*/

#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <memory>

template <typename T>
class Node{
	
	private:
		std::shared_ptr<Node> next;
		std::shared_ptr<Node> before;
		T target;

	public:

		Node();
		Node(Node _next, Node _before, T _target);
		~Node();

		/**
		 * @brief	Getters:
		*/
		T getTarget();

		/**
		 * @brief	Setters:
		*/
		void setNext(Node _next);
		void setBefore(Node _before);
		void setTarget(T _target);

		/**
		 * @brief	Sobrecarga do operador de inserção (<<):
		*/
		template <typename U>
		friend std::ostream& operator<<(std::ostream& r0, const U& n0);

		void printNode(std::ostream& r0) const;

};

#endif