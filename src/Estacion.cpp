#include<iostream>
using namespace std;
#include "Estacion.h"

bool Estacion::grabarEnDisco()
{
    FILE* p;
    p = fopen("estaciones.dat", "ab");
    if (p == NULL) {
        return false;
    }

    if (fwrite(this, sizeof(Estacion), 1, p)) {
        fclose(p);
        return true;
    }
    else {
        fclose(p);
        return false;
    }
}

bool Estacion::leerDeDisco(int pos)
{
    FILE* p;
    p = fopen("estaciones.dat", "rb");

    if (p == NULL) {
        return false;
    }

    fseek(p, sizeof(Estacion) * pos, 0);

    if (fread(this, sizeof(Estacion), 1, p))
    {
        fclose(p);
        return true;
    }
    else {
        fclose(p);
        return false;
    }
}

void Estacion::setID(int  id){
    this->ID =id;
}
void Estacion::setTotalLitros(int total){
    this->totalLitros = total;
}
void Estacion::setAnio(int anio){
    this->anio =anio;
}


void Estacion::setId(int id){
    this->ID = id;
}
void Estacion::setLITROS(int litros){
    this->totalLitros = litros;
}


int Estacion::getAnio(){
    return this->anio;
}
int Estacion::getLitros(){
    return this->totalLitros;
}
int Estacion::getID(){
    return this->ID;
}


void Estacion::mostrar4(){



cout<<"ID: "<<this->ID<<" -- anio "<<this->anio<<" -- litros: "<<this->totalLitros<<endl;

}
