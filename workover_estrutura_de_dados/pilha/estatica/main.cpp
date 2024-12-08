#include <iostream>

#include "pilha.h"

#include "main.h"

using namespace std;

void exibirMenu() {
	cout << "\nMenu Pilha\n\n";
	cout << "0 - Encerrar teste.\n";
	cout << "1 - Inserir item na pilha.\n";
	cout << "2 - Remover item da pilha.\n";
	cout << "3 - Imprimir a pilha.\n";
	cout << "4 - Verificar se a pilha está vazia.\n";
	cout << "5 - verificar se a pilha está cheia.\n";
	cout << "6 - Verificar o espaço ocupado e disponível na pilha.\n";
	cout << "Digite a sua opção: ";
}

void inserirItem(pilha& p) {
	TipoItem item;
	cout << "Digite o item a ser inserido: ";
	cin >> item;
	p.inserir(item);
	cout << "Item inserido na pilha: " << item << endl;
}

void removerItem(pilha& p) {
	if (p.estaVazia()) {
		cout << "A pilha está vazia. Não é possível remover itens.\n";
	} else {
		TipoItem item = p.remover();
		cout << "Item removido da pilha: " << item << endl; 
	}
}

void imprimirPilha(const pilha& p) {
	if (p.estaVazia()) {
		cout << "A pilha está vazia. Não é possível imprimir a pilha.\n";
	} else {
		p.imprimir();
	}
}

void verificarPilhaVazia(const pilha& p) {
	if (p.estaVazia()) {
		cout << "A pilha está vazia.\n";
	} else {
		cout << "A pilha não está vazia.\n";
	}
}

void verificarPilhaCheia(const pilha& p) {
	if (p.estaCheia()) {
		cout << "A pilha está cheia.\n";
	} else {
		cout << "A pilha não está cheia.\n";
	}
}

void verificarEspacoPilha(const pilha& p) {
	cout << "Espaço ocupado na pilha: " << p.espacoOcupado() << endl;
	cout << "Espaço disponível na pilha: " << p.espacoDisponivel() << endl;
}
