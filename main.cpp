#include <iostream>
#include "Carta.h"
#include "Pila.h"
#include "Cola.h"

using namespace std;

int main (){
    //Agregando cartas a la pila
    Carta carta1 ("As","<3","R", true);
    Carta carta2 ("J", "<>","N", true);
    Carta carta5 ("Q", "E3","N", true);
    Carta carta6 ("7", "!!","R", true);

    //Agregando cartas a la cola
    Carta carta3("7","<3", "R", true);
    Carta carta4("Q","!!", "N",true);
    Carta carta7("6","E3", "R",true);
    Carta carta8("AS","<>", "N",true);




    Pila miPila;
    Cola miCola;

    miPila.apilar(&carta1);
    miPila.apilar(&carta2);
    miPila.apilar(&carta5);
    miPila.apilar(&carta6);

    //imprimiendo fila
    cout<<"Pila :"<<carta1.imprimirCarta()<<endl;
    cout<<"Pila :"<<carta2.imprimirCarta()<<endl;
    cout<<"Pila :"<<carta5.imprimirCarta()<<endl;
    cout<<"Pila :"<<carta6.imprimirCarta()<<endl;


    miCola.encolar(&carta3);
    miCola.encolar(&carta4);
    miCola.encolar(&carta7);
    miCola.encolar(&carta8);


    //imprimiendo cola
    cout<<"cola :"<<carta3.imprimirCarta()<<endl;
    cout<<"cola :"<<carta4.imprimirCarta()<<endl;;
    cout<<"cola :"<<carta7.imprimirCarta()<<endl;;
    cout<<"cola :"<<carta8.imprimirCarta()<<endl;;
    //cout<<"Pila : "<<carta1.getRango()<< " Tipo Carta "<<carta1.getTipoCarta()<<" Boca Arriba "<< carta1.isVisible()<<endl;

    //cout<<"Cola: "<<carta3.getRango() << " TipoCarta: "<<carta3.getTipoCarta()<<" Boca Arriba: "<<carta3.isVisible()<<endl;

    cout<<"Imprimiendo cimas de la cola y la pila"<<endl;
    cout<<"Ver cima pila: "<<miPila.obtenerCima()->imprimirCarta()<<endl;

    cout<<"Ver cima Cola: "<<miCola.consultarFrente()->imprimirCarta()<<endl;
    return 0;
}

