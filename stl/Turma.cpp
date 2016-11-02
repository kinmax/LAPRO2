#include "Turma.h"

Turma::Turma()
{
}

Turma::Turma(string _codigo, string _creditos, string _nome, string _turma)
{
	codigo = _codigo;
	creditos = _creditos;
	nome = _nome;
	turma = _turma;
}

Turma::~Turma()
{
}

string Turma::get_codigo()
{
	return codigo;
}

string Turma::get_creditos()
{
	return creditos;
}

string Turma::get_nome()
{
	return nome;
}

string Turma::get_turma()
{
	return turma;
}

vector<int> Turma::get_diaSemana()
{
	return diaSemana;
}

vector<string> Turma::get_horario()
{
	return horario;
}

void Turma::set_codigo(string _codigo)
{
	codigo = _codigo;
}

void Turma::set_creditos(string _creditos)
{
	creditos = _creditos;
}

void Turma::set_nome(string _nome)
{
	nome = _nome;
}

void Turma::set_turma(string _turma)
{
	turma = _turma;
}

void Turma::set_diaSemana(vector<int> _diaSemana)
{
	diaSemana = _diaSemana;
}

void Turma::set_horario(vector<string> _horario)
{
	horario = _horario;
}

void Turma::insere_diaSemana(int _dia)
{
	diaSemana.push_back(_dia);
}

void Turma::insere_horario(string _horario)
{
	horario.push_back(_horario);
}

void Turma::exibir()
{
	vector<int>::iterator d;
	vector<string>::iterator h;
	cout << "Código da Turma: " << codigo << endl;
	cout << "Nome da Turma: " << nome << endl;
	cout << "Número da Turma: " << turma << endl;
	cout << "Número de Créditos da Turma: " << creditos << endl;
	cout << "Dias da semana em que a turma tem aula: ";
	for(d = diaSemana.begin(); d != diaSemana.end(); d++)
	{
		cout << *d << " ";
	}
	cout << endl;
	cout << "Horários em que a turma tem aula: ";
	for(h = horario.begin(); h != horario.end(); h++)
	{
		cout << *h << " ";
	}
	cout << endl << "=================================================================" << endl;
}
