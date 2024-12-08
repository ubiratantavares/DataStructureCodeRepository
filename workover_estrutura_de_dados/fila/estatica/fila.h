// fila = queue
#ifndef FILA_H

#define FILA_H

typedef int TipoItem;

const int max_itens = 10;

class fila {

	private:
		int primeiro, ultimo;
		TipoItem* estrutura;
		
	public:
		fila(); // construtor
		~fila(); // destrutor
		bool estaCheia() const; // verifica se a fila está cheia
		bool estaVazia() const; // verifica se a fila está vazia
		void inserir(TipoItem item); // insere elemento na fila
		TipoItem remover(); // remove elemento da fila
		void imprimir() const; // imprime a fila
		int espacoOcupado() const; // verifica o espaco ocupado na fila
		int espacoDisponivel() const; // verifica o espaco disponivel na fila
};
#endif // FILA_H
