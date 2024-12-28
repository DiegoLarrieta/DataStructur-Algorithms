#include "Node.h"

template<class T>
class LinkedList{
  public:
    LinkedList();
    ~LinkedList();
    void addFirst(T data);
    void addLast(T data);

    bool add(T data, int pos);
    void deleteFirst();
    void deleteLast();
    int deleteAll();
    void del(int pos);

    bool isEmpty();
    int getSize();
    void change(int pos1, int pos2);

    T get(int pos);
    T set(T data , int pos);
    void print();

    void reverse();
    void shift(int n);
    bool operator==(const LinkedList<T> &otra);

  private:
    Node<T> *head;
    int size;
  
};

template<class T>
LinkedList<T>::LinkedList(){
  this ->head = nullptr;
  this ->size = 0;
}

template<class T>
LinkedList<T>::~LinkedList(){
  deleteAll();
}

template<class T>
// Complejidad O(1)
void LinkedList<T>::addFirst(T data){
  head = new Node <T>(data, head);
  size++;
}

template<class T>
// Complejidad O(n)
void LinkedList<T>::addLast(T data){
  if(size == 0 ){
    addFirst(data);
  }
  else{
    Node<T>*curr = head;
    while (curr ->getNext()!= nullptr){
      curr = curr->getNext(); // Avanzar un elemento en la lista 
    }
    curr ->setNext(new Node<T>(data)); // Encadenando un elemento al final de la lista 
    size ++;
  }
}



template<class T>
// Complejidad O(1)
void LinkedList<T>::deleteFirst(){
  if(size>0){
    Node <T> *curr = head;
    head = head -> getNext();
    delete curr;
    size--;
  }
}

template <class T>
// Complejidad O(N)
bool LinkedList<T>::add(T data,int pos){
  if(pos > size){
    return false;
  }
  if(pos == 0){
    addFirst(data);
  } 
  else if(pos == size){
    addLast(data);
  }
  else{
    Node<T> *curr = head;
    for(int i = 0; i<pos;i++){
      curr = curr ->getNext();
    }
    curr ->setNext(new Node <T>(data, curr->getNext()));
    size++;
  }
  return true;
}

template<class T>
// Complejidad O(n)
void LinkedList<T>::deleteLast(){
  if(size <= 1){
    deleteFirst();
  }
  else {
    Node<T>*curr = head;
    while(curr -> getNext() ->getNext() != nullptr){
      curr = curr ->getNext();
    }
    delete curr -> getNext();
    curr -> setNext(nullptr);
    size --;
  }
}

template<class T>
// Complejidad O(N)
int LinkedList<T>::deleteAll(){
  Node<T>*curr = head;
  while(head!=nullptr){
    head = head->getNext();
    delete curr;
    curr = head;
  }
  int cant = size;
  size = 0;
  return cant;
}

template<class T>
// Complejidad O(N)
void LinkedList<T>::del(int pos){
  if(pos == 0){
    deleteFirst();
  }
  else if(pos == size -1){
    deleteLast();
  }
  else{
    Node<T> *curr = head;
    for(int i = 1; i<pos ; i++){
      curr = curr -> getNext();
    }
    Node<T> *aux = curr->getNext();
    curr -> setNext(aux ->getNext());
    delete aux;
    size--;
  }
}

template<class T>
//  Complejidad O(1)
bool LinkedList<T>::isEmpty(){
  return (size == 0);
}
template<class T>
//  Complejidad O(1)
int LinkedList<T>::getSize(){
  return size;
}



template<class T>
//Complejidad O(N)
T LinkedList<T>::set(T data, int pos){
  Node<T> *curr = head;
  for(int i=1; i<=pos;i++){
    curr = curr->getNext();
  }
  T dataAux = curr ->getData();
  curr ->setData(data);
  return dataAux;
}

template<class T>
//Complejidad O(N)
T LinkedList<T>::get(int pos){
  Node<T>*curr = head;
  for(int i = 1; i<=pos; i++){
    curr = curr ->getNext();
  }
  return curr ->getData();
}

template<class T>
void LinkedList<T>::change(int pos1, int pos2){
  if(pos1 != pos2){
    int posMen = (pos1 < pos2 ) ? pos1:pos2;
    int posMay = (pos1 > pos2) ? pos1 : pos2;
    Node<T>* curr1 =  head;
    for(int i = 1; i<=posMen; i++){
      curr1 = curr1 ->getNext();
    }
    Node<T>*curr2 = curr1;
    for(int i = 1 ; i<=(posMay-posMen); i++){
      curr2 = curr2 ->getNext();
    }
    T dataAux = curr1 ->getData();
    curr1 -> setData(curr2 ->getData());
    curr2 -> setData(dataAux);
  }
}
template<class T>
// Complejidad O(N)
void LinkedList<T>::print(){
  Node<T>*curr = head;
  while(curr!= nullptr){
    cout<<curr->getData()<<endl;
    curr = curr->getNext();
  }
}

template<class T>
void LinkedList<T>::reverse(){
//Aqui va la implementacion
}

template<class T>
void LinkedList<T>::shift(int n){\
//Aqui va la implementacion

}

template<class T>
bool LinkedList<T>::operator==(const LinkedList<T> &otra){
  //funcion para comparar si los elementos de las listas son diferentes

}