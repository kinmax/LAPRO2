#ifndef _urna_h_
#define _urna_h_

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class urna
{
	private:
		int nurna, nvotos;
	public:
		urna(int _nurna, int _nvotos);
		urna();
		void set_nurna(int _nurna);
		void set_nvotos(int _nvotos);
		int get_nurna();
		int get_nvotos();
		void exibir();
};
#endif
