#include "funcionario.h"
using namespace std;

funcionario::funcionario()
{
	nome = "Funcionário Não Cadastrado";
	dataAd.set_dia(1);
	dataAd.set_mes(1);
	dataAd.set_ano(2016);
	salario = -1;
}

void funcionario::set_nome(string _nome)
{
	nome = _nome;
}

void funcionario::set_dataAd(int dia, int mes, int ano)
{
	dataAd.set_dia(dia);
	dataAd.set_mes(mes);
	dataAd.set_ano(ano);
}

void funcionario::set_salario(float _salario)
{
	salario = _salario;
}

string funcionario::get_nome()
{
	return nome;
}

data funcionario::get_dataAd()
{
	return dataAd;
}

float funcionario::get_salario()
{
	return salario;
}

void funcionario::exibir()
{
	cout << "Nome: " << nome << endl;
	cout << "Data de Admissão: " << dataAd.get_dia() << "/" << dataAd.get_mes() << "/" << dataAd.get_ano() << endl;
	cout << "Salário: R$ " << salario << endl;
}

