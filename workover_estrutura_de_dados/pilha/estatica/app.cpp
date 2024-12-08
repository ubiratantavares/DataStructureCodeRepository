// g++ app.cpp main.cpp pilha.cpp -o app

#include <iostream>

#include "pilha.h"

#include "main.h"

using namespace std;

int main() {
	pilha p;

	int opcao;

	do {
		exibirMenu();

		cin >> opcao;

		switch(opcao) {
			case 1:
				inserirItem(p);
				break;
			case 2:
				removerItem(p);
				break;
			case 3:
				imprimirPilha(p);
				break;
			case 4:
				verificarPilhaVazia(p);
				break;
			case 5:
				verificarPilhaCheia(p);
				break;
			case 6:
				verificarEspacoPilha(p);
				break;
			case 0:
				cout << "App finalizado.\n";
				break;
			default:
				cout << "Opção inválida. Tente novamente.\n";
		}
	} while (opcao != 0);
	return 0;
}
