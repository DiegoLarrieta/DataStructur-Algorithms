//Aqui se tendran todos los algoritmos de ordenamiento 


#include<iostream>
#include <vector>

using namespace std;

//Complejidad O(N^2)
int sortIntercambio(vector<int>&intercambio){
  int comp = 0, temp;
  for(int i = 0 ; i<intercambio.size()-1;i++){
    for(int j = i+1 ; j<intercambio.size() ; j++){
      comp++;
      if(intercambio[i] > intercambio[j]){
        temp = intercambio[i];
        intercambio[i] = intercambio[j];
        intercambio[j] = temp;
      }
    }
  }
  return comp;
}

//Complejidad O(N^2)
int bubbleSort(vector<int>&bubble){
  int comp = 0, temp;
  bool interruptor = true;
  for(int i = 0; i<bubble.size()-1 ; i++){
    interruptor = false;
    for(int j = 0 ; j<bubble.size()-1 - i; j++){
      comp++;
      if(bubble[j+1] < bubble [j]){
        temp = bubble[j+1];
        bubble[j+1] = bubble[j];
        bubble[j] = temp;
        interruptor = true;
      }
    }
    if (!interruptor) break;
  }
  return comp;
}
//Complejodad O(N^2)
int selectionSort(vector<int>&selection){
  int indMenor , aux , comp=0;
  for(int i = 0 ; i<selection.size()-1; i++){
    indMenor = i;
    for(int j = i+1; j<selection.size();j++){ // Buscar al menor elemento en la pasada i  
      comp++;
      if(selection[j] < selection[indMenor]){
        indMenor = j;
      }
    }
    if(i != indMenor){
      aux = selection[i];
      selection[i] = selection[indMenor];
      selection[indMenor] = aux;
    }
  }
  return comp;
}

int insertionSort(vector<int>&insertion){
  int aux , j , comp = 0 ;
  for(int i = 1; i<insertion.size();i++){
    j = i;
    aux = insertion[i];
    while(j>0 && aux<insertion[j-1]){ // Hace corrimientos de los mayores y comparas si es menor que el elemento a su izquierda j-1
      comp++;
      insertion[j] = insertion[j-1]; // Mueve el elemento mayor un lugar a la derecha
      j--;
    }
    if(j>0){
      comp++;
    }
    insertion[j] = aux; // Inserta el elemento en su posición correcta
  }
  return comp;
}

//Complejidad O(N)
void merge(vector<int>&mergeArray, int left, int half, int right){
  vector<int>aux(mergeArray.size());
  int i = left , j = half+1, k = left;
  while (i <= half && j<= right){
    if(mergeArray[i] < mergeArray[j]){
      aux[k++] = mergeArray[i++];
    }
    else{
      aux[k++] = mergeArray[j++];
    }
  }
  if(i>half){
    for(int a = j ; a<=right; a++){
      aux[k++] = mergeArray[a];
    }
  }
  else{
    for(int a = i; a<=half; a++){
      aux[k++] = mergeArray[a];
    }
  }
  for(int a = left; a<=right ; a++){
    mergeArray[a] = aux[a];
  }
}
//Complejidad O(N LOG N)
int mergeSort(vector<int>&mergeArray, int left , int right){
  if(left < right){
    int half = (left + right) / 2;
    mergeSort(mergeArray,left,half);
    mergeSort(mergeArray, half+1, right);
    merge(mergeArray, left, half, right);
  }
}

//  Pariticion O(N)
void particion(vector<int>&quick,int begin , int end , int &pivote){
  int elemPiv = quick[begin];
  int aux;
  int j = begin; // ultimo en la agrupacion de menores;
  for(int i = begin + 1; i<= end ; i++){
    if(quick[i] < elemPiv){
      j++;
      aux = quick[j];
      quick[j] = quick[i];
      quick[i] = aux;
    }
  }
  pivote = j;
  aux = quick[begin];
  quick[begin] = quick[pivote];
  quick[pivote] = aux;

}
//Quick sort peor paso O(N^2) MEJOR O(N LOG N)
int quickSort(vector<int>&quick, int begin, int end){
  if(begin < end){
    int pivote;
    particion(quick, begin, end , pivote);
    quickSort(quick , begin , pivote-1);
    quickSort(quick, pivote+1, end);
  }
}


void print( const vector<int>&intercambio){
  for(int i = 0 ; i<intercambio.size();i++){
    cout<<intercambio[i]<<" ";
  }
  cout<<endl;
}

int main(){
  int datoLee;
  int n;
  cin>>n;

  vector<int>intercambio(n); //Vector para el sort por intercambio
  vector<int>bubble(n);
  vector<int>selection(n);
  vector<int>insertion(n);
  vector<int>mergeArray(n);
  vector<int>quick(n);

  for(int i = 0 ; i <n; i++){
    cin>>datoLee;
    intercambio[i] = datoLee;
    bubble[i] = datoLee;
    selection[i] = datoLee;
    insertion[i] = datoLee;
    mergeArray[i] = datoLee;
    quick[i] = datoLee;
  }


  cout<<"Sort de intercambio"<<endl;
  int comparadorIntercambio = sortIntercambio(intercambio);
  print(intercambio);
  cout<<"Comparaciones de Intercambio : "<<comparadorIntercambio<<endl;

  cout<<"==================="<<endl;

  cout<<"Sort de Burbuja"<<endl;
  int comparadorBurbuja =  bubbleSort(bubble);
  print(bubble);
  cout<<"Comparaciones de Burbuja: "<<comparadorBurbuja<<endl;

  cout<<"==================="<<endl;
  cout<<"Sort de Seleccion"<<endl;
  int comparadorSelection =  selectionSort(selection);
  print(selection);
  cout<<"Comparaciones de Selection: "<<comparadorSelection<<endl;

  cout<<"==================="<<endl;
  cout<<"Sort de Insersion"<<endl;
  int comparadorInsersion =  selectionSort(insertion);
  print(insertion);
  cout<<"Comparaciones de Selection: "<<comparadorInsersion<<endl;

  cout<<"==================="<<endl;
  cout<<"Sort de Merge"<<endl;
  int comparadorMerge =  mergeSort(mergeArray,0,n-1);
  print(mergeArray);
  //cout<<"Comparaciones de Merge: "<<comparadorMerge<<endl;

  cout<<"==================="<<endl;
  cout<<"Sort de Quick"<<endl;
  int comparadorQuick =  0;
  quickSort(quick, 0 , n-1);
  print(quick);
  //cout<<"Comparaciones de Merge: "<<comparadorMerge<<endl;

}

/*
6
2 24 30 1 5 -2
*/                                                