#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "Linha.h" 
using namespace std;

int main()
{
    
    string S;
    LinhaTexto Linha;
    ifstream arquivoDeEntrada;
    
    arquivoDeEntrada.open ("Texto.txt", ios::in);
    
    if (!arquivoDeEntrada)  
    {      
        cout << "Problemas na abertura do arquivo" << endl;     
        system("pause"); 
        exit(1);  
    }
    while (!arquivoDeEntrada.eof())
    {
        getline(arquivoDeEntrada, S);
        if (S.empty())
            continue;
        Linha.setTexto(S);
        Linha.separaPalavras();
        cout << "--" << endl;
    }
    arquivoDeEntrada.close();
    cout << "++" << endl;
    
    system("pause");

}
