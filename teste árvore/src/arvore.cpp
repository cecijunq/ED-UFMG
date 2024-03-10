#include "../include/arvore.hpp"
#include <iostream>

Arvore::Arvore() { 
    raiz = nullptr;
    n = 0;
}

Node *Arvore::get_raiz() { return raiz; }

Node *Arvore::insere(int n, Node *no) {
    if(raiz == nullptr) {
        raiz = new Node(n);
        std::cout << "raiz" << std::endl;
        n++;
        return raiz;
    } 
    if(no == nullptr) {
        no = new Node(n);
        std::cout << "x" << std::endl;
        n++;
        return no;
    } else {
        if(n > no->get_n()) {
            std::cout << "dir" << std::endl;
            insere(n, no->get_dir());
            //no->set_dir(insere(n, no->get_dir()));
            
        } else if(n < no->get_n()) {
            std::cout << "esq" << std::endl;
            insere(n, no->get_esq());
            //no->set_esq(insere(n, no->get_esq()));
        }
    }
}

int Arvore::get_valor(int n, Node *no) {
    if(no == nullptr) return 0;
    if(n < no->get_n()) {
        get_valor(n, no->get_esq());
    } else if(n > no->get_n()) {
        get_valor(n, no->get_dir());
    } else {
        return 1;
    }
}

void Arvore::imprime(Node *no) {
    if(no != nullptr) {
        imprime(no->get_esq());
        std::cout << no->get_n() << std::endl;
        imprime(no->get_dir());
    }
}