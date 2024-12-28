#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
//Complejidad O(N);
//Busqueda secuencial o lineal 

int busqSecuencial(vector<int> &datos , int datoBusca){
  for (int i = 0; i<datos.size();i++){
    if(datos[i] == datoBusca){
      return i;
    }
  }
  return -1;
}

void print(vector<int> &datos){
  for(int i = 0 ; i <datos.size();i++){
    cout<<datos[i]<<" ";
  }
  cout<<endl;

}

int main(){
  int n,datoBusca;
  cin>>n;
  vector<int>datos(n);//Construyo un vector del tamanio n 

  for(int i = 0; i<n;i++){
    cin>>datos[i];
  }
  cin>> datoBusca;

  int posSecuencial = busqSecuencial(datos,datoBusca);
  int comSecuncial = (posSecuencial == -1 ? datos.size() : (posSecuencial+1));
  cout<<"La posicion del dato es: "<<posSecuencial<<endl;
  cout<<"La busqueda secuencial hizo: "<<comSecuncial<<endl;
  cout<<endl << endl;
  cout<<"Datos originales: ";
  print(datos);
  cout<<"==========="<<endl;
  cout<<"Datos ordenados ascendentemente : ";
  sort(datos.begin(), datos.end());
  print(datos);

  cout<<"==========="<<endl;
  cout<<"Datos ordenados descendentemente : ";
  sort(datos.begin(), datos.end(), greater<int>());
  print(datos);
}