#include "NodeT.h"

class BST{
  public:
    BST();
    ~BST();

    bool search (int data);
    void add(int data);
    void remove(int data);
    void print();

    int size();

  private :

    NodeT *root;

    int howManyChildren(NodeT *r);
    int succ(NodeT *r);
    int pred(NodeT *r);

};

BST::BST(){
  root = nullptr;
}

BST::~BST(){

}

int BST::howManyChildren(NodeT *r){
  int cont = 0;
  if(r->getLeft() != nullptr){
    cont++;
  }
  if(r->getRight() != nullptr){
    cont++;
  }
  return cont;
}
//Menor de los mayores
int BST::succ(NodeT *r){
  NodeT *curr = r->getRight();
  while (curr ->getLeft() != nullptr){
    curr = curr ->getLeft();
  }
  return curr ->getData();
}

//Mayor de los menores
int BST::pred(NodeT *r){
  NodeT *curr = r->getLeft();
  while( curr ->getRight()!= nullptr){
    curr = curr ->getRight();
  }
  return curr ->getData();
}

bool BST::search(int data){
  NodeT *curr = root;

  while(curr != nullptr){
    if(curr ->getData() == data){
      return true;
    }
//    if(curr -> getData() > data){
//      curr = curr ->getLeft();
//   }
//    else{
//      curr = curr ->getRight();
//    }
    curr = (curr ->getData() > data) ? curr->getLeft() : curr->getRight();
  }
  return false; // por aqui se sale si root es nullptr o no esta el dato
}

void BST::add(int data){

  if(root == nullptr){
    root = new NodeT(data);
  }
  else{
    NodeT *curr = root;
    NodeT *parent = nullptr;
    while (curr != nullptr){
      if(curr -> getData() == data){
        return;
      }
      parent = curr;
      curr = (curr->getData() > data ) ? curr ->getLeft() : curr->getRight();
    }
//    if(parent ->getData() > data){
//      parent -> setLeft(new NodeT(data));
//    }
//    else{
//      parent ->setRight(new NodeT(data));
//    }
    (parent ->getData() > data) ? parent ->setLeft(new NodeT(data)) : parent -> setRight(new NodeT(data));

  }
}

void BST::remove(int data){

}

