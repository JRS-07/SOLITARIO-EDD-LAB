//
// Created by jerson on 28/02/24.
//

#ifndef SOLITARIO_CARTA_H
#define SOLITARIO_CARTA_H
#include <string>

using  namespace std;

class Carta {
public:
            string rango;       //Az,2,3,4....K
            string tipoCarta;           //Diamante, corazon...etc
            string color;               //Rojo o Negro
            bool visible;

public:
            //Constructor
            Carta();
            Carta(string rango,string tipoCarta, string color, bool visible);
            //Metodos getters and setters
            string getRango();
            string getTipoCarta();
            string getColor();
            bool isVisible();
            void setRango(string rango);
            void setTipoCarta(string tipoCarta);
            void setColor(string color);
            void setVisible(bool visible);
            void voltear();
            bool compararCartas(Carta* carta);
            string imprimirCarta();
            ~Carta();
};

#endif //SOLITARIO_CARTA_H
