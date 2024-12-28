#include <iostream>
using namespace std;

#include "LinkedList.h"

int main(){
  LinkedList<string> miLista;

  miLista.addFirst("HOLA");
  miLista.addFirst("MUNDO");
  miLista.addFirst("YO");
  miLista.addFirst("SOY");
  miLista.addFirst("RAYADO");
  miLista.print();
  cout<<"-----------"<<endl;
  miLista.addLast("EST");
  miLista.addLast("DATOS");
  miLista.print();
  cout<<"----------"<<endl;
  if(miLista.add("MTY" , 40)){
    cout<<"Si pudo en la 40" <<endl;
  }
  else{
    cout<<"No pudo en la 40"<<endl;
  }
  if(miLista.add("MEXICO",3)){
    cout<<"Si pudo en la 3"<<endl;
  }
  else{
    cout<<"No pudo en la 3";
  }
  miLista.print();
  cout<<"El size es: "<<miLista.getSize()<<endl;
  cout<<"----------"<<endl;

  miLista.deleteAll();
  miLista.print();
  cout<<"El size es: "<<miLista.getSize()<<endl;
  cout<<"--------"<<endl;
  miLista.addLast("1");
  miLista.addLast("2");
  miLista.print();

  cout<<"----------"<<endl;
  LinkedList<int> miLista2;
  miLista2.addLast(1);
  miLista2.addLast(2);
  miLista2.addLast(3);
  miLista2.addLast(4);

  miLista2.print();

  cout<<"-----"<<endl;
  miLista2.deleteFirst();
  miLista2.print();

  cout<<"-----------"<<endl;
  miLista2.deleteLast();
  miLista2.print();

  cout<<"-----------"<<endl;
  miLista2.addFirst(100);
  miLista2.addLast(200);
  miLista2.add(300,3);
  miLista2.print();

  cout<<"-----------"<<endl;
  cout<<miLista2.get(3)<<endl;
  cout<<miLista2.set(999,1)<<endl;
  miLista2.print();

  cout<<"-----------"<<endl;
  miLista2.change(3,1);
  miLista2.print();
  cout<<endl;

  cout<<"-----------"<<endl;
  miLista2.change(2,2);
  miLista2.print();
  cout<<endl;

  cout<<"-----------"<<endl;
  miLista2.change(0,2);
  miLista2.print();
  cout<<endl;
  cout<<"-----------"<<endl;


  //Aqui automaticamente se invoca al destructor
}