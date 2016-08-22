#include "automovel.h"

using namespace std;

int main(){
  automovel a;

  a.print();

  cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;

  a.desloca(200);
  a.print();  

  cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;

  a.abastece(55, 32);
  a.print();  

  cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;

  a.desloca(400);
  a.print();  

  return 0;

}

