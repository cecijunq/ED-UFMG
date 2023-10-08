#include "../include/listaadjacencia.hpp"

Celula::Celula(int elemento) {
    _elemento = elemento;
    _proximo = nullptr;
}

Celula *Celula::get_proximo() {
    return _proximo;
}

void Celula::set_proximo(Celula *proximo) {
    _proximo = proximo;
}

int Celula::get_elemento() {
    return _elemento;
}

Lista::Lista() {
    _tamanho = 0;
    n_arestas = 0;
    inicio = nullptr;
    fim = nullptr;
    proxima_lista = nullptr;
}

Celula *Lista::get_inicio() {
    return inicio;
}

Celula *Lista::get_fim() {
    return fim;
}

Lista *Lista::get_prox_lista() {
    return proxima_lista;
}

void Lista::set_prox_lista(Lista *proxima) {
    proxima_lista = proxima;
}

int Lista::getTamanho() {
    return _tamanho;
}

void Lista::adiciona_item(Celula *novo_item) {
    if(inicio == nullptr) {
        inicio = novo_item;
    } else {
        fim->set_proximo(novo_item);
        n_arestas++;
    }
    fim = novo_item;
    _tamanho++;
}

void Lista::imprime() {
    Celula *aux = inicio;
    while(aux != nullptr) {
        std::cout << aux->get_elemento() << " ";
        aux = aux->get_proximo();
    }
}

int Lista::get_n_arestas() {
    return n_arestas;
}

ListaAdjacencia::ListaAdjacencia() {
    primeira_lista = nullptr;
    ultima_lista = nullptr;
    _tamanho = 0;
    total_arestas = 0;
    maior_grau = 0;
    _completo = 1;
}

void ListaAdjacencia::adiciona_vertice(Lista *novo_vertice) {
    if(primeira_lista == nullptr) {
        primeira_lista = novo_vertice;
    } else {
        ultima_lista->set_prox_lista(novo_vertice);
    }
    ultima_lista = novo_vertice;
    _tamanho++;
}

Lista *ListaAdjacencia::get_primeira_lista(){
    return primeira_lista;
}

Lista *ListaAdjacencia::get_ultima_lista(){
    return ultima_lista;
}

int ListaAdjacencia::get_tamanho() {
    return _tamanho;
}

int ListaAdjacencia::get_total_arestas() {
    return total_arestas/2;
}

int ListaAdjacencia::get_grau_maximo() {
    return maior_grau;
}

int ListaAdjacencia::get_grau_minimo() {
    return menor_grau;
}

void ListaAdjacencia::set_grau_maximo(int x) {
    maior_grau = x;
}

void ListaAdjacencia::set_grau_minimo(int x) {
    menor_grau = x;
}

void ListaAdjacencia::set_n_arestas(int n) {
    total_arestas += n;
}

Lista *ListaAdjacencia::get_nesimo_elemento(int n) {
    if(n >_tamanho) {
        throw entrada_invalida_e();
    }

    Lista *aux = primeira_lista;
    while(n > 0) {
        aux = aux->get_prox_lista();
        n--;
    }
    return aux;
}

void ListaAdjacencia::set_completo(int completo) {
    _completo = completo;
}

int ListaAdjacencia::get_completo() {
    return _completo;
}