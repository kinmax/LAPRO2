#ifndef __pessoa_h
#define __pessoa_h

#include <stdio.h>
#include <string.h>

class Pessoa
{
	private:
		char nome[100];
		int idade;
		float altura;
	public:
		Pessoa();
		void set_nome(char* _nome);
		char* get_nome();
		void set_idade(int _idade);
		int get_idade();
		void set_altura(float _altura);
		float get_altura();
		void exibir();
};

#endif
