// pilha = stack

#ifndef PILHA_H

#define PILHA_H

typedef int TipoItem;

const int max_itens = 10;

class pilha {

	private:
		int tam; // tamanho da pilha
		TipoItem* estrutura;
		
	public:
		pilha(); // construtor
		~pilha(); // destrutor
		bool estaCheia() const; // verifica se a pilha está cheia
		bool estaVazia() const; // verifica se a pilha está vazia
		void inserir(TipoItem item); // insere elemento na pilha
		TipoItem remover(); // remove elemento da pilha
		void imprimir() const; // imprime a pilha
		int espacoOcupado() const; // verifica o espaco ocupado na pilha
		int espacoDisponivel() const; // verifica o espaco disponivel na pilha
};
#endif // PILHA_H
