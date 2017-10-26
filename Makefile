#Makefile

#Compilador : g++
CC=g++

#Variáveis de diretórios:
INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
DOC_DIR=./doc
BIN_DIR=./bin
LIB_DIR=./lib
TEST_DIR=./test

#Váriavel de compilação:
CFLAGS=-Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

.PHONY: all clean doxy debug doc

#Remove os arquivos .o:
all: questao01

debug: CFLAGS += -g -O0

#Criação do executavel: questao01
questao01: $(OBJ_DIR)/node.o $(OBJ_DIR)/main1.o
	@echo	"======================"
	@echo	"Carregando o alvo $@"
	@echo	"======================"
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo	"++++ [Executavel questao01 criado em $(BIN_DIR)] ++++"
	@echo	"  =============================================    "

#Criação dos arquivos .o:
#node.o
$(OBJ_DIR)/node.o: $(SRC_DIR)/node.cpp $(INC_DIR)/node.h
	$(CC) -c $(CFLAGS) -o $@ $<

#main.o
$(OBJ_DIR)/main1.o: $(SRC_DIR)/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

doxy:
	rm -rf $(DOC_DIR)/*
	doxygen Doxyfile

clean:
	rm -rf $(BIN_DIR)/*
	rm -rf $(OBJ_DIR)/*