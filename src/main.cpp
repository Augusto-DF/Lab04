#include <iostream>

#include "node.h"

int main(){
	
	int k = 10;

	Node<int> A;

	A.setTarget(k);

	std::cout << A << std::endl;
}