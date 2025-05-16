#include "cliente.h"

//Construtor da classe cliente
Cliente::Cliente(string nome, string cpf){
    this->nome = nome;
    this->cpf = cpf;
}
//Retorna o nome do cliente
string Cliente::getNome() const {
    return nome;
}
//Retorna o cpf do cliente
string Cliente::getCpf() const {
    return cpf;
}
