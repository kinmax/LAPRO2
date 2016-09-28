#include "inteiro.h"
#include <iostream>

using namespace std;

int main(){

  inteiro *p, *paux, *pant, *no, n;
  p=NULL;

	p = new inteiro();
 	paux = new inteiro();
	pant = new inteiro();
	p->valor = 10;
	paux = pant = p;
	i = 0;
	while(i != -1)
	{
		paux = p;		
		cout << "Digite o numero a ser inserido, -1 para encerrar" << endl;
		cin >> n;
]		while(paux->prox != NULL || paux->valor < n)
		{
			pant = paux;			
			paux = paux->prox;
		}
		no = new inteiro();
		no->valor = n;
		no->prox = paux;
		pant->prox = no;
	}
	paux = p;
	while (paux != NULL)
	{
		cout << paux->valor << endl;
	}
	

  paux=p;
  while(paux!=NULL){
    cout << "Paux->valor == " << paux->valor << endl;
    paux=paux->prox;
    delete p;
    p=paux;
  }

  return 0;
}






