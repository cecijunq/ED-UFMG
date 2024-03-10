#include "../include/heap.hpp"

Heap::Heap(int maxsize) {
    tamanho = maxsize;
    index = 0;
    data = new Aresta[maxsize];
}

Heap::~Heap() {
    delete data;
}

Aresta *Heap::get_heap() {
    return data;
}

void Heap::Inserir(Aresta x) {
    int index_ant = index;
    data[index] = x;
    while(index > 0 && data[index].custo < GetAncestral(index).custo) {
        Aresta aux = data[(index-1)/2];
        data[(index-1)/2] = data[index];
        data[index] = aux;
        index = (index-1)/2;
    }
    index = index_ant + 1;
}

Aresta Heap::Remover() {
    Aresta raiz = data[0];
    data[0] = data[tamanho-1];

    tamanho--;
    int i = 0;
    int menor_ramo;

    if(GetSucessorDir(i).custo > GetSucessorEsq(i).custo) menor_ramo = 2*i+1;
    else menor_ramo = 2*i+2;

    while(menor_ramo < tamanho && data[i].custo > data[menor_ramo].custo) {
        Aresta aux = data[i];
        data[i] = data[menor_ramo];
        data[menor_ramo] = aux;
        i = menor_ramo;

        if(GetSucessorDir(i).custo > GetSucessorEsq(i).custo) menor_ramo = 2*i+1;
        else menor_ramo = 2*i+2;
    
    }
    return raiz;
}

bool Heap::Vazio() {
    if(tamanho == 0) {
        return true;
    }
    return false;
}

Aresta Heap::GetAncestral(int posicao) {
    return data[(posicao - 1)/2];
}

Aresta Heap::GetSucessorEsq(int posicao) {
    return data[(2 * posicao + 1)];
}

Aresta Heap::GetSucessorDir(int posicao) {
    return data[(2 * posicao + 2)];
}
