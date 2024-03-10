#include "../include/lista.hpp"
#include <iostream>

Lista::Lista(int pagina) {
    _paginas = new Celula(pagina, nullptr);
    n = 1;
}

void Lista::add_elemento(int pagina) {
    Celula *aux = _paginas;
    Celula *ant = nullptr;
    int i = 0;
    while(aux != nullptr) {
        std::cout << aux->get_pag() << " " << pagina << std::endl;
        std::cout << "entrou " << pagina << std::endl;
        Celula *novo = new Celula(pagina, nullptr);
        if(i == n-1 && pagina > aux->get_pag()) {
            aux->set_prox(novo);
            n++;
            break;
        }
        if(pagina == aux->get_pag()) break;
        
        else if(pagina > aux->get_pag()) {
            std::cout << "xxx" << std::endl;
            ant = aux;
            aux = aux->get_prox();
        } 
        else if((pagina < aux->get_pag())) {
            std::cout << "entrou2" << std::endl;
            Celula *novo = new Celula(pagina, aux);
            if(ant != nullptr) {
                ant->set_prox(novo);
            } else {
                _paginas = novo;
            }
            n++;
            break;
        }
        i++;
    }
}

void Lista::imprime_lista() {
    Celula *aux = _paginas;
    while(aux != nullptr) {
        if(aux->get_prox() == nullptr) {
            std::cout << aux->get_pag() << std::endl;
        } else {
            std::cout << aux->get_pag() << " ";
        }
        aux = aux->get_prox();
    }
}