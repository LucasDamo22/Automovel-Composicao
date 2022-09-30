#include "Pneu.hpp"
#include <sstream>

Pneu::Pneu(double Pressure, std::string brand) {
  m_Pressure = Pressure;
  m_brand = brand;
}
Pneu::~Pneu() {}

void Pneu::definePressure(double pressure) { m_Pressure = pressure; }
void Pneu::defineBrand(std::string brand) { m_brand = brand; }
double Pneu::getPressure() { return m_Pressure; }

std::string Pneu::getBrand() { return m_brand; }

std::string Pneu::toString() {
  std::stringstream ss;
  ss << "Marca " << m_brand << std::endl
     << "Pressão " << m_Pressure << std::endl;

  return ss.str();
}