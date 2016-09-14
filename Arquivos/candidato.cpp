#include "candidato.h"

candidato::candidato(string _nome, string _partido, int _numero, int _votos)
{
	nome = _nome;
	partido = _partido;
	numero = _numero;
	votos = _votos;
}

candidato::candidato()
{
	nome = "Desconhecido";
	partido = "Desconhecido";
	numero = -1;
	votos = 0;
}

void candidato::set_nome(string _nome)
{
	nome = _nome;
}

void candidato::set_partido(string _partido)
{
	partido = _partido;
}

void candidato::set_numero(int _numero)
{
	numero = _numero;
}

void candidato::set_votos (int _votos)
{
	votos = _votos;
}

string candidato::get_nome()
{
	return nome;
}

string candidato::get_partido()
{
	return partido;
}

int candidato::get_numero()
{
	return numero;
}

int candidato::get_votos()
{
	return votos;
}

void candidato::exibir()
{
	cout << "Nome: " << nome << endl;
	cout << "Partido: " << partido << endl;
	cout << "Número do Candidato: " << numero << endl;
	cout << "Número de Votos: " << votos << endl;
}

void candidato::somar_voto()
{
	votos++;
}
