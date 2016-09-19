#include "empresa.h"
using namespace std;

empresa::empresa()
{
	nome = "Desconhecido";
	cnpj = "00.000.000/0000-00";
	nfunc = 0;
	int i;
	for(i = 0; i < 50; i++)
	{
		func[i] = funcionario();
	} 
}

void empresa::set_nome(string _nome)
{
	nome = _nome;
}

void empresa::set_cnpj(string _cnpj)
{
	cnpj = _cnpj;
}

string empresa::get_nome()
{
	return nome;
}

string empresa::get_cnpj()
{
	return cnpj;
}

int empresa::get_nfunc()
{
	return nfunc;
}

void empresa::contratar()
{
	int dia, mes, ano;
	string nome = "";
	stringstream tmpss;
	float salario;
	data dataAd;
	cout << "Digite o nome do funcionário: " << endl;
	cin >> nome;
	cout << "Digite a data de admissão do funcionário(DD MM AAAA): " << endl;
	cin >> dia >> mes >> ano;
	cout << "Digite o salário do funcionário: " << endl;
	cin >> salario;	

	if (nfunc < 50)
	{
		func[nfunc].set_nome(nome);
		dataAd.set_dia(dia);
		dataAd.set_mes(mes);
		dataAd.set_ano(ano);
		func[nfunc].set_salario(salario);
	}
}

void empresa::demitir()
{
	string nome;
	int i, indfunc;
	cout << "Digite o nome do funcionário a ser demitido: " << endl;
	cin >> nome;
	for (i = 0; i < 50; i++)
	{
		if (func[i].get_nome() == nome)
		{
			indfunc = i;
		} 
	}
	if (indfunc = 49)
	{
		func[indfunc].set_nome("Funcionário Não Cadastrado");
		func[indfunc].set_dataAd(1, 1, 2016);
		func[indfunc].set_salario(-1);
	}
	else
	{
		for (i = indfunc; i < 49; i++)
		{
			func[i] = func[i+1];
		
		}
		func[49].set_nome("Funcionário Não Cadastrado");
		func[49].set_dataAd(1, 1, 2016);
		func[49].set_salario(-1);
	}
}


