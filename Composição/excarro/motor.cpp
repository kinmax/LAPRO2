#include "motor.h"

motor::motor(float _potencia, float _tanque){
  potencia=_potencia;
  tanque=_tanque;
}

void motor::setTanque(float _volume){
  tanque=_volume;
}

float motor::getTanque(){
  return tanque;
}

float motor::getPotencia(){
  return potencia;
}


