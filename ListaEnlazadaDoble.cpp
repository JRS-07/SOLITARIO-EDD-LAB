//
// Created by jerson on 5/03/24.
//
#include "Carta.h"
#include "ListaEnlazadaDoble.h"
#include "Node.h"

ListaEnlazadaDoble::ListaEnlazadaDoble()  {
    this->inicio = nullptr;
    this->fin = nullptr;
}

void ListaEnlazadaDoble::agregarInicio(Carta* carta){
    Node* nodoInicio = new Node(carta);
    if(this->estaVacia()){
        this->inicio = nodoInicio;
        this->fin = nodoInicio;

    }else{
        nodoInicio->setSiguiente(this->inicio);
        this->inicio->setAnterior(nodoInicio);
        this->inicio = nodoInicio;

    }
}

//Agregar un nodo al final de la lista
void ListaEnlazadaDoble::agregarFinal(Carta* carta){
    Node* nodoFinal = new Node(carta);
    if(this->estaVacia()){
        this->inicio = nodoFinal;
        this->fin = nodoFinal;
    }else{
        nodoFinal->setAnterior(this->fin);
        this->fin->setSiguiente(nodoFinal);
        this->fin = nodoFinal;
    }


}


Carta* ListaEnlazadaDoble::obtenerInicio() {
    if (!this->estaVacia()){
        return this->inicio->getCarta();
    }else{
        return nullptr;
    }

}

Carta* ListaEnlazadaDoble::obtenerFinal() {
    if(!this->estaVacia()){
        return this->fin->getCarta();
    }
    return nullptr;
}


void ListaEnlazadaDoble::eliminarPrimerNodo() {
    if(!this->estaVacia()){
        Node* nodoPrimero = this->inicio;
        if(this->inicio == this->fin){
            this->inicio = NULL;
            this->fin = NULL;
        }
        else{
            this->inicio = nodoPrimero->getSiguiente();
            nodoPrimero->getSiguiente()->setAnterior(NULL);
        }
        delete nodoPrimero;
    }
}

void ListaEnlazadaDoble::eliminarUltimoNodo() {
    if(!this->estaVacia()){
        Node* nodoUltimo = this->fin;
        if(this->fin == this->inicio){
            this->inicio = NULL;
            this->inicio = NULL;
        }else{
            this->fin = nodoUltimo->getAnterior();
            nodoUltimo->getAnterior()->setSiguiente(NULL);
        }
        delete nodoUltimo;
    }
}


//indica si la lista esta vacia retorna true
bool ListaEnlazadaDoble::estaVacia() {
    return this->inicio == NULL && fin == NULL;
}

bool ListaEnlazadaDoble::ListaVacia() {
    if(this->estaVacia()){
        std::string msg = "La lista se encuentra vacia";
        throw msg;
    }
    return false;
}


