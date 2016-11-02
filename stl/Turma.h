#ifndef _turma_h_
#define _turma_h_

#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

class Turma
{
	private:
		string codigo, creditos, nome, turma;
		vector<int> diaSemana;
		vector<string> horario;
	public:
		Turma();
		Turma(string _codigo, string _creditos, string _nome, string _turma);
		~Turma();
		string get_codigo();
		string get_creditos();
		string get_nome();
		string get_turma();
		vector<int> get_diaSemana();
		vector<string> get_horario();
		void set_codigo(string _codigo);
		void set_creditos(string _creditos);
		void set_nome(string _nome);
		void set_turma(string _turma);
		void set_diaSemana(vector<int> _diaSemana);
		void set_horario(vector<string> _horario);
		void insere_diaSemana(int _dia);
		void insere_horario(string _horario);
		void exibir();
};
#endif

