#ifndef _motor_h
#define _motor_h

class motor{
  private:
    float potencia;
    float tanque;
  public:
    motor(float _potencia=1.0, float _tanque=0);
    void setTanque(float _volume);
    float getTanque();
    float getPotencia();
};


#endif

