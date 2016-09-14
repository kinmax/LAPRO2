#ifndef _empresa_h_
#define _empresa_h_

#include <iostream>

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
