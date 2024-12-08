#ifndef MAIN_H

#define MAIN_H

#include "pilha.h"

void exibirMenu();

void inserirItem(pilha& p);

void removerItem(pilha& p);

void imprimirPilha(const pilha& p);

void verificarPilhaVazia(const pilha& p);

void verificarPilhaCheia(const pilha& p);

void verificarEspacoPilha(const pilha& p);

#endif //MAIN_H
