#include <iostream>
#include <fstream>
#include <string>
#include "urna.h"
#include "candidato.h"
using namespace std;

int main (void)
{
	ifstream candfile;
	ifstream urnafile[4];
	cout << "Abrindo Arquivos..." << endl;	
	urna urnas[4];
	candidato candidatos[20], maisVotado, menosVotado;
	string name, party;
	float percentual, total = 0;
	int number, i, vnumber;
	candfile.open("candidatos.txt", ios::in);
	urnafile[0].open("urna1.txt", ios::in);
	urnafile[1].open("urna2.txt", ios::in);
	urnafile[2].open("urna3.txt", ios::in);
	urnafile[3].open("urna4.txt", ios::in);
	if (!candfile.is_open() || !urnafile[0].is_open() || !urnafile[1].is_open() || !urnafile[2].is_open() || !urnafile[3].is_open())
	{
		cout << "Um ou mais arquivos não puderam ser abertos!" << endl;
		return 1;
	}
	for (i = 0; i < 20; i++)
	{
		candfile >> number >> name >> party;
		candidatos[i].set_nome(name);
		candidatos[i].set_partido(party);
		candidatos[i].set_numero(number); 
	}
	for (i = 0; i < 4; i++)
	{
		while (!urnafile[i].eof())
		{
			urnafile[i] >> vnumber;
			total++;
			switch(vnumber)
			{
				case 1: candidatos[0].somar_voto(); break;
				case 2: candidatos[1].somar_voto(); break;
				case 3: candidatos[2].somar_voto(); break;
				case 4: candidatos[3].somar_voto(); break;
				case 5: candidatos[4].somar_voto(); break;
				case 6: candidatos[5].somar_voto(); break;
				case 7: candidatos[6].somar_voto(); break;
				case 8: candidatos[7].somar_voto(); break;
				case 9: candidatos[8].somar_voto(); break;
				case 10: candidatos[9].somar_voto(); break;
				case 11: candidatos[10].somar_voto(); break;
				case 12: candidatos[11].somar_voto(); break;
				case 13: candidatos[12].somar_voto(); break;
				case 14: candidatos[13].somar_voto(); break;
				case 15: candidatos[14].somar_voto(); break;
				case 16: candidatos[15].somar_voto(); break;
				case 17: candidatos[16].somar_voto(); break;
				case 18: candidatos[17].somar_voto(); break;
				case 19: candidatos[18].somar_voto(); break;
				case 20: candidatos[19].somar_voto(); break;


				
			}
			
		}
	}

	maisVotado = menosVotado = candidatos[0];	
	for (i = 0; i < 20; i++)
	{
		if (candidatos[i].get_votos() > maisVotado.get_votos())
		{
			maisVotado = candidatos[i];
		}
		if (candidatos[i].get_votos() < menosVotado.get_votos())
		{
			menosVotado = candidatos[i]; 
		}
	}

    percentual =  ((maisVotado.get_votos()/total)*100);

	cout << "Candidato mais votado: " << maisVotado.get_numero() << " " << maisVotado.get_nome() << " " << maisVotado.get_partido() << endl;
	cout << "Candidato menos votado: " << menosVotado.get_numero() << " " << menosVotado.get_nome() << " " << menosVotado.get_partido() << endl;
	cout << "Porcentagem de votos do candidato mais votado em relação ao total: " << percentual << endl; 

	

	
	
}
