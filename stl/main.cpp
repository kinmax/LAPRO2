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
	std::list<Turma>::iterator k;
	Turma t1, t2, t3;
	vector<int> semana;
	vector<string> horario;
	
	t1.set_codigo("740.42");
	t1.set_creditos("4");
	t1.set_nome("Turma 1");
	t1.set_turma("590");

	semana.push_back(2);
	semana.push_back(5);

	horario.push_back("AB");
	horario.push_back("AB");
	
	t1.set_horario(horario);
	t1.set_diaSemana(semana);

	turmas.push_back(t1);

	t2.set_codigo("65876854");
	t2.set_creditos("92");
	t2.set_nome("Turma 2");
	t2.set_turma("600");

	semana.push_back(3);
	semana.push_back(4);

	horario.push_back("CD");
	horario.push_back("CD");
	
	t2.set_horario(horario);
	t2.set_diaSemana(semana);

	turmas.push_back(t2);

	t3.set_codigo("7895");
	t3.set_creditos("7");
	t3.set_nome("Turma 0");
	t3.set_turma("752");

	semana.push_back(8);
	semana.push_back(7);

	horario.push_back("NP");
	horario.push_back("NP");
	
	t3.set_horario(horario);
	t3.set_diaSemana(semana);

	turmas.push_back(t3);
	
	sort(turmas.begin(), turmas.end(), ordena_por_nome);

	
	
	return 0;
}
