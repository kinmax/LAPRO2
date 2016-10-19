#include "Arara.h"

Arara::Arara():Passaro()
{
	this->corPredominante = "Azul";
	this->emExtincao = true;
	cout << "Criando arara" << endl;
}

Arara::~Arara()
{
	cout << "Tacando fogo na arara" << endl;
}

void Arara::canta()
{
	cout << "A-RA-RA --- A-RA-RA --- A-RA-RA" << endl;
}
