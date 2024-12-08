#include <iostream>

#include "fila.h"

#include "main.h"

using namespace std;

// Função para exibir o menu de opções
void exibirMenu() {
    cout << "\nMenu Fila\n";
    cout << "0 - Encerrar teste.\n";
    cout << "1 - Inserir item na fila.\n";
    cout << "2 - Remover item da fila.\n";
    cout << "3 - Imprimir a fila.\n";
    cout << "4 - Verificar se a fila está vazia.\n";
    cout << "5 - Verificar se a fila está cheia.\n";
    cout << "6 - Verificar o espaço ocupado e disponível na fila.\n";
    cout << "Digite sua opção: ";
}

// Função para inserir item na fila
void inserirItem(fila &f) {
    TipoItem item;
    cout << "Digite o item a ser inserido: ";
    cin >> item;
    f.inserir(item);
    cout << "Item inserido na fila: " << item << endl;
}

// Função para remover item da fila
void removerItem(fila &f) {
    if (f.estaVazia()) {
        cout << "A fila está vazia. Não é possível remover itens.\n";
    } else {
        TipoItem item = f.remover();
        cout << "Item removido da fila: " << item << endl;
    }
}

// Função para imprimir os itens da fila
void imprimirFila(const fila &f) {
    f.imprimir();
}

// Função para verificar se a fila está vazia
void verificarFilaVazia(const fila &f) {
    if (f.estaVazia()) {
        cout << "A fila está vazia.\n";
    } else {
        cout << "A fila não está vazia.\n";
    }
}

// Função para verificar se a fila está cheia
void verificarFilaCheia(const fila &f) {
    if (f.estaCheia()) {
        cout << "A fila está cheia.\n";
    } else {
        cout << "A fila não está cheia.\n";
    }
}

// Função para verificar o espaço ocupado e disponível na fila
void verificarEspacoFila(const fila &f) {
    cout << "Espaço ocupado na fila: " << f.espacoOcupado() << endl;
    cout << "Espaço disponível na fila: " << f.espacoDisponivel() << endl;
}
