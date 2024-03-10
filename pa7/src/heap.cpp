#include "../include/heap.hpp"

Heap::Heap(int maxsize) {
    tamanho = maxsize;
    index = 0;
    data = new int[maxsize];
}

Heap::~Heap() {
    delete data;
}

void Heap::Inserir(int x) {
    int index_ant = index;
    data[index] = x;
    while(index > 0 && data[index] < GetAncestral(index)) {
        int aux = data[(index-1)/2];
        data[(index-1)/2] = data[index];
        data[index] = aux;
        index = (index-1)/2;
    }
    index = index_ant + 1;
}

int Heap::Remover() {
    int raiz = data[0];
    data[0] = data[tamanho-1];

    tamanho--;
    int i = 0;
    int menor_ramo;
    if(GetSucessorDir(i) > GetSucessorEsq(i)) menor_ramo = 2*i+1;
    
    else menor_ramo = 2*i+2;

    while(menor_ramo < tamanho && data[i] > data[menor_ramo]) {
        int aux = data[i];
        data[i] = data[menor_ramo];
        data[menor_ramo] = aux;
        i = menor_ramo;

        if(GetSucessorDir(i) > GetSucessorEsq(i)) menor_ramo = 2*i+1;
        else if(GetSucessorDir(i) < GetSucessorEsq(i)) menor_ramo = 2*i+2;
    
    }
    return raiz;
}

bool Heap::Vazio() {
    if(tamanho == 0) {
        return true;
    }
    return false;
}

int Heap::GetAncestral(int posicao) {
    return data[(posicao - 1)/2];
}

int Heap::GetSucessorEsq(int posicao) {
    return data[(2 * posicao + 1)];
}

int Heap::GetSucessorDir(int posicao) {
    return data[(2 * posicao + 2)];
}
