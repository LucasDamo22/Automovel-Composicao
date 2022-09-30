#include "Motor.hpp"
#include <iostream>
#include <sstream>

Motor::Motor(double Hp, double Tankcap, double Tanklevel, double Consumo) {
  m_Hp = Hp;
  m_TankCap = Tankcap;
  m_Tanklevel = Tanklevel;
  m_Consumo = Consumo;
}
Motor::~Motor() {}
void Motor::defineHp(double Hp) { m_Hp = Hp; }

void Motor::defineTankcap(double Tankcap) { m_TankCap = Tankcap; }

void Motor::defineTanklevel(double Tanklevel) { m_Tanklevel = Tanklevel; }

void Motor::defineConsumo(double Consumo) { m_Consumo = Consumo; }

double Motor::getHp() { return m_Hp; }

double Motor::getTankcap() { return m_TankCap; }

double Motor::getTanklevel() { return m_Tanklevel; }

double Motor::getConsumo() { return m_Consumo; }

void Motor::deslocation(double KM) {
  double spentFuel = KM * m_Consumo;

  m_Tanklevel -= spentFuel;
}

void Motor::fuelTank(double gas) {
  double aux = gas;
  for (int i = 0; i < gas; i++) {
    if (m_Tanklevel < m_TankCap) {
      aux--;
      m_Tanklevel++;
    } else {
      std::cout << "Tanque Cheio!" << std::endl;
      std::cout << "Sobraram " << aux << " Litros" << std::endl;
    }
  }
}

std::string Motor::toString() {
  std::stringstream ss;

  ss << "Potencia " << m_Hp << std::endl;
  ss << "Capacidade do Tanque " << m_TankCap << std::endl;
  ss << "Nivel do Tanque " << m_Tanklevel << std::endl;
  ss << "Consumo médio " << m_Consumo << " Kms/litro" << std::endl;

  return ss.str();
}