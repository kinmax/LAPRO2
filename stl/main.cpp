#include "Turma.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;

bool ordena_por_nome(Turma A, Turma B)
{
    if (A.get_nome() > B.get_nome())
       return true;
    return false;
}

int main (void)
{
	list<Turma> turmas;
	list<Turma>::iterator k;
	string code, cred, name, group;
	Turma *t;
	vector<int> semana;
	vector<string> horario;

	int op = 1;
	while(op != 0)
	{
		cout << "Digite o código da turma: " << endl;
		cin >> code;
		cout << "Digite o número de créditos semanais da turma: " << endl;
		cin >> cred;
		cout << "Digite o nome da turma: " << endl;
		cin >> name;
		cout << "Digite o número da turma: " << endl;
		cin >> group;
		t = new Turma(code, cred, name, group);
		cout << "Digite os horários da turma (AB, CD, NP, JK, etc.): " << endl;
		
	}
	
	//sort(turmas.begin(), turmas.end(), ordena_por_nome);

	
	
	return 0;
}
