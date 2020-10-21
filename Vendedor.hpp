#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Empregado.hpp"

class Vendedor : public Empregado {

  private:
    double quotaMensalVendas;  

  public:
    double getQuotaMensalVendas();
    void setQuotaMensalVendas(double);
    double quotaTotalAnual();
};
#endif
