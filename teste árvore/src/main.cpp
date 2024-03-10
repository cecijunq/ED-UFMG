#include "../include/arvore.hpp"
#include <iostream>

int main() {
    int n;
    std::cin >> n;
    Arvore a = Arvore();
    for(int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        Node *novo = new Node(num);
        a.insere(num, a.get_raiz());
    }
    a.imprime(a.get_raiz());
}