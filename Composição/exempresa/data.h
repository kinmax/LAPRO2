#ifndef _data_h_
#define _data_h_

#include <iostream>

class data
{
	private:
		int dia, mes, ano;
	public:
		data();
		void set_dia(int _dia);
		void set_mes(int _mes);
		void set_ano(int _ano);
		int get_dia();
		int get_mes();
		int get_ano();
		void exibir();			
};
#endif


