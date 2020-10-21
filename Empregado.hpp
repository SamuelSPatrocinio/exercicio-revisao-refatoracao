#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <string>

class Empregado {
	
  private:
    double salarioHora; 
    std::string nome;

  public:
    double pagamentoMes(double);
    double getSalarioHora();
    void setSalarioHora(double);
    std::string getNome();
    void setNome(std::string);
	
};
#endif
