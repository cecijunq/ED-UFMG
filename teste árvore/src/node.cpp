#include "../include/node.hpp"

Node::Node(int n) { _n = n; }

int Node::get_n() { return _n; }

Node *Node::get_esq() { return _esq; }

Node *Node::get_dir() { return _dir; }

void Node::set_esq(Node *ramo) { _esq = ramo; }

void Node::set_dir(Node *ramo) { _dir = ramo; }