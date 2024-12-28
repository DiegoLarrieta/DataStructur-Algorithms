//Vamos a programar diferntes tipos de operaciones que se pueden hacer en un array

#include<iostream>
#include<vector>

using namespace std;

int insertElementEnd(vector<int>&datos ,  int numero){
  datos.push_back(numero);
  return datos.size();
}

int insertElementBegining(vector<int> &datos, int numero){
  datos.insert(datos.begin(), numero);
  return datos.size();
}

int insertElementAnyPosition(vector<int> &datos , int numero , int position){
  if(position < 0 || position > datos.size()){
    return 0;
  }
  datos.insert(datos.begin() + position, numero);

  return datos.size();
}


void printArray(const vector<int> &datos){
  for (int i = 0; i < datos.size(); i++) {
    cout << datos[i] << " ";
  }
    cout << endl;
}

int main(){
  int n;
  cin>>n;
  
  vector<int>datos(n);

  for(int i = 0 ; i<n; i++){
    cin>>datos[i];
  }
  int numero;
  cin>>numero;

  cout<<"Insertar un elemento al final"<<endl;
  insertElementEnd(datos, numero);
  printArray(datos);
  cout<<endl;
/*--------------------------------------------*/
  cout<<"Insertar un elemento al Inicio"<<endl;
  insertElementBegining(datos, numero);
  printArray(datos);
  cout<<endl;
/*--------------------------------------------*/
  int position;
  cin>>position;
  cout<<"Insertar un elemento en cualquier posicion"<<endl;
  insertElementAnyPosition(datos, numero,position);
  printArray(datos);

}
/*
5 - > Cantidad de tamanio del vector
2 
4
1
6
3
7 -> Elemnto a insertar inicio , fin y agregar posicion
? -> Agregar posicion 
*/