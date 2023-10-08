#include "../include/graph.hpp"
#include <string.h>

#include <getopt.h>


// definicoes de operacoes a serem testadas
#define OPDADOSBASICOS 1
#define OPVIZINHOS 2
#define OPCOMPLETO 3

// variaveis globais para opcoes
static int opescolhida;
char outnome[100];

void parse_args(int argc,char ** argv)
// Descricao: le as opcoes da linha de comando e inicializa variaveis
// Entrada: argc e argv
// Saida: optescolhida, optx, opty
{
     // variaveis externas do getopt
     extern char * optarg;
     extern int optind;

     // variavel auxiliar
     int c;

     // inicializacao variaveis globais para opcoes
     opescolhida = -1;

     // getopt - letra indica a opcao, : junto a letra indica parametro
     // no caso de escolher mais de uma operacao, vale a ultima
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
    
    /*
    if(argc != 2) {
        std::cout << "Quantidade inválida de argumentos" << std::endl;
        return 1;
    }

    Grafo g = Grafo();
    g.InsereVertice();

    if(strcmp(argv[1], "-d") == 0) {
        std::cout << g.QuantidadeVertices() << std::endl;
        std::cout << g.QuantidadeArestas() << std::endl;
        std::cout << g.GrauMinimo() << std::endl;
        std::cout << g.GrauMaximo() << std::endl;

    } else if(strcmp(argv[1], "-n") == 0) {
        for(int i = 0; i < g.QuantidadeVertices(); i++) {
            g.ImprimeVizinhos(i);
            std::cout << std::endl;
        }

    } else if(strcmp(argv[1], "-k") == 0) {
        if(g.GrauMaximo() == g.GrauMinimo() && g.GrauMaximo() == g.QuantidadeVertices() - 1) {
            std::cout << "1" << std::endl;
        } else {
            std::cout << "0" << std::endl;
        }
    } else {
        std::cout << "Argumento inválido" << std::endl;
    }
    */
    
}