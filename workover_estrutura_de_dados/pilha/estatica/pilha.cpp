#include <iostream>

#include "pilha.h"

using namespace std;

// construtor da pilha
pilha::pilha() {
	tam = 0;
	estrutura = new TipoItem[max_itens];	
} 

// destrutora d classe pilha
pilha::~pilha() {
	delete [] estrutura;
}

// verifica se a pilha está cheia
bool pilha::estaCheia() const {
	return (tam == max_itens);
}

// verifica se a pilha está vazia
bool pilha::estaVazia() const {
	return (tam == 0);
}

// insere elemento na pilha
void pilha::inserir(TipoItem item) {
	if (estaCheia()) {
		cout << "A pilha está cheia!\n";
		cout << "Não é possível inserir o item na pilha.\n";
	} else {
		estrutura[tam] = item;
		tam++;
	}	
}

// remove elemento da pilha
TipoItem pilha::remover() {
	if (estaVazia()) {
		cout << "A pilha está vazia!\n";
		cout << "Não tem item para ser removido.\n";
		return -1;
	} else {
		tam--;
		return estrutura[tam];
	}
} 

// imprime a pilha
void pilha::imprimir() const {
	cout << "Pilha: [ ";
	for (int i = 0; i < tam; i++) {
		cout << estrutura[i] << " ";
	}	
	cout << "]\n";	
}

// tamanho preenchido da pilha
int pilha::espacoOcupado() const {
	return tam;	
}

// tamanho disponivel da pilha
int pilha::espacoDisponivel() const {
	return max_itens - tam;
}
 
