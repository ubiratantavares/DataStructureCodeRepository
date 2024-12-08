// g++ app.cpp main.cpp fila.cpp -o app

#include <iostream>
#include "fila.h"
#include "main.h"

using namespace std;

int main() {
    fila f;
    int opcao;
    do {
        exibirMenu();
        cin >> opcao;
        switch (opcao) {
            case 1:
                inserirItem(f);
                break;
            case 2:
                removerItem(f);
                break;
            case 3:
                imprimirFila(f);
                break;
            case 4:
                verificarFilaVazia(f);
                break;
            case 5:
                verificarFilaCheia(f);
                break;
            case 6:
                verificarEspacoFila(f);
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
