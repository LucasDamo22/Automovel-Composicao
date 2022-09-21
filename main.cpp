#include "Automovel.h"



int main() {
  Pneu p1 = Pneu(40, "Pirelli");
  Pneu p2 = Pneu(40, "Pirelli");
  Pneu p3 = Pneu(40, "Pirelli");
  Pneu p4 = Pneu(40, "Pirelli");
  Motor rbpt = Motor(400, 50, 35, 10);
  Automovel rb16 = Automovel("RedBull", 10, &rbpt, &p1, &p2, &p4, &p4);

 std::cout<<rbpt.getHp()<<std::endl;

  std::cout<< "Funciona!"<<std::endl;
  std::cout<<rb16.toString()<<std::endl;

  rb16.abastece(7);
  std::cout<<"----------"<<std::endl;
  std::cout<<rb16.toString()<<std::endl;


}