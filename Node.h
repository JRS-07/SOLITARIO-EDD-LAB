//
// Created by jerson on 29/02/24.
//

#ifndef SOLITARIO_NODE_H
#define SOLITARIO_NODE_H
#include "Carta.h"

class Node {
    private:
            Carta* carta;
            Node* siguiente;
            Node* anterior;

    public:
            Node();
            Node(Carta *carta);
            void setCarta(Carta *carta);
            void setSiguiente(Node* siguiente);
            void setAnterior(Node* anterior);
            Carta* getCarta();
            Node* getSiguiente();
            Node* getAnterior();
};


#endif//SOLITARIO_NODE_H
