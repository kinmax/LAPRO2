#ifndef _passaro_h_
#define _passaro_h_

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Passaro
{
	protected:
		bool emExtincao;
		string corPredominante;	
	public:	
		Passaro();
		virtual ~Passaro();
		virtual void canta();
		bool getEmExtincao();
		string getCorPredominante();
};
#endif
