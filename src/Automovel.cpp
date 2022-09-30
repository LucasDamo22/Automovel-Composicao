#include "Automovel.hpp"
#include <iostream>
#include <sstream>
Automovel::Automovel(std::string marca, unsigned int kilometragem,
                     Motor *engine, Pneu *p1, Pneu *p2, Pneu *p3, Pneu *p4)
{

  m_engine = *engine;

  m_tyre[0] = *p1;
  m_tyre[1] = *p2;
  m_tyre[2] = *p3;
  m_tyre[3] = *p4;

  m_Marca = marca;

  m_kilometragem = kilometragem;
}

void Automovel::defineMarca(std::string marca)
{
  m_Marca = marca;
}

void Automovel::defineKilometragem(unsigned kilometragem)
{
  m_kilometragem = kilometragem;
}

void Automovel::defineMotor(Motor *engine)
{
  m_engine = *engine;
}
void Automovel::definePneu(int num, Pneu *tyre)
{
  m_tyre[num] = *tyre;
}

std::string Automovel::getMarca()
{
  return m_Marca;
}

unsigned Automovel::getKilometragem()
{
  return m_kilometragem;
}

Motor Automovel::getMotor()
{
  return Automovel::m_engine;
}

Pneu Automovel::getPneu(int num)
{
  return m_tyre[num];
}

void Automovel::desloca(double kilometros)
{
  m_kilometragem += kilometros;
  m_engine.deslocation(kilometros);
}
void Automovel::abastece(double litros)
{
  m_engine.fuelTank(litros);
}

void Automovel::calibra(double pressao)
{
  for (int i = 0; i < size1; i++)
  {
    m_tyre[i].definePressure(pressao);
  }
}
std::string Automovel::toString()
{
  std::stringstream ss;
  ss << "Motor " << m_engine.toString() << std::endl;
  ss << "Pneu 1 " << m_tyre[0].toString() << std::endl;
  ss << "Pneu 2 " << m_tyre[1].toString() << std::endl;
  ss << "Pneu 3 " << m_tyre[2].toString() << std::endl;
  ss << "Pneu 4 " << m_tyre[3].toString() << std::endl;
  ss << "Marca " << m_Marca << std::endl;
  ss << "Quilometragem " << m_kilometragem << std::endl;

  return ss.str();
}
