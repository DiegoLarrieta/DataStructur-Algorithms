#include <iostream>

using namespace std;

int potenciaIterativa(int x , int y){
  int acum = 1;
  for(int i=1;i<=y;i++){
    acum *= x;
  }
  return acum;
}

int potenciaRecursiva(int x , int y){
  if(y == 0){
    return 1;
  }
  return x * potenciaRecursiva(x,y-1);

}

int main(){

int x , y;

cin>>x>>y;

cout<<"La potencia Iterativa de x a la y es : " <<x<<" a la " <<y<<" es: " <<potenciaIterativa(x,y)<<endl;

cout<<"La potencia Rescursiova de x a la y es : " <<x<<" a la " <<y<<" es: " <<potenciaRecursiva(x,y)<<endl;


};