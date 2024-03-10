#include "functions.h"
#include "Candidato.h"
#include <iostream>
#include <list>
#include <map>
#include "Voto.h"
using namespace std;

list<Candidato> candidatos;
list<Voto> votos;

void cadastrarCandidato() {
	string nome, partido, cargo;
	int codigo;

	cout << "Digite o nome do candidato: ";
	cin >> nome;
	cout << "Digite o código do candidato: ";
	cin >> codigo;
	cout << "Digite o partido do candidato: ";
	cin >> partido;
	cout << "Digite o cargo do candidato: ";
	cin >> cargo;

	Candidato candidato(nome, codigo, partido, cargo);
	candidatos.push_back(candidato);

	cout << "Candidato cadastrado com sucesso!" << endl;
}

void listarCandidatos() {
	if (candidatos.empty()) {
		cout << "Nenhum candidato cadastrado!" << endl;
		return;
	}

	for (Candidato candidato : candidatos) {
		candidato.print();
		cout << endl;
	}
}

void cadastrarVoto() {
	string cargo;
	int codigoCandidato;

	cout << "Digite o cargo: ";
	cin >> cargo;
	cout << "Digite o código do candidato: ";
	cin >> codigoCandidato;

	Voto voto(cargo, codigoCandidato);
	votos.push_back(voto);

	cout << "Voto cadastrado com sucesso!" << endl;
}

void apurarEleicao() {
	map<int, int> contagemVotos;

	for (Voto voto : votos) {
		contagemVotos[voto.getCodigoCandidato()]++;
	}

	for (auto it : contagemVotos) {
		cout << "Candidato " << it.first << ": " << it.second << " votos" << endl;
	}

	int codigoCandidatoVencedor = -1;
	int maiorNumeroVotos = 0;

	for (auto it : contagemVotos) {
		if (it.second > maiorNumeroVotos) {
			maiorNumeroVotos = it.second;
			codigoCandidatoVencedor = it.first;
		}
	}

	if (codigoCandidatoVencedor != -1) {
		cout << "O candidato vencedor é " << codigoCandidatoVencedor << " com " << maiorNumeroVotos << " votos!" << endl;
	}
	else {
		cout << "Erro: Nenhum candidato com votos." << endl;
	}
}