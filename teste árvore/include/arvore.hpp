#ifndef ARVORE_HPP
#define ARVORE_HPP

#include "./node.hpp"

class Arvore {
    private:
        Node *raiz;
        int n;

    public:
        Arvore();
        Node *get_raiz();
        Node *insere(int n, Node *no);
        int get_valor(int n, Node *no);
        void imprime(Node *no);
};

#endif