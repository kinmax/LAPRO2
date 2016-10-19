#ifndef _arara_h_
#define _arara_h_

#include <iostream>
#include <cstdlib>
#include <string>
#include "Passaro.h"
using namespace std;

//class Passaro;

class Arara : public Passaro
{
	public:
		Arara();
		~Arara();
		void canta();
};
#endif
