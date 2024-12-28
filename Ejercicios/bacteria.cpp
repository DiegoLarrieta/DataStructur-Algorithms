#include <iostream>
#include <math.h>
using namespace std;
/*
El crecimiento diario es del 378%, lo que significa que cada día, la cantidad de bacterias se multiplica por 4.78 (1 + 3.78).
El fallecimiento diario es del 234%, lo que significa que cada día se reduce en un 2.34 veces la cantidad de bacterias (1 - 2.34).
*/

double bacteriaIterativa(int n){
  if(n==0){
    return 1.0;
  }
  double crecimiento = 4.78;
  double fallecimiento = 2.34;
  double cantidadBacterias = 1.0;


  for(int i = 0 ; i <n ; i++){
    cantidadBacterias = (cantidadBacterias*crecimiento) - (cantidadBacterias*fallecimiento);
    if(cantidadBacterias < 0 ){
      cantidadBacterias = 0;
    }
  }
  return cantidadBacterias;

}

double bacteriaRecursiva(int n) {
    // Caso base: día 0, solo hay 1 bacteria
    if (n == 0) {
        return 1.0;
    }

    // Crecimiento del 378% y fallecimiento del 234%
    double crecimiento = 4.78;
    double fallecimiento = 2.34;

    // Cálculo recursivo para el día anterior
    double cantidadBacteriasDiaAnterior = bacteriaRecursiva(n - 1);

    // Aplicar crecimiento y fallecimiento
    double cantidadBacterias = (cantidadBacteriasDiaAnterior * crecimiento) - (cantidadBacteriasDiaAnterior * fallecimiento);

    // No puede haber un número negativo de bacterias
    if (cantidadBacterias < 0) {
        return 0;
    }

    return cantidadBacterias;
}

int main(){

  int n;

  cin>>n;

  cout<<"Bacteria Iterativa: "<< bacteriaIterativa(n)<<endl;
  cout<<"Bacteria Recursiva: "<<bacteriaRecursiva(n)<<endl;
}