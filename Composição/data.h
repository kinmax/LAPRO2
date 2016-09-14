#ifndef _data_h_
#define _data_h_

#include <iostream>

using namespace std;

class data
{
	private:
		int dia, mes, ano;
	public:
		data();
		data(int _dia, int _mes, int _ano);
		int get_dia();
		int get_mes();
		int get_ano();
		void set_dia(int _dia);
		void set_mes(int _mes);
		void set_ano(int _ano);
		void exibir();
};
