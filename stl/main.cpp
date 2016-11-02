#include "Turma.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <list>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;

bool operator==(Turma &t1, Turma &t2)
{
    if(t1.get_nome() == t2.get_nome())
	{
		return true;
	}
	return false;
}

bool operator>(Turma &t1, Turma &t2)
{
    if(t1.get_nome() > t2.get_nome())
	{
		return true;
	}
	return false;
}

bool operator<(Turma &t1, Turma &t2)
{
    if(t1.get_nome() < t2.get_nome())
	{
		return true;
	}
	return false;
}
int main (void)
{
	list<Turma> turmas;
	list<Turma>::iterator k;
	string code, cred, name, group;
	Turma *t;
	string hor;
	int dia;
	vector<int> semana;
	vector<string> horario;

	int op = 1;
	while(op != 0)
	{
		cout << "Digite o código da turma: " << endl;
		cin >> code;
		cout << "Digite o número de créditos semanais da turma: " << endl;
		cin >> cred;
		getchar();
		cout << "Digite o nome da turma: " << endl;
		std::getline(std::cin, name);
		cout << "Digite o número da turma: " << endl;
		cin >> group;
		t = new Turma(code, cred, name, group);
		cout << "Digite os horários da turma (AB, CD, NP, JK, etc.) um de cada vez, dando Enter após cada valor('z' para finalizar): " << endl;
		cin >> hor;
		while(hor != "z")
		{
			t->insere_horario(hor);
			cin >> hor;
		}
		cout << "Digite os dias da semana em que esta turma tem aula (2, 3, 4, 5, etc.), um de cada vez, dando Enter após cada valor (-1 para finalizar): " << endl;
		cin >> dia;
		while(dia != -1)
		{
			t->insere_diaSemana(dia);
			cin >> dia;
		}
		turmas.push_back(*t);
		cout << "Deseja continuar (1 - SIM/0 - NÃO)" << endl;
		cin >> op;
	}

	turmas.sort();
	cout << endl << endl;

	for(k = turmas.begin(); k != turmas.end(); k++)
	{
		k->exibir();
	}
	
	

	
	
	return 0;
}
