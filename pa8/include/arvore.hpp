#ifndef ARVORE_HPP
#define ARVORE_HPP

#include "./unionFind.hpp"
#include "./heap.hpp"

class Arvore {
    private:
        int _n_vertices;
        int _n_arestas;
        int _contador;
        int _unioes;
        int _custo_total;
        Heap _aresta;
        UnionFind _uf;

    public:
        Arvore(int n_vertices, int n_arestas);
        void insere_vertice(int v1, int v2, int custo);
        int calcula_custo();
};

#endif