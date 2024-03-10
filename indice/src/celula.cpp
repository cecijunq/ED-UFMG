#include "../include/celula.hpp"

Celula::Celula(int pagina, Celula *proximo) {
    _pagina = pagina;
    _proximo = proximo;
}

Celula *Celula::get_prox() {
    return _proximo;
}

void Celula::set_prox(Celula *proximo) {
    _proximo = proximo;
}

int Celula::get_pag() {
    return _pagina;
}