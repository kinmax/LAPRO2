#ifndef __relogio_h_
#define __relogio_h_
#include <iostream>
using namespace std;

class relogio
{
	private:
		int hora, minuto, segundo;
	public:
		relogio();
		~relogio();
		void inicializa();
		void set_hora(int, int, int);
		void get_hora(int*,int*, int*);
		void avancar();
};

#endif
