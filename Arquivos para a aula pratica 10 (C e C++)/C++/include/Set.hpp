#ifndef SET_HPP
#define SET_HPP

//#include <bits/stdc++.h>
#include <string>

typedef struct s_table_elem{
    std::string dado;
    bool vazio;
    bool retirada;

} ElementoTabela;

class StringSet{
    
    private:
        int tamanhoOriginal;
        int tamanhoTabela;
        int tamanhoConjunto;
        int hash_func;
        ElementoTabela* tabela;

        int Hash(std::string s);
        void Rehash(int pos);
        void Resize(size_t tamanho);

    public:
        StringSet(int tamanho);
        ~StringSet();

        void Inserir(std::string s);
        void Remover(std::string s);
        bool Pertence(std::string s);
        
        StringSet* Intersecao(StringSet* S);
        StringSet* Uniao(StringSet* S);
        StringSet* DiferencaSimetrica(StringSet* S);

        void Imprimir();

};

#endif