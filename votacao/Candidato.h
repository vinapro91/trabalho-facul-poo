#ifndef CANDIDATO_H
#define CANDIDATO_H

#include <string>

class Candidato {
private:
	std::string nome;
	int codigo;
	std::string partido;
	std::string cargo;

public:
	Candidato();
	Candidato(std::string nome, int codigo, std::string partido, std::string cargo);

	std::string getNome() const;
	void setNome(std::string nome);

	int getCodigo() const;
	void setCodigo(int codigo);

	std::string getPartido() const;
	void setPartido(std::string partido);

	std::string getCargo() const;
	void setCargo(std::string cargo);

	void print() const;
};

#endif
