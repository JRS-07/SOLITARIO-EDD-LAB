//
// Created by jerson on 5/03/24.
//

#ifndef SOLITARIO_LISTAENLAZADADOBLE_H
#define SOLITARIO_LISTAENLAZADADOBLE_H
#include "Node.h"
#include "Carta.h"

class ListaEnlazadaDoble {
private:
         Node* inicio;
         Node* fin;
         bool ListaVacia();

public:
        ListaEnlazadaDoble();
        //void agregar(int  indice, Carta* carta);
        void agregarInicio(Carta* carta);
        void agregarFinal(Carta* carta);
        Carta* obtenerInicio();
        Carta* obtenerFinal();
        Carta* obtener();
       // int indexOf(Carta* carta);

        //Carta* obtener(int posicion);
        void eliminarPrimerNodo();
        void eliminarUltimoNodo();
        bool estaVacia();

};


#endif //SOLITARIO_LISTAENLAZADADOBLE_H
