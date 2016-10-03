#include "inteiro.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

	inteiro *p, *paux, *tmp, *no, *pant;
	int n;
	bool achei = false;

	p = new inteiro();
 	paux = new inteiro();
	p->valor = 10;
	paux = p;
	n = 0;
	while(1)
	{
		paux = p;		
		cout << "Digite o número a ser inserido, -1 para encerrar" << endl;
		cin >> n;
		if (n == -1)
		{
			break;
		}
		while (paux != NULL)
		{
			if (paux->valor == n)
			{
				achei = true;
			}
			paux = paux->prox;
		}
		paux = p;
		if (achei == true)
		{
			no = p;
			pant = new inteiro();			
			while (no->valor != n)
			{
				pant = no;				
				no = no->prox;
			}
			tmp = no->prox;
			pant->prox = tmp;
			no->prox = NULL;
            delete(no);
		}
		else
		{
			if (p->valor > n)
			{
				tmp = new inteiro();
				tmp->valor = n;
				tmp->prox = p;
				p = tmp;
			}

			else
			{
				while(1)
				{ 
					if ((paux->prox != NULL) && (paux->prox->valor > n))
					{
						tmp = new inteiro();
						tmp->valor = n;
						tmp->prox = paux->prox;
						paux->prox = tmp;
						break;
					}
					else
					{ 
						if (paux->prox == NULL)
						{
							paux->prox = new inteiro();
							paux = paux->prox;
							paux->valor = n;
							break;	
						}
						else
						{
							paux = paux->prox;
						}
					}
				}
			}
		}
		

	}

	paux=p;
	while(paux!=NULL)
	{
    	cout << "Paux->valor = " << paux->valor << endl;
    	paux=paux->prox;
        delete p;
        p=paux;
	}

	return 0;
}






