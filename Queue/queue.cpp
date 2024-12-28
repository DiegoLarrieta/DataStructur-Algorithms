#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main(){
  int n, dato;

  cin>> n;
  // Queue y stack , Push and pop => O(1)
  //Priority queue, Push and Pop => O(log n)
  queue<int> fila;
  stack<int> pila;
  priority_queue<int> pq1; // prioridad valor mayor
  priority_queue<int, vector<int>, greater<int> > pq2; //Prioridad valor menor

  for(int i = 0 ; i < n ; i++){
  cin>>dato;
  fila.push(dato);
  pila.push(dato);
  pq1.push(dato);
  pq2.push(dato);
  }
  cout<<endl;
  cout<< "La fila tiene :  " <<fila.size() << " elementos y son: ";

  while(!fila.empty()){
  cout<<fila.front()<<" ";  // Observa quien es el frente de la fila  
  fila.pop();               // saca de la fila
  }
  cout<<endl;
  cout<< "La pila tiene :  " <<pila.size() << " elementos y son: ";
  while(!pila.empty()){
    cout<<pila.top()<<" ";  // Observa quien es el frente de la pila
    pila.pop();               // saca de la pila
  }
  cout<<endl;
  cout<< "La pq1 tiene :  " <<pq1.size() << " elementos y son: ";
  while(!pq1.empty()){
    cout<<pq1.top()<<" ";  // Observa quien es el frente de la pq1
    pq1.pop();               // saca de la pq1
  }
  cout<<endl;
  cout<< "La pq2 tiene :  " <<pq2.size() << " elementos y son: ";
  while(!pq2.empty()){
    cout<<pq2.top()<<" ";  // Observa quien es el frente de la pq2
    pq2.pop();               // saca de la pq2
  }
  cout<<endl;
}

/*
5
100
50
75
120
90
*/