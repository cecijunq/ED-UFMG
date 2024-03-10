#include <iostream>

#include "../include/heap.hpp"

int main() {
    int n;
    std::cin >> n;
    if(n <= 0) {
        return 0;
    }
    
    Heap h(n);

    for(int i = 0; i < n; i++) {
        int elemento;
        std::cin >> elemento;
        h.Inserir(elemento);
    }
    
    std::string output = "";
    while(h.Vazio() == false) {
        output = output + std::to_string(h.Remover()) + " ";
    }

    for(int i = 0; i < output.size()-1; i++) {
        std::cout << output[i];
    }
    std::cout << std::endl;
}