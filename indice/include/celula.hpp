#ifndef CELULA_HPP
#define CELULA_HPP

class Celula {
    private:
        int _pagina;
        Celula *_proximo;

    public:
        Celula(int pagina, Celula *proximo);
        Celula *get_prox();
        void set_prox(Celula *proximo);
        int get_pag();
};

#endif