#ifndef _PNEU_H_
#define _PNEU_H_
#define size1 4
#include <string>

class Pneu{
double m_Pressure;
std::string m_brand;
  public:

Pneu(double pressure = 40,std::string brand = "Remold");
~Pneu();

void definePressure(double pressure);
void defineBrand(std::string brand);
double getPressure();
std::string getBrand();
std::string toString();

};

#endif