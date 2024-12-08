#ifndef MAIN_H

#define MAIN_H

#include "fila.h"

void exibirMenu();

void inserirItem(fila& f);

void removerItem(fila& f);

void imprimirFila(const fila& f);

void verificarFilaVazia(const fila& f);

void verificarFilaCheia(const fila& f);

void verificarEspacoFila(const fila& f);

#endif // MAIN_H
