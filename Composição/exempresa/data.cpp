#include "data.h"
using namespace std;

data::data()
{
	dia = 1;
	mes = 1;
	ano = 2016;
}

data::data(int _dia, int _mes, int _ano)
{
	dia = _dia;
	mes = _mes;
	ano = _ano;
}

int data::get_dia()
{
	return dia;
}

int data::get_mes()
{
	return mes;
}

int data::get_ano()
{
	return ano;
}

void data::set_dia(int _dia)
{
	dia = _dia;
}

void data::set_mes(int _mes)
{
	mes = _mes;
}

void data::set_ano(int _ano)
{
	ano = _ano;
}

void data::exibir()
{
	cout << dia << "/" << mes << "/" << ano << endl;
}
