#include "Voto.h"


Voto::Voto(std::string cargo, int codigoCandidato) {
	this->cargo = cargo;
	this->codigoCandidato = codigoCandidato;
}

std::string Voto::getCargo() const {
	return cargo;
}

void Voto::setCargo(std::string cargo) {
	this->cargo = cargo;
}

int Voto::getCodigoCandidato() const {
	return codigoCandidato;
}

void Voto::setCodigoCandidato(int codigoCandidato) {
	this->codigoCandidato = codigoCandidato;
}
