#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
using namespace std;

//Criando a classe Cliente
class Cliente {
    private: 
    string nome;
    string cpf;

    public:
    Cliente(string nome, string cpf);

//Funções para retornar o nome e cpf 
string getNome() const;
string getCpf() const;

};

#endif
