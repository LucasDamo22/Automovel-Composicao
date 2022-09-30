#ifndef _MOTOR_H_
#define _MOTOR_H_

#include <string>

class Motor {
  double m_Hp;
  double m_TankCap;
  double m_Tanklevel;
  double m_Consumo;

public:
  Motor(double Hp = 1.0, double Tankcap = 45.0, double Tanklevel = 0,
        double Consumo = 10.0);
  ~Motor();
  void defineHp(double Hp);
  void defineTankcap(double Tankcap);
  void defineTanklevel(double Tanklevel);
  void defineConsumo(double Consumo);
  double getHp();
  double getTankcap();
  double getTanklevel();
  double getConsumo();
  void deslocation(double KM);
  void fuelTank(double gas);
  std::string toString();
};
#endif