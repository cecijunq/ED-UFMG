#include "../include/lista.hpp"

Celula::Celula(int elemento) {
    _elemento = elemento;
    _proximo = nullptr;
    _anterior = nullptr;
}

Celula *Celula::get_proximo() {
    return _proximo;
}

void Celula::set_proximo(Celula *proximo) {
    _proximo = proximo;
}

Celula *Celula::get_anterior() {
    return _anterior;
}

void Celula::set_anterior(Celula *anterior) {
    _anterior = anterior;
}

int Celula::get_elemento() {
    return _elemento;
}

Lista::Lista(int n) {
    _tamanho = n;
    inicio = nullptr;
    fim = nullptr;
}

Celula *Lista::get_inicio() {
    return inicio;
}

Celula *Lista::get_fim() {
    return fim;
}

void Lista::set_inicio(Celula *novo_inicio) {
    inicio = novo_inicio;
}

void Lista::set_fim(Celula *novo_fim) {
    fim = novo_fim;
}

int Lista::getTamanho() {
    return _tamanho;
}

void Lista::adiciona_item(Celula *novo_item) {
    if(inicio == nullptr) {
        inicio = novo_item;
    } else {
        fim->set_proximo(novo_item);
        novo_item->set_anterior(fim);
    }
    fim = novo_item;
}

Celula *Lista::get_nesimo_elemento(int pos) {
    Celula *aux = get_inicio();
    while(pos >= 0) {
        pos--;
        aux->get_proximo();
    }
    return aux;
}