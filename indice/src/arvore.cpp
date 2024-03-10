#include "../include/arvore.hpp"
#include <iostream>
#include <string.h>

Arvore::Arvore() {
    raiz = nullptr;
    n = 0;
}

void Arvore::inserir_palavra(std::string palavra, int pagina, Node *anterior, Node* no, int direcao) {
    if(raiz == nullptr) {
        Node *novo = new Node(palavra, pagina);
        raiz = novo;
        return;
    }

    if(no == nullptr) {
        no = new Node(palavra, pagina);
        if(direcao == 0) anterior->set_ramo_esq(no);
        else if(direcao == 1) anterior->set_ramo_dir(no);

    } else {
        if(palavra.compare(no->get_palavra()) == 0) {
            no->add_pagina(pagina);
            return ;
        } else if(palavra.compare(no->get_palavra()) < 0) {
            inserir_palavra(palavra, pagina, no, no->get_ramo_esq(), 0);
        } else {
            inserir_palavra(palavra, pagina, no, no->get_ramo_dir(), 1);
        }

    }
}

Node *Arvore::get_raiz() {
    return raiz;
}

void Arvore::imprimir(Node *no) {
    if(no != nullptr) {
        if(no->get_ramo_esq() == nullptr && no->get_ramo_dir() == nullptr) {
            std::cout << no->get_palavra() << ": ";
            no->imprime();
            if(no->get_ramo_esq() != nullptr) std::cout << no->get_palavra() << std::endl;
        } else {
            imprimir(no->get_ramo_esq());
            std::cout << no->get_palavra() << ": ";
            no->imprime();
            imprimir(no->get_ramo_dir());
        }

    }
}