#include <iostream>

#include "fila.h"

using namespace std;

fila::fila() {
	primeiro = 0;
	ultimo = 0;
	estrutura = new TipoItem[max_itens];
}

fila::~fila() {
	delete [] estrutura;
}

bool fila::estaVazia() const {
	return (primeiro == ultimo);
}

bool fila::estaCheia() const {
	return (ultimo - primeiro == max_itens);
}

void fila::inserir(TipoItem item) {
	if (estaCheia()) {
		cout << "A fila esta cheia\n";
		cout << "O item não pode ser inserido na fila\n";
	} else {
		estrutura[ultimo % max_itens] = item;
		ultimo++;
	}
}

TipoItem fila::remover() {
	if (estaVazia()) {
		cout << "A fila esta vazia\n";
		cout << "Nenhum elemento foi removido da fila\n";
		return -1;
	} else {
		primeiro++;
		return estrutura[(primeiro - 1) % max_itens];
	}
}

void fila::imprimir() const {
	cout << "Fila: [ ";
	for (int i = primeiro; i < ultimo; i++) {
		cout << estrutura[i % max_itens] << " ";
	}	
	cout << "]\n";	
}

int fila::espacoOcupado() const {
	return (ultimo - primeiro);	
}

int fila::espacoDisponivel() const {
	return (max_itens - (ultimo - primeiro));
}
