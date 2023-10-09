#include "../include/graph.hpp"
#include <string.h>

#include <getopt.h>


// definicoes de operacoes a serem testadas
#define OPDADOSBASICOS 1
#define OPVIZINHOS 2
#define OPCOMPLETO 3

// variaveis globais para opcoes
static int opescolhida;

void parse_args(int argc,char ** argv) {
    // variavel auxiliar
    int c;

    while ((c = getopt(argc, argv, "dnk")) != EOF){
       switch(c) {
         case 'n':
	        opescolhida = OPVIZINHOS;
            break;
         case 'd':
	        opescolhida = OPDADOSBASICOS;
            break;
         case 'k':
	        opescolhida = OPCOMPLETO;
            break;
       }
     }
}

int main(int argc, char **argv) {
    Grafo g = Grafo();
    g.InsereVertice();

    parse_args(argc,argv);

    switch(opescolhida) {
        case OPDADOSBASICOS:
            std::cout << g.QuantidadeVertices() << std::endl;
            std::cout << g.QuantidadeArestas() << std::endl;
            std::cout << g.GrauMinimo() << std::endl;
            std::cout << g.GrauMaximo() << std::endl;
            break;
        
        case OPVIZINHOS:
            for(int i = 0; i < g.QuantidadeVertices(); i++) {
                g.ImprimeVizinhos(i);
                std::cout << std::endl;
            }
            break;

        case OPCOMPLETO:
            if(g.GrauMaximo() == g.GrauMinimo() && g.GrauMaximo() == g.QuantidadeVertices() - 1) {
            std::cout << "1" << std::endl;
            } else {
                std::cout << "0" << std::endl;
            }
            break;
    }
    
}