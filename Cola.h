//
// Created by jerson on 5/03/24.
//

#ifndef SOLITARIO_COLA_H
#define SOLITARIO_COLA_H
#include "Node.h"

class Cola {
private:
    Node *frente;
    Node *final;
    bool esUnaColaVacia();

public:
    Cola();
    void encolar(Carta *carta);
    Carta* desencolar();
    Carta* consultarFrente();
    bool estaVacia();
    void vaciar();


};


#endif //SOLITARIO_COLA_H
