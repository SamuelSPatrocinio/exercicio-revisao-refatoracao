#include "Empregado.hpp"
#include <string>
#define MIN_HRS_DIA 8


double Empregado::pagamentoMes(double horasTrabalhadas) { 
	//Calculo de hora extra (+50% se horasTrabalhadas > MIN_HRS_DIA)
    if (horasTrabalhadas > MIN_HRS_DIA) {
    	double horasExcedidas = horasTrabalhadas - MIN_HRS_DIA;
    	horasTrabalhadas += horasExcedidas / 2;
    }
	return horasTrabalhadas * salarioHora;
}
    
double Empregado::getSalarioHora(){
	return salarioHora;
}

void Empregado::setSalarioHora(double valor){
	salarioHora=valor;
}

std::string Empregado::getNome(){
	return nome;
}

void Empregado::setNome(std::string _nome){
	nome=_nome;
}