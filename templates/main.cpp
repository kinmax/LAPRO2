#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

template <typename T>
void ordenaPorSelecao(T a[], int N);

template <typename T>
void ordenaPorSelecao(T a[], int N)
{
	int i, j, aux, indMenor;
	for(i = 0; i < N-1; i++)
	{
		indMenor = i;
		for(j = i + 1; j < N; j++)
		{
			if(a[j] < a[indMenor])
			{
				indMenor = j;
			}
		}
		aux = a[i];
		a[i] = a[indMenor];
		a[indMenor] = aux;
	}
}

int main (void)
{
	int i = 0;	
	int arrayi [] = {4, 3, 2, 5, 1};
	float arrayf [] = {16.8, 2.3, 7.4, 3.7, 5.1};
	char arrayc [] = {'d', 'g', 'z', 'a', 'p'};

	ordenaPorSelecao(arrayi, 5);
	ordenaPorSelecao(arrayf, 5);
	ordenaPorSelecao(arrayc, 5);

	for(i = 0; i < 5; i++)
	{
		cout << arrayi[i] << " ";
	}
	cout << endl;
	
	for(i = 0; i < 5; i++)
	{
		cout << (float) arrayf[i] << " ";
	}
	cout << endl;
	
	for(i = 0; i < 5; i++)
	{
		cout << arrayc[i] << " ";
	}
	cout << endl;
	
	return 0; 
}
