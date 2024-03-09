#include "Carta.h"
#include "Node.h"
using namespace std;

Node::Node() {
}

Node::Node(Carta *carta) {
    this->carta = carta;
    this->siguiente = nullptr;
    this->anterior = nullptr;
}

void Node::setCarta(Carta *carta) {
    this->carta = carta;
}

void Node::setAnterior(Node* anterior) {
    this->anterior = anterior;
}

void Node::setSiguiente(Node* siguiente) {
    this->siguiente = siguiente;
}

Carta* Node::getCarta() {
    return this->carta;
}

Node* Node::getSiguiente() {
    return this->siguiente;
}

Node* Node::getAnterior() {
    return this->anterior;
}
