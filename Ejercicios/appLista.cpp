#include <iostream>
using namespace std;
#include "list.h"

int main(){
  Lista miLista;
  miLista.insert(154);
  miLista.insert(100);
  miLista.insert(200);
  miLista.print();
  cout<<"La lista tiene : "<<miLista.getSize() << " datos "<<endl;
  miLista.insert(999);
  miLista.insert(101);
  cout<<"La lista tiene : "<<miLista.getSize() << " datos "<<endl;
  cout<<"En la posicion 3 esta : "<<miLista.getData(3) << endl;
  cout<<"Voy a borrar el ultimo y fue : "<<endl;
  miLista.erease();
  int cant = miLista.getSize();
  cout<<"La lista tiene "<<cant<<" datos"<<endl;
  for(int i = 0; i<cant; i++){
    miLista.erease();
  }
}