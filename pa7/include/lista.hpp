#ifndef LISTA_HPP
#define LISTA_HPP

#include <iostream>

class Celula {
    private:
        int _elemento;
        Celula *_proximo;
        Celula *_anterior;

    public:
        Celula(int elemento);
        Celula *get_proximo();
        void set_proximo(Celula *proximo);
        Celula *get_anterior();
        void set_anterior(Celula *anterior);
        int get_elemento();

};

class Lista {
    private:
        unsigned int _tamanho;
        Celula *inicio;
        Celula *fim;

    public:
        Lista(int n);
        Celula *get_inicio();
        Celula *get_fim();
        void set_inicio(Celula *novo_inicio);
        void set_fim(Celula *novo_fim);
        int getTamanho();
        void adiciona_item(Celula *novo_elemento);
        Celula *get_nesimo_elemento(int pos);
};

#endif