#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

typedef struct PONTO
{
	int x, y;
	PONTO operator+ (PONTO &v1);
	PONTO operator* (PONTO &v1);
	PONTO operator- (PONTO &v1);
	PONTO operator- (); //menos unário
	void operator= (int n); //atribui n a X e Y
	void operator! (); //impressão das coordenadas X e Y
	friend ostream& operator<<(ostream &Saida, PONTO &c);
	friend istream& operator>>(istream &Entrada, PONTO &c);
	void Imprime();	
}PONTO;

void PONTO::operator! ()
{
	cout << "X: " << x << "     Y: " << y << endl;
}

void PONTO::operator= (int n)
{
	x = n;
	y = n;
}

PONTO PONTO::operator+ (PONTO &v1)
{
	PONTO temp;
	temp.x = v1.x + x;
	temp.y = v1.y + y;
	return temp;
}

PONTO PONTO::operator* (PONTO &v1)
{
	PONTO temp;
	temp.x = v1.x * x;
	temp.y = v1.y * y;
	return temp;
}

PONTO PONTO::operator- (PONTO &v1)
{
	PONTO temp;
	temp.x = x - v1.x;
	temp.y = y - v1.y;
	return temp;
}

PONTO PONTO::operator- () //unário
{
	PONTO temp;
	temp.x = -x;
	temp.y = -y;
	return temp;
}

ostream& operator<<(ostream &Saida, PONTO &p)
{
	Saida << "X: " << p.x << endl;
	Saida << "Y: " << p.y << endl;
	return Saida;
}

istream& operator>>(istream &Entrada, PONTO &p)
{
	cout << "Digite a nova coordenada X do ponto: " << endl;
	Entrada >> p.x;
	cout << "Digite a nova coordenada Y do ponto: " << endl;
	Entrada >> p.y;
	return Entrada;	
}

int main (void)
{
	PONTO p1;
	PONTO p2;
	p2.x = 10;
	p2.y = 12;
	p1.x = 5;
	p1.y = 7;
	!p1;
	p1 = 8;
	!p1;
	p1 = -p1;
	!p1;
	p1 = p1 - p2;
	!p1;
	p1 = p1 + p2;
	!p1;
	p1 = p1 * p2;
	!p1;
	cin >> p1;
	cout << p1;

	return 0;
}

