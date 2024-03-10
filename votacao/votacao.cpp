// votacao.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "stdafx.h"
#include "Candidato.h"
#include "listas.h"
#include "functions.h"

int main() {
    int opcao;

    do {
        cout << "**Menu de Votação**" << endl;
        cout << "1. Cadastrar Candidato" << endl;
        cout << "2. Listar Candidatos" << endl;
        cout << "3. Cadastrar Voto" << endl;
        cout << "4. Apurar Eleição" << endl;
        cout << "5. Sair" << endl;
        cout << "Digite a opção desejada: ";
        cin >> opcao;

        switch (opcao) {
        case 1:
            cadastrarCandidato();
            break;
        case 2:
            listarCandidatos();
            break;
        case 3:
            cadastrarVoto();
            break;
        case 4:
            apurarEleicao();
            break;
        case 5:
            cout << "Saindo..." << endl;
            break;
        default:
            cout << "Opção inválida!" << endl;
        }
    } while (opcao != 5);

    return 0;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
