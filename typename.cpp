#include <iostream>

using namespace std;

int menorInt(int a1 ,int a2){
  if(a1<a2){
    return a1;
  }
  else{
    return a2;
  }
}

float menorFLoat(float b1, float b2){
  if(b1<b2){
    return b1;
  }
  else{
    return b2;
  }
}

template<typename T>
T menor (T c1, T c2){
  /*
  if(c1<c2){
    return c1;
  }
  else{
    return c2;
  }
  */
 return (c1 < c2) ? c1 : c2; // Si la condicion es verdadera regresa c1 y si no regresa c2
}

int main(){
  int a1, a2;

  float b1,b2;

  cin>>a1>>a2;
  cout<<menor(a1,a2)<<endl;

  cin>>b1>>b2;
  cout<<menor(b1,b2)<<endl;
  return 0;
}