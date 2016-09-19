#include "data.h"
#include "funcionario.h"
#include "empresa.h"
#include <iostream>
#include <string>
using namespace std;

int main (void)
{
	empresa e1;
	e1 = empresa();
	e1.set_nome("Programadores Mangan ltda.");
	e1.set_cnpj("12.345.678/9012-34");
	e1.contratar();	
		
	return 0;
}
