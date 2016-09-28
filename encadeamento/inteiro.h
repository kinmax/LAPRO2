#ifndef _inteiro
#define _inteiro

#include <stdlib.h>
#include <iostream>
using namespace std;

class inteiro{
  public:
    int valor;
    inteiro *prox;
    inteiro(){
      this->prox=NULL;
    }
};

#endif


