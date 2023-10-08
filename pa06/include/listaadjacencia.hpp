#ifndef LISTA_ADJACENCIA_HPP
#define LISTA_ADJACENCIA_HPP

#include <iostream>

class entrada_invalida_e {};

class Celula {
    private:
        int _elemento;
        Celula *_proximo;

    public:
        Celula(int elemento);
        Celula *get_proximo();
        void set_proximo(Celula *proximo);
        int get_elemento();

};

class Lista {
    private:
        unsigned int _tamanho;
        Celula *inicio;
        Celula *fim;
        Lista *proxima_lista;
        int n_arestas;

    public:
        Lista();
        Celula *get_inicio();
        Celula *get_fim();
        Lista *get_prox_lista();
        void set_prox_lista(Lista *proxima);
        int getTamanho();
        void adiciona_item(Celula *novo_elemento);
        void imprime();
        int get_n_arestas();
};

class ListaAdjacencia {
    private:
        Lista *primeira_lista;
        Lista *ultima_lista;
        int _tamanho;
        int maior_grau;
        int menor_grau;
        int total_arestas;
        int _completo;

    public:
        ListaAdjacencia();
        void adiciona_vertice(Lista *novo_vertice);
        Lista *get_primeira_lista();
        Lista *get_ultima_lista();
        Lista *get_nesimo_elemento(int n);
        int get_tamanho();
        int get_total_arestas();
        int get_grau_maximo();
        int get_grau_minimo();
        void set_grau_maximo(int x);
        void set_grau_minimo(int x);
        void set_n_arestas(int n);
        void set_completo(int completo);
        int get_completo();

};

#endif