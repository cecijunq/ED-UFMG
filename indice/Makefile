#---------------------------------------------------------------------
# Arquivo	: Makefile
# Conteúdo	: compilar o programa main
# Autor		: Cecília Junqueira V. M. Pereira (ceciliajunq@ufmg.br), baseado no Makefile do prof. Wagner Meira Jr. (meira@dcc.ufmg.br)
# Histórico	: 2023-10-03 - arquivo criado
#---------------------------------------------------------------------
# Opções	: make all - compila tudo e executa exemplo
#		: make clean - remove objetos e executável
#---------------------------------------------------------------------

CC = g++
LIBS = -lm
SRC = src
OBJ = obj
INC = include
BIN = bin
OBJS = $(OBJ)/main.o $(OBJ)/arvore.o $(OBJ)/node.o $(OBJ)/lista.o $(OBJ)/celula.o
HDRS = $(INC)/arvore.hpp $(INC)/node.hpp $(INC)/lista.hpp $(INC)/celula.hpp
CFLAGS = -g -pg -Wall -std=c++17 -c -I$(INC)

EXE = $(BIN)/pa11.out

all: use mem

use:
	mkdir -p bin/
	mkdir -p obj/

mem: $(EXE)

$(BIN)/pa11.out: $(OBJS)
	$(CC) -pg -g -o $(BIN)/pa11.out $(OBJS) $(LIBS)

$(OBJ)/main.o: $(HDRS) $(SRC)/main.cpp
	$(CC) $(CFLAGS) -o $(OBJ)/main.o $(SRC)/main.cpp 

$(OBJ)/arvore.o: $(HDRS) $(SRC)/arvore.cpp
	$(CC) $(CFLAGS) -o $(OBJ)/arvore.o $(SRC)/arvore.cpp 

$(OBJ)/node.o: $(HDRS) $(SRC)/node.cpp
	$(CC) $(CFLAGS) -o $(OBJ)/node.o $(SRC)/node.cpp 

$(OBJ)/lista.o: $(HDRS) $(SRC)/lista.cpp
	$(CC) $(CFLAGS) -o $(OBJ)/lista.o $(SRC)/lista.cpp 

$(OBJ)/celula.o: $(HDRS) $(SRC)/celula.cpp
	$(CC) $(CFLAGS) -o $(OBJ)/celula.o $(SRC)/celula.cpp 

clean:
	rm -f $(EXE) $(OBJS) gmon.out