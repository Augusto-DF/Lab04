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

		Node(): next(nullptr), before(nullptr){}
		Node(Node _next, Node _before, T _target): 
			next(_next), 
			before(_before), 
			target(_target) {}
		~Node(){}

		/**
		 * @brief	Getters:
		*/
		T getTarget(){return target;}

		/**
		 * @brief	Setters:
		*/
		void setNext(Node _next){
			next -> _next;
		}
		void setBefore(Node _before){
			before -> _beforeore;
		}

		void setTarget(T _target){ 
			target = _target;
		}

		/**
		 * @brief	Sobrecarga do operador de inserção (<<):
		*/
		template <typename U>
		friend std::ostream& operator<<(std::ostream& r0, const U& n0){
			n0.printNode(r0);

			return r0;
		}

		void printNode(std::ostream& r0) const{
			r0 << target;
		}

};

#endif