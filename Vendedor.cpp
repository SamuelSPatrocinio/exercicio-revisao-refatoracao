#include "Vendedor.hpp"
#include "Empregado.hpp"
#define NUMERO_MESES_ANO 12

double Vendedor::getQuotaMensalVendas(){
	return quotaMensalVendas;
}

void Vendedor::setQuotaMensalVendas(double valor){
	quotaMensalVendas=valor;
}

double Vendedor::quotaTotalAnual() {
	  return quotaMensalVendas * NUMERO_MESES_ANO;
}