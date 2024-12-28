#include <iostream>
using namespace std;

// Fibonacci

int fibonacciRecursivo(int n){
  if(n==0){
    return 0;
  }
  else if (n==1 || n==2){
    return 1;
  }
  else{
    return fibonacciRecursivo(n-1) + fibonacciRecursivo(n-2);
  }
  
}

int fibonacciIterativo(int n){
  int ant = 1;
  int act = 1;
  int suma;
  for(int i = 3; i<=n;i++){
    suma = act + ant;
    ant = act;
    act = suma;
  }
  return act;
}

int main(){

  int n;
  
  cin>>n;

  cout<<"Fibonacci de " << n << " es : " << fibonacciRecursivo(n)<<endl;
  cout<<"Fibonacci de " << n << " es : " << fibonacciIterativo(n)<<endl;
}