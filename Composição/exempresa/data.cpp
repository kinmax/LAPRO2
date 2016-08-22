#include "data.h"

data::data()
{
	dia = 01;
	mes = 01
	ano = 2016;
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

void data::exibir()
{
	cout << dia << "/" << mes << "/" << ano << endl;
}
