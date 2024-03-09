//
// Created by jerson on 5/03/24.
//

#include "Cola.h"
#include <iostream>
#include "Carta.h"
#include "Node.h"

Cola::Cola() {
    this->frente = nullptr;
    this->final = nullptr;
}

void Cola::encolar(Carta *carta) {
    Node *nodoNuevo = new Node(carta);
    if(this->estaVacia()){
        this->frente = nodoNuevo;

    }else{
        final->setSiguiente(nodoNuevo);
    }
    this->final = nodoNuevo;
}

Carta* Cola::desencolar() {
    if(!this->esUnaColaVacia()){
        Node* nodo = this->frente;
        frente = nodo->getSiguiente();
        Carta* carta = nodo->getCarta();
        delete nodo;
        return carta;
    }else {
        return nullptr;
    }
}

Carta* Cola::consultarFrente()  {
    if (!this->esUnaColaVacia()){
        return this->frente->getCarta();
    }
    return nullptr;
}

bool Cola::estaVacia() {
    return this->frente == NULL;
}

bool Cola::esUnaColaVacia() {
    if(estaVacia()){
        std::string msg = "Error: La cola se encuentra vacia";
        throw msg;
    }
    return false;
}

void Cola::vaciar() {
    Node* nodo;
    while (!this->estaVacia()){
        nodo = this->frente;
        frente = frente->getSiguiente();
        delete nodo;
    }
}






