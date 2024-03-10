#include "../include/Set.hpp"

StringSet::StringSet(int tamanho) {
    tamanhoOriginal = tamanho;
    tamanhoConjunto = 0;
    tamanhoTabela = tamanho;
    tabela = new ElementoTabela[tamanho];

    hash_func = tamanho;
}

StringSet::~StringSet() {
    delete []tabela;
}

int StringSet::Hash(std::string s) {
    int soma = 0;
    for(int i = 0; i < s.size(); i++) {
        soma += s[i];
    }

    soma = soma % hash_func;
    while(soma < tamanhoTabela && tabela[soma].vazio != true && tabela[soma].retirada != false) {
        soma++;
    }
    int i = 0;
    while(tabela[i].vazio != true && tabela[i].vazio != false) {
        i++;
    }

    if(tabela[i].vazio == false && tabela[i].retirada == true) return i;
}

void StringSet::Inserir(std::string s) {
    int pos = Hash(s);
    
    ElementoTabela novo;
    novo.dado = s;
    novo.vazio = false;
    novo.retirada = false;

    tabela[pos] = novo;
    tamanhoConjunto++;

    if(tamanhoConjunto > tamanhoTabela/2) {
        //Resize(tamanhoOriginal * 2);
    }
}

void StringSet::Resize(size_t tamanho) {
    
}

bool StringSet::Pertence(std::string s) {
    int soma = 0;
    for(int i = 0; i < s.size(); i++) {
        soma += s[i];
    }

    int pos = soma % hash_func;

    
}