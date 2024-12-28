#include <iostream>
using namespace std;

int factIterativo(int n){
  int acum = 1;
  for(int i = 1; i<=n ;i++){
    acum *= i;
  }
  return acum;
}

int factRecursivo(int n){
  if(n == 0){
    return 1;
  }
  return n*factRecursivo(n-1);
}
int main(){
  int n;

  cin>>n;

  cout<<"Factorial Iterativo : " << factIterativo(n)<<endl;

  cout<<"Factorial Recursivo : "<<factRecursivo(n)<<endl;
}