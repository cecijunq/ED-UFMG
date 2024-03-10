#ifndef NODE_HPP
#define NODE_HPP

class Node {
    private:
        int _n;
        Node *_esq;
        Node *_dir;

    public:
        Node(int n);
        int get_n();
        Node *get_esq();
        Node *get_dir();
        void set_esq(Node *ramo);
        void set_dir(Node *ramo);
};

#endif