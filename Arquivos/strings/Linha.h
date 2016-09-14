#ifndef _Linha_h_
#define _Linha_h_

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

class Linha
{
	string texto;
	
	void setTexto(string _texto);
	void separaPalavras(string _texto);
	string getTexto();
	void exibir();
};

#endif
