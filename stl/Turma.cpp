#include "Turma.h"

Turma::Turma()
{
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
