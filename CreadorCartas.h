//
// Created by jerson on 8/03/24.
//

    #ifndef SOLITARIO_CREADORCARTAS_H
    #define SOLITARIO_CREADORCARTAS_H
    #include "ListaEnlazadaDoble.h"
    #include "ListaEnlazadaDoble.cpp"
    #include "Carta.h"

    using namespace std;

    class CreadorCartas {
    public:
        CreadorCartas();
        ListaEnlazadaDoble<Carta*>* Crearbaraja();

    private:
        string createImage(int type, string value);
        string colors[2] = {"Rojo", "Negro"};
        string actualColor;
        string values[13] = {"K", "Q", "J", "10", "9", "8", "7", "6", "5", "4", "3", "2", "A"};
        string valuesT[4] = {"<3", "<>", "E3", "!!"};
        ListaEnlazadaDoble<Carta*>* cards = new ListaEnlazadaDoble<Carta*>;
        string  type;
        string color;
        string cardImage;
        string endColor ="\x1B[00m";
    };


    #endif //SOLITARIO_CREADORCARTAS_H
