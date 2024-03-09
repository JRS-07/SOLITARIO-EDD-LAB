//
// Created by jerson on 28/02/24.
//

#ifndef SOLITARIO_PILA_H
#define SOLITARIO_PILA_H
#include "Node.h"
#include "Carta.h"
#include <string>

class Pila {
    private:
            Node* cima;
            int tamanio;
            bool pilaEstaVacia();

    public:
            Pila();
            void apilar(Carta *carta);
            Carta* desapilar();
            Carta* obtenerCima();
            bool estaVacia();
            int obtenerTamanio();
            void vaciar();
};

#endif //SOLITARIO_PILA_H
