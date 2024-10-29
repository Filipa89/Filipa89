#include <iostream>
#include <string>
using namespace std;

extern "C" {
    #include "./timestamp_FF.h"
}

class Pessoa {
private:
    string nome;
    int idade;
    float classificacao;

public:
    // Método para definir os atributos
    void setDados(string nome, int idade, float classificacao) {
        this->nome = nome;
        this->idade = idade;
        this->classificacao = classificacao;
    }

    // Método para verificar se pode frequentar o curso
    void podeFrequentar() {
        if (classificacao > 12 && idade >= 20) {
            cout << "Pode inscrever-se" << endl;
        } else {
            cout << "Não se pode inscrever" << endl;
        }
    }
};

int main() {
    Pessoa pessoa;
    string nome;
    int idade;
    float classificacao;

    // Solicitar dados do usuário
    cout << "Digite o nome: ";
    getline(cin, nome);
    cout << "Digite a idade: ";
    cin >> idade;
    cout << "Digite a classificação: ";
    cin >> classificacao;

    // Definir os dados da pessoa
    pessoa.setDados(nome, idade, classificacao);

    // Verificar se pode frequentar o curso
    pessoa.podeFrequentar();

    meuCarimbo();

    return 0;
}