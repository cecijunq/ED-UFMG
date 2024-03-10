#include <iostream>
#include "../include/arvore.hpp"

int main() {
    Arvore a = Arvore();
    int n;

    std::cin >> n;
    //Node *anterior = nullptr;
    for(int i = 0; i < n; i++) {
        std::string palavra;
        int pagina;

        std::cin >> palavra;
        std::cin >> pagina;

        a.inserir_palavra(palavra, pagina, nullptr, a.get_raiz(), 0);
    }

    a.imprimir(a.get_raiz());
}

/*
6
laranja 10
uva 5
melancia 8
laranja 2
abacaxi 20
uva 5
 */