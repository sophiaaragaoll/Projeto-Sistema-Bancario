#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H
#include <string>
#include <iostream>
#include "cliente.h"
using namespace std;
//Criando a classe ContaBancaria
class ContaBancaria {

    private:
    int numero;
    double saldo;
    Cliente titular;

    public:
    ContaBancaria(int numero, Cliente titular, double saldo = 0.0 );
//Funções para realizar as tarefas requisitadas
    void depositar(double valor);

    void sacar (double valor);

    void transferir (double valor, ContaBancaria &destino);

    void transferir (double valor, ContaBancaria &destino1, ContaBancaria &destino2);
    void exibirSaldo() const;
    void exibirInformacoes() const;
};

#endif
