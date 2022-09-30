#include "Motor.hpp"
#include "Pneu.hpp"
#include <iostream>
class Automovel {
  Motor m_engine;
  Pneu m_tyre[size1];
  std::string m_Marca;
  unsigned  m_kilometragem;

public:
  Automovel(std::string m_marca = "Indefinido", unsigned int m_kilometragem = 0,
            Motor *engine = nullptr, Pneu *p1 = nullptr, Pneu *p2 = nullptr,
            Pneu *p3 = nullptr, Pneu *p4 = nullptr);

  
  void defineMarca(std::string marca);
  void defineKilometragem(unsigned  kilometragem);
  void defineMotor(Motor *engine);
  void definePneu(int num,Pneu *tyre);
  std::string getMarca();
  unsigned getKilometragem();
  Motor getMotor();
  Pneu getPneu(int num);

  void desloca(double kilometros);
  void abastece(double litros);
  void calibra(double pressao);

  std::string toString();



};