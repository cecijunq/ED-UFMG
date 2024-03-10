#ifndef NODE_HPP
#define NODE_HPP

#include <string>
#include "./lista.hpp"

class Node {
    private:
        std::string _palavra;
        Lista *_paginas;
        Node *_esq;
        Node *_dir;
        Node *_pai;
        int _altura;

    public:
        Node(std::string palavra, int pagina);
        void add_ramo_esq(Node *esq);
        void add_ramo_dir(Node *dir);
        std::string get_palavra();
        void add_pagina(int pagina);
        Node *get_ramo_esq();
        Node *get_ramo_dir();
        void set_ramo_esq(Node *ramo);
        void set_ramo_dir(Node *ramo);
        void imprime();
};

#endif