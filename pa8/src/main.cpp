#include <iostream>

#include "../include/arvore.hpp"

int main() {
    int n_arestas, n_vertices;

    std::cin >> n_vertices >> n_arestas;

    Arvore a = Arvore (n_vertices, n_arestas);

    for(int i = 0; i < n_arestas; i++) {
        int v1, v2, custo;
        std::cin >> v1 >> v2 >> custo;
        a.insere_vertice(v1, v2, custo);
    }

    std::cout << a.calcula_custo() << std::endl;

}