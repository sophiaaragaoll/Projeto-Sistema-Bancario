#include "contabancaria.h"

//Construtor da classe ContaBancaria
ContaBancaria::ContaBancaria (int numero, Cliente titular,  double saldo)
    : numero(numero), titular(titular), saldo(saldo) {}

    //Função para depositar valor na conta
    void ContaBancaria::depositar(double valor) {
        saldo += valor;
    }
    //Função para sacar valor da conta com verificação de saldo
    void ContaBancaria::sacar (double valor) {
        if (valor <= saldo){
            saldo -= valor;
            cout << "Saque de R$" << valor << " realizado" << endl;
        } else {
            cout << "Saldo insuficiente" << endl;
        }
    }
    //Função para transferir valor para uma conta com verificação de saldo
    void ContaBancaria::transferir (double valor, ContaBancaria &destino) {
        if (valor <= saldo ){
            saldo -= valor;
            destino.depositar(valor);
            cout << "Transferido: R$ " << valor << " da conta " << numero << " para a conta " << destino.numero << endl;
        } else {
            cout << "Saldo insuficiente" << endl;
        }
    }
    //Função para transferir valor para duas contas com verificação de saldo
    void ContaBancaria::transferir (double valor, ContaBancaria &destino1, ContaBancaria &destino2) {
        if (valor <= saldo){
            double metade = valor/2.0;
            saldo -= valor;
            destino1.depositar(metade);
            destino2.depositar(metade);
            cout << "Transferido: R$ " << metade << " para cada conta (" << destino1.numero << " e " << destino2.numero << ") da conta " << numero << endl;
        } else {
            cout << "Saldo insuficiente" << endl;
        }
    }
    //Função para exibir saldo da conta
    void ContaBancaria::exibirSaldo() const {
        cout << "Saldo atual da conta " << numero << ": R$" << saldo << endl;
    }
    //Função para exibir informações da conta
    void ContaBancaria::exibirInformacoes() const {
        cout << "Titular: " << titular.getNome() << ", CPF: " << titular.getCpf() << endl;
        cout << "Número da Conta: " << numero << ", Saldo: R$" << saldo << endl;
    }
