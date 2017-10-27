/**
 * @file	main.cpp
 * @author	Mattheus Augusto Pinheiro de Oliveira
 * @date	27/10/2017
*/

#include <string>
#include <iostream>
#include <cctype>

using namespace std;

#include "pilha.h"	

/**
 * @brief	Função que verifica se é um palindromo:
 * @param 	string str_
*/
bool verifica_palindromo(string str_){
	Pilha<char> stack1;

	std::cout << str_ << std::endl;

	int sizet = str_.size();

	//Laço que anula os caracteres especiais, os espaços e trata maiusculas e minusculas igualmente:
	for(int i(0); i<sizet; ++i){
		while(str_[i] == '-' ||
	 	 str_[i] == ',' || 
	 	 str_[i] == '.' || 
	 	 str_[i] == ':' || 
	 	 str_[i] == ';' || 
	 	 str_[i] == '(' || 
		 str_[i] == ')' ||
		 str_[i] == '=' ||
		 str_[i] == '+' ||
		 str_[i] == '_' ||
		 str_[i] == '*' ||
		 str_[i] == '&' ||
		 str_[i] == '%' ||
		 str_[i] == '#' ||
		 str_[i] == '@' ||
		 str_[i] == '?' ||
		 str_[i] == '!' ||
		 str_[i] == '"' ||
		 str_[i] == ' ' ||
		 str_[i] == '[' ||
		 str_[i] == ']') {
			str_.erase(i,1);
		}

		str_[i] = toupper(str_[i]);		
	}

	int sizet2 = str_.size();

	//caso a string seja ímpar
	if((sizet2%2) != 0){
		for(int j(0); j < ((sizet2-1)/2); ++j){
			stack1.push(str_[j]);
		}
		for(int k(0); k < ((sizet2-1)/2); ++k){
			if(stack1.top() == str_[((sizet2-1)/2) + 1 + k]){
				stack1.pop();
			}
			else{
				std::cout << "Não é um palindromo." << std::endl;
				return false;
			}
		}
		if(stack1.empty()){
			std::cout << "É um palindromo" << std::endl;
			return true;
		}else{
			std::cout << "Não é um palindromo." << std::endl;
			return false;
		}
		
	}
	//Caso a string seja par:
	else if(sizet2%2 == 0){
		for(int j(0); j < (sizet2/2); ++j){
			stack1.push(str_[j]);
		}
		for(int k(0); k < (sizet2/2); ++k){
			if(stack1.top() == str_[(sizet2/2) + k]){
				stack1.pop();
			}
			else{
				std::cout << "Não é um palindromo." << std::endl;
				return false;
			}
		}
		if(stack1.empty()){
			std::cout << "É um palindromo" << std::endl;
			return true;
		}else{
			std::cout << "Não é um palindromo." << std::endl;
			return false;
		}
	}
	return false;
}

int main(){

	string STR = "Socorram-me, SUBI NO ONIBUS EM MARROCOS";
	string STR2 = "ara ra";
	string STR3 = "carro";
	string STR5 = "ca ac";

	verifica_palindromo(STR);
	verifica_palindromo(STR2);
	verifica_palindromo(STR3);
	verifica_palindromo(STR5);

	string STRU;

	std::cout << "Digite a frase que deseja verificar se é um palindromo: ";
	std::cin >> STRU;

	verifica_palindromo(STRU);
}