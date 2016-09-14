#include "pneu.h"

pneu::pneu(string _marca, int _pressao){
  marca=_marca;
  pressao=_pressao;
}

int pneu::getPressao(){
  return pressao;
}

void pneu::setPressao(int _pressao){
  pressao=_pressao;
}

string pneu::getMarca(){
  return marca;
}

