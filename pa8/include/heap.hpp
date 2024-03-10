#ifndef HEAP_HPP
#define HEAP_HPP

#include "./unionFind.hpp"
#include <vector>
#include <string>

class Heap {
    public:
        Heap(int maxsize);
        ~Heap();

        void Inserir(Aresta x);
        Aresta Remover();

        bool Vazio();

        Aresta *get_heap();

    private:
        Aresta GetAncestral(int posicao);
        Aresta GetSucessorEsq(int posicao);
        Aresta GetSucessorDir(int posicao);

        int tamanho;
        int index;
        Aresta* data;
};


#endif