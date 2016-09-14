#ifndef _candidato_h_
#define _candidato_h_

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class candidato
{
	private:
		string nome, partido;
		int numero, votos;
	public:
		candidato(string _nome, string _partido, int _numero, int _votos);
		candidato();
		void set_nome(string _nome);
		void set_partido(string _partido);
		void set_numero(int _numero);
		void set_votos(int _votos);
		string get_nome();
		string get_partido();
		int get_numero();
		int get_votos();
		void exibir();
		void somar_voto();
};

#endif
