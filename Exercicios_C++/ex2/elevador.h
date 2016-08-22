#ifndef __elevador_h_
#define __elevador_h_

#include <iostream>
using namespace std;

class elevador
{
	private:
		int andar_atual;
		int total_andares;
		int nro_pessoas;
		int capacidade;
	public:
		elevador();
		~elevador();		
		void inicializa(int, int);
		void entra();
		void sai();
		void sobe();
		void desce();
		int get_andar_atual();
		int get_capacidade();
		int get_nro_pessoas();
		int get_total_andares();
};

#endif
