#include "../include/graph.hpp"

Grafo::Grafo() {
    vertices = ListaAdjacencia();
    InsereVertice();
}

Grafo::~Grafo() {}

void Grafo::InsereVertice() {
    // recebe o número de vértices que o grafo terá
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        Lista *lista_elem = new Lista();

        vertices.adiciona_vertice(lista_elem);
        int n_vizinhos;
        std::cin >> n_vizinhos;

        if(i == 0) vertices.set_grau_minimo(n_vizinhos);
        
        if(n_vizinhos != n-1) vertices.set_completo(0); 

        vertices.set_n_arestas(n_vizinhos);

        if(n_vizinhos > vertices.get_grau_maximo()) vertices.set_grau_maximo(n_vizinhos);
        if(n_vizinhos < vertices.get_grau_minimo()) vertices.set_grau_minimo(n_vizinhos);

        for(int j = 0; j < n_vizinhos; j++) {
            int vizinho;
            std::cin >> vizinho;

            InsereAresta(i, vizinho);
        
            Celula *elem = new Celula(vizinho);

            lista_elem->adiciona_item(elem);
        }
    }
    return;
}

void Grafo::InsereAresta(int v, int w) {
    /*
    Lista *aux = vertices.get_primeira_lista();
    while(true) {
        if(aux->)
    }*/
}

int Grafo::QuantidadeVertices() {
    return vertices.get_tamanho();
}

int Grafo::QuantidadeArestas() {
    return vertices.get_total_arestas();
}

int Grafo::GrauMinimo() {
    return vertices.get_grau_minimo();
}

int Grafo::GrauMaximo() {
    return vertices.get_grau_maximo();
}

void Grafo::ImprimeVizinhos(int v) {
    Lista *aux = vertices.get_nesimo_elemento(v);
    aux->imprime();
}
