#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include "Empregado.hpp"


class Engenheiro : public Empregado {

  private: 
	int numProjetos;
  public:
  	void setNumProjetos(int);
  	int getNumProjetos();	
};
#endif