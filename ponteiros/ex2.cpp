#include <iostream>
#include <fstream>
using namespace std;

int main (void)
{
	int **mat, *ptr, *aux, **ptr2, l, c, i, n;
	ifstream file;
	file.open("vetor.txt", ios::in);
	if(!file.is_open())
	{
		cout << "O arquivo não pôde ser aberto" << endl;
		return 1;
	}

	file >> l;
	mat = new int*[l];
	ptr2=mat;
    ptr=*mat;
   
    int idx=0;

	while (!file.eof())
	{
		file >> c;
		aux = new int[c];
		for(i = 0; i < c; i++)
		{
			file >> n;
			aux[i] = n;
		}
		mat[idx++]=aux;
	}

    l=c=0;

	ptr2 = mat;
    while(*ptr2){
      ptr=*ptr2++;
      c=0;
      while(*ptr){
        cout << "valor l(" << l << ") c(" << c << "): " << *ptr << endl;
        ptr++;
        c++;
      }
      l++;
    }

	return 0;
}
