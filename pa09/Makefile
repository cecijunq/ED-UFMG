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
OBJS = $(OBJ)/evalenum.o
#HDRS = $(INC)/listaadjacencia.hpp $(INC)/grafo.hpp $(INC)/lista.hpp $(INC)/celula.hpp $(INC)/sort.hpp $(INC)/checa_coloracao.hpp
CFLAGS = -g -pg -Wall -std=c++17 -c -I$(INC)

EXE = $(BIN)/pa9.out

all: use $(EXE)

use:
	mkdir -p bin/
	mkdir -p obj/
	
$(BIN)/pa9.out: $(OBJS)
	$(CC) -g -o $(BIN)/pa9.out $(OBJS) $(LIBS)

$(OBJ)/evalenum.o: $(SRC)/evalenum.c
	$(CC) $(CFLAGS) -o $(OBJ)/evalenum.o $(SRC)/evalenum.c 

clean:
	rm -f $(EXE) $(OBJS) gmon.out