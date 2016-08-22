#include "pessoa.h"

int main (void)
{	
	Pessoa p1;	
	p1.set_nome("José da Silva");
	p1.set_altura(1.90);
	p1.set_idade(18);
	p1.exibir();

	return 0;
}
