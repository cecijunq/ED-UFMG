#ifndef LISTA_HPP
#define LISTA_HPP

#include "./celula.hpp"

class Lista {
    private:
        Celula *_paginas;
        int n;

    public:
        Lista(int pagina);
        void add_elemento(int pagina);
        void imprime_lista();
};

#endif