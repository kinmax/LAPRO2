/*Criar um vetor de N posições, definido em tempo de execução.
Escreva valores randômicos nas posições ímpares e, nas posições pares, escreva "posição + 3". Para escrita, use aritmética de ponteiros. Ao final, imprimir o conteúdo de cada posição do vetor, informando o índice do vetor e endereço na memória. Crie o vetor usando o comando new e, ao final, libere-o com o comando delete.*/

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main (void)
{
	srand(time(NULL));
	int size, *vet, *ptr, i;
	cout << "Digite o tamanho do vetor: ";
	cin >> size;
	cout << endl;
	vet = new int[size];
	ptr = vet;
	for (i = 0; i < size; i++)
	{
		if (i%2 == 0)
		{
			*ptr = i + 3;
		}
		else
		{
			*ptr = rand()%100;
		}
		ptr++;
	}
	ptr = vet;
	while((ptr-vet) != size)
	{
		cout << "Índice: " << ptr-vet << endl;
		cout << "Conteúdo: " << *ptr << endl;
		cout << "Endereço: " << ptr << endl;
		cout << endl;
		ptr++;
	}
	ptr = vet;
	delete(ptr);
	return 0;
}
