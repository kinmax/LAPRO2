#ifndef _empresa_h_
#define _empresa_h_

#include <iostream>
#include <string>
#include "data.h"
#include "funcionario.h"
#include <stdio.h>
#include <sstream>
using namespace std;

class empresa
{
	private:
		string nome, cnpj;
		funcionario func[100];
		int nfunc;
	public:
		empresa();
		void set_nome(string _nome);
		void set_cnpj(string _cnpj);
		string get_nome();
		string get_cnpj();
		int get_nfunc();
		void contratar();
		void demitir();
};

#endif
