#include "automovel.h"

automovel::automovel(string _marca, int _quilometragem){
  marca=_marca;
  quilometragem=_quilometragem;

  m = new motor(2.0, 45);

  for(int i=0; i<4; i++)
    p[i] = new pneu("Michelin", 32);

}

void automovel::setQuilometragem(int _quilometragem){
  quilometragem=_quilometragem;
}

string automovel::getMarca(){
  return marca;
}

int automovel::getQuilometragem(){
  return quilometragem;
}

void automovel::print(){
  cout << "Automóvel" << endl;
  cout << "  Marca: " << marca << endl;
  cout << "  KM: " << quilometragem << endl;
  cout << "  Motor: " << endl;
  cout << "    Potencia: " << m->getPotencia() << endl;
  cout << "    Litragem: " << m->getTanque() << endl;
  cout << "  Pneus: " << endl;
  for(int i=0; i<4; i++){
    cout << "    Pneu[" << i <<"]"<< endl;
    cout << "      Marca: " << p[i]->getMarca() << endl;
    cout << "      Pressao: " << p[i]->getPressao() << endl;
  }  
}

void automovel::desloca(int _kms){

	srand(time(NULL));

  // consumo médio do carro = 10kms/litro

  // Tratamento do consumo de combustivel
  float ltsNecessarios;
  int maxKm=_kms;

  ltsNecessarios=maxKm/10;
  if(m->getTanque()<ltsNecessarios){
    maxKm=m->getTanque()*10;
    ltsNecessarios=m->getTanque();
  }

  m->setTanque(m->getTanque()-ltsNecessarios);
  
  // Tratamento da pressao dos pneus

  for(int i=0; i<4; i++)
    p[i]->setPressao(rand()%33);

  // Acrescentando kms ao carro
  quilometragem+=maxKm;

  

}

void automovel::abastece(float _lts, int _pressao){

  if(_lts+m->getTanque()>55){
    m->setTanque(_lts-m->getTanque());
    cout << "Abastecidos " << _lts-m->getTanque() << "lts" << endl;
  }
  else{
    m->setTanque(55);
    cout << "Abastecidos " << _lts << "lts" << endl;
  }

  for(int i=0; i<4; i++)
    p[i]->setPressao(_pressao);

}


