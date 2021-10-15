#include <iostream>
using namespace std;
#include "ResumenDiario.h"
#include "parcial.h"
#include "Estacion.h"

int main()
{


    RecaudacionMes(); ///punto 1
    punto2();
    punto3();  ///Punto 3

    //punto4(); // LO LLAMO UNA VEZ SOLA PARA QUE NO SIGA ESCRIBIENDO
    Estacion e;
    ///punto 5
    cout<<"_________________________________________________________________________\n";
    cout<<"PUNTO 4 y 5: \n\n";
    int pos=0;
    while(e.leerDeDisco(pos++))
        e.mostrar4();

    return 0;
}
