#ifndef ARVORE_HPP
#define ARVORE_HPP

#include "./node.hpp"

class Arvore {
    private:
        Node *raiz;
        int n;

    public:
        Arvore();
        void inserir_palavra(std::string palavra, int pagina, Node* anterior, Node *no, int direcao);
        Node *get_raiz();
        void imprimir(Node *no);
};

#endif