
#include "Carta.h"

using namespace std;

Carta::Carta() {
}

Carta::Carta(string rango,string tipoCarta,string color,bool visible) {
    this->rango = rango;
    this->tipoCarta = tipoCarta;
    this->color = color;
    this->visible = visible;
}

string Carta::getRango() {
    return rango;
}

string Carta::getTipoCarta() {
    return tipoCarta;
}


string Carta::getColor(){
    return color;
}

bool Carta::isVisible() {
    return visible;
}

void Carta::setTipoCarta(string tipoCarta)  {
    this->tipoCarta = tipoCarta;
}

void Carta::setColor(string color) {
    this->color = color;
}

void Carta::setRango(string rango) {
    this->rango = rango;
}

void Carta::setVisible(bool visible) {
    this->visible = visible;
}

// Voltear la carta (cambiar su estado de visible/invisible)
void Carta::voltear() {
    this->visible = !(this,visible);
}

// Comparar dos cartas para determinar si son del mismo valor y color
bool Carta::compararCartas( Carta* otraCarta) {
    return (rango == otraCarta->rango) && (tipoCarta == otraCarta->tipoCarta);
}

// Obtener la representación en cadena de la carta
string Carta::imprimirCarta() {
    if (visible) {
        return  rango + tipoCarta + color;
    } else {
        return "??"; // Representación para cartas boca abajo
    }
}


Carta::~Carta() {

}



