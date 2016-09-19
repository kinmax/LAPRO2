#ifndef __funcionario_h_
#define __funcionario_h_

#include <iostream>
#include <string>
#include "data.h"
using namespace std;


class funcionario
{
	private:
		string nome;
		data dataAd;
		float salario;
	public:
		funcionario();
		void set_nome(string _nome);
		void set_dataAd(int dia, int mes, int ano);
		void set_salario(float _salario);
		string get_nome();
		data get_dataAd();
		float get_salario();
		void exibir();
		
};
#endif
