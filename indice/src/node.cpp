#include "../include/node.hpp"
#include <iostream>

Node::Node(std::string palavra, int pagina) {
    _palavra = palavra;
    _paginas = new Lista(pagina);
    _esq = nullptr;
    _dir = nullptr;
    _altura = 1;
    _pai = nullptr;
}

void Node::add_ramo_esq(Node *esq) {
    _esq = esq;
}

void Node::add_ramo_dir(Node *dir) {
    _dir = dir;
}

std::string Node::get_palavra() { return _palavra; }

void Node::add_pagina(int pagina) {
    _paginas->add_elemento(pagina);
}

Node *Node::get_ramo_esq() { return _esq; }

Node *Node::get_ramo_dir() { return _dir; }

void Node::set_ramo_esq(Node *ramo) { _esq = ramo; }

void Node::set_ramo_dir(Node *ramo) { _dir = ramo; }

void Node::imprime() {
    _paginas->imprime_lista();
}