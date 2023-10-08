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
OBJS = $(OBJ)/main.o $(OBJ)/listaadjacencia.o $(OBJ)/graph.o
HDRS = $(INC)/listaadjacencia.hpp $(INC)/graph.hpp
CFLAGS = -Wall -std=c++17 -c -I$(INC)

EXE = $(BIN)/pa6.out

all: $(EXE)

$(BIN)/pa6.out: $(OBJS)
	$(CC) -g -o $(BIN)/pa6.out $(OBJS) $(LIBS)

$(OBJ)/main.o: $(HDRS) $(SRC)/main.cpp
	$(CC) $(CFLAGS) -o $(OBJ)/main.o $(SRC)/main.cpp 

$(OBJ)/listaadjacencia.o: $(HDRS) $(SRC)/listaadjacencia.cpp
	$(CC) $(CFLAGS) -o $(OBJ)/listaadjacencia.o $(SRC)/listaadjacencia.cpp 

$(OBJ)/graph.o: $(HDRS) $(SRC)/graph.cpp
	$(CC) $(CFLAGS) -o $(OBJ)/graph.o $(SRC)/graph.cpp 

clean:
	rm -f $(EXE) $(OBJS) gmon.out