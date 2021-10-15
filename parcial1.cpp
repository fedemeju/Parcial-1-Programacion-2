#include<iostream>
#include"parcial.h"
#include "ResumenDiario.h"
#include "Estacion.h"
using namespace std;
///punto 1
void RecaudacionMes(){
ResumenDiario r;

int pos=0;
int totalTipo[12][5]{};
cout<<"_________________________________________________________________________\n";
cout<<"PUNTO 1: \n\n";

  while(r.leerDeDisco(pos)){
      if(r.getFecha().getAnio() == 2020){
      totalTipo[r.getFecha().getMes()-1][r.getIDTipoCombustible()-1] += r.getLitrosIniciales()-r.getLitrosFinales(); // sumo la venta
      }
      pos++;
  }//while

  for(int m=0; m<12; m++){
    cout<<"_________________________________\n";
    cout<<"Mes: "<<m+1<<endl<<endl;
    for(int t=0; t<5; t++){
        nombreCombustible(t+1);
        cout<<"$"<<totalTipo[m][t]<<endl<<endl;
    }
  }
cout<<"_________________________________________________________________________\n";
}


void nombreCombustible(int tipo){

switch (tipo)
{
case 1:
    cout<<"Nafta Super: \n";
    break;
case 2:
    cout<<"Nafta Comun: \n";
    break;
case 3:
    cout<<"Diesel: \n";
    break;
case 4:
    cout<<"Gasoil: \n";
    break;
case 5:
    cout<<"GNC: \n";
    break;


default:
    break;
}

}


///punto 2
void punto2(){

ResumenDiario r;
cout<<"_________________________________________________________________________\n";
cout<<"PUNTO 2: \n\n";

int pos=0,maxAnio,cantLitros=-1;
int anio[2021]{};


while(r.leerDeDisco(pos)){
    anio[r.getFecha().getAnio()-1] += r.getLitrosIniciales()-r.getLitrosFinales();
    pos++;
}//while

for(int i=0;i<2021;i++){

    if(anio[i]>cantLitros){
        maxAnio =i+1;
        cantLitros = anio[i];
    }

}

cout<<"El año con mayor recaudacion fue el: "<<maxAnio<<" vendiendo un total de "<<cantLitros<<" litros"<<endl<<endl;
cout<<"_________________________________________________________________________\n";

}

///punto 3
void punto3(){
cout<<"_________________________________________________________________________\n";
cout<<"PUNTO 3: \n\n";

ResumenDiario r;

int pos=0;
int totalEst[50][5]{};


  while(r.leerDeDisco(pos)){

      totalEst[r.getIDEstacion()-1][r.getIDTipoCombustible()-1] += r.getLitrosIniciales()-r.getLitrosFinales(); // sumo la venta;

      pos++;
  }//while

  cout<<"Las estaciones de servicio que vendieron mas litros de Diesel que Nafta súper pero que nunca hayan vendido Gasoil fueron: \n";
  for(int e=0; e<50; e++){
    if(totalEst[e][2] > totalEst[e][0] && totalEst[e][3] ==0)
        cout<<e+1<<endl;
}
cout<<endl<<endl;
cout<<"_________________________________________________________________________\n";
}

void punto4(){

ResumenDiario r;
Estacion e;

int estaciones[50][4]{};

int pos=0;

while(r.leerDeDisco(pos)){
    estaciones[r.getIDEstacion()-1][r.getFecha().getAnio()-2018] += r.getLitrosIniciales()-r.getLitrosFinales();

    pos++;
}//while

for(int i=0; i<50;i++){
    for(int a=0; a<4; a++){
    e.setId(i+1);
    e.setAnio(a+2018);
    e.setLITROS(estaciones[i][a]);
    e.grabarEnDisco();
    }
}

}


