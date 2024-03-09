#include "Pila.h"
#include "Node.h"
#include "Carta.h"
using namespace std;


Pila::Pila() {
    this->cima = nullptr;           //inicializamos la pila vacia
    this->tamanio = 0;
}

//Insertamos una carta a la pila
void Pila::apilar(Carta* carta) {
    Node* nuevoNodo = new Node(carta);
    nuevoNodo->setSiguiente(cima);
    cima = nuevoNodo;
    tamanio++;  //incrementa el tamanio
}

//Desapilamos una carta a la pila
Carta* Pila::desapilar() {
    if(!this->pilaEstaVacia()){
        Node* nodo = cima;
        cima = nodo->getSiguiente();
        Carta* carta = nodo->getCarta();
        delete nodo;
        tamanio--;
        return carta;
    }
    else {
        return nullptr;
    }
}

//obtenemos la cima de la pila
Carta* Pila::obtenerCima() {
    if (!this->pilaEstaVacia()){
        return  this->cima->getCarta();
    }else {
        return nullptr;
    }
}

//verificamos que la pila este vacia
bool Pila::estaVacia() {
    return this->cima == nullptr;
}

//se vacia la Pila
void Pila::vaciar() {
    Node* nodo;
    while (!this->estaVacia()){
        nodo = this->cima;
        cima = cima->getSiguiente();
        delete nodo;
        tamanio--;
    }

}

int Pila::obtenerTamanio() {
    return tamanio;
}

//Mensaje error si la pila esta vacia
bool Pila::pilaEstaVacia() {
    if (this->estaVacia()){
        string mensajeError = "ERROR: La pila esta Vacia, no es posible Desapilar";
        throw mensajeError;
    }
    return false;
}
