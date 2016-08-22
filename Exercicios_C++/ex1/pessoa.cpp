#include "pessoa.h"

Pessoa::Pessoa()
{
	nome[0] = 0;
	idade = 0;
	altura = 0;
}

void Pessoa::set_nome(char* _nome)
{
	strcpy(nome, _nome);
}

char* Pessoa::get_nome()
{
	return nome;
}

void Pessoa::set_idade(int _idade)
{
	idade = _idade;
}

int Pessoa::get_idade()
{
	return idade;
}

void Pessoa::set_altura(float _altura)
{
	altura = _altura;
}

float Pessoa::get_altura()
{
	return altura;
}

void Pessoa::exibir()
{	
	printf("Nome: %s\nIdade: %d anos\nAltura: %.2f metros\n",nome,  idade, altura);
}
