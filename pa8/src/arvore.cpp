#include "../include/arvore.hpp"
#include <iostream>

Arvore::Arvore(int n_vertices, int n_arestas) : _aresta(n_arestas), _uf(n_vertices){
    _n_vertices = n_vertices;
    _n_arestas = n_arestas;
    _contador = 0;
    _unioes = 0;
    _custo_total = 0;
}

void Arvore::insere_vertice(int v1, int v2, int c) {
    Aresta a;
    a.u = v1;
    a.v = v2;
    a.custo = c;
    _aresta.Inserir(a);
}


int Arvore::calcula_custo() {
    while(_aresta.Vazio() == false) {
        Aresta aresta = _aresta.Remover();
        if(_uf.Find(aresta.u) != _uf.Find(aresta.v)) {
            _uf.Union(aresta.u, aresta.v);
            _custo_total += aresta.custo;
            _contador++;
              
        }
    }
    /*for(int i = 0; i < _n_arestas; i++) {
        Aresta aresta = _aresta.Remover();
        if(_uf.Find(aresta.u) != _uf.Find(aresta.v)) {
            _uf.Union(aresta.u, aresta.v);
            _custo_total += aresta.custo;
            _contador++;
              
        }
    }*/
    return _custo_total;
}