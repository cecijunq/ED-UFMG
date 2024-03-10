#include "../include/unionFind.hpp"
#include <iostream>

UnionFind::UnionFind(int quantidade_subconjuntos) {
    tamanho = quantidade_subconjuntos;
    subconjuntos = new Subconjunto[tamanho];

    for(int i = 0; i < tamanho; i++) {
        subconjuntos[i].representante = i;
        subconjuntos[i].rank = 0;
    }
}

UnionFind::~UnionFind() {

}

void UnionFind::Make(int x) {
    
}

int UnionFind::Find(int x) {
    if(subconjuntos[x].representante == x) return x;
    return Find(subconjuntos[x].representante);
}

void UnionFind::Union(int x, int y) {
    x = Find(x);
    y = Find(y);
    subconjuntos[y].representante = subconjuntos[x].representante;
}
