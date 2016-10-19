#include "Passaro.h"

Passaro::Passaro()
{
	emExtincao = false;
	corPredominante = "Desconhecida";
	cout << "Criando pássaro" << endl;
}

Passaro::~Passaro()
{
	cout << "Tacando fogo no pássaro" << endl;
}

void Passaro::canta()
{
	cout << "PIU PIU PIU" << endl;
}

bool Passaro::getEmExtincao()
{
	return emExtincao;
}

string Passaro::getCorPredominante()
{
	return corPredominante;
}
