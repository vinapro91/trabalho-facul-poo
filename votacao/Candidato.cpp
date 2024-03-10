#include "Candidato.h"
#include <iostream>

Candidato::Candidato() {}

Candidato::Candidato(std::string nome, int codigo, std::string partido, std::string cargo) {
	this->nome = nome;
	this->codigo = codigo;
	this->partido = partido;
	this->cargo = cargo;
}

std::string Candidato::getNome() const {
	return nome;
}

void Candidato::setNome(std::string nome) {
	this->nome = nome;
}

int Candidato::getCodigo() const {
	return codigo;
}

void Candidato::setCodigo(int codigo) {
	this->codigo = codigo;
}

std::string Candidato::getPartido() const {
	return partido;
}

void Candidato::setPartido(std::string partido) {
	this->partido = partido;
}

std::string Candidato::getCargo() const {
	return cargo;
}

void Candidato::setCargo(std::string cargo) {
	this->cargo = cargo;
}

void Candidato::print() const {
	std::cout << "Nome: " << nome << std::endl;
	std::cout << "Código: " << codigo << std::endl;
	std::cout << "Partido: " << partido << std::endl;
	std::cout << "Cargo: " << cargo << std::endl;
}
