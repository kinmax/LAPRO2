#ifndef _automovel_h
#define _automovel_h

#include "pneu.h"
#include "motor.h"

#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

class automovel{
  private:
    string marca;
    int quilometragem;

    motor *m;
    pneu *p[4];

  public:
    automovel(string _marca ="desconhecida", int _quilometragem=0);
    void setQuilometragem(int _quilometragem);
    string getMarca();
    int getQuilometragem();

    void desloca(int _kms);
    void abastece(float _lts, int _pressao);

    void print();
};

#endif

