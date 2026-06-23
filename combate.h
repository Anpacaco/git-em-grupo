#pragma once
#include <iostream>
#include <string>
using namespace std;

void exibir(string nome, int vida, int ataque) {
    cout << "[ " << nome << " ] Vida: " << vida
         << " | Ataque: " << ataque << endl;
}

//escreve a função entre essas duas

bool estaVivo(int vida) {
    return vida > 0;
}
