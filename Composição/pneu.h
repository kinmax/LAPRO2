#ifndef _pneu_h
#define _pneu_h

#include <string>

using namespace std;

class pneu{
  private:
    string marca;
    int pressao;
  public:
    pneu(string _marca="desconhecida", int _pressao=-1);
    int getPressao();
    void setPressao(int _pressao);
    string getMarca();
};

#endif

