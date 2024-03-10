#ifndef VOTO_H
#define VOTO_H

#include <string>

class Voto {
private:
	std::string cargo;
	int codigoCandidato;

public:
	Voto();
	Voto(std::string cargo, int codigoCandidato);

	std::string getCargo() const;
	void setCargo(std::string cargo);

	int getCodigoCandidato() const;
	void setCodigoCandidato(int codigoCandidato);
};

#endif
