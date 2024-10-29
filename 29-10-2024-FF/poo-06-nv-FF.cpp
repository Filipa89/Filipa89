#include <iostream>
#include <string>
using namespace std;
#include "./timestamp_FF.h"

// Definição da classe Pessoa
class Pessoa {

// Atributos privados
private:
    string nome;
    int idade;
    float classificacao;
    //Atributos privados são frequentemente usados para garantir que o estado interno de um objeto seja protegido e que apenas a classe tenha acesso direto a esses atributos.

// Atributos públicos
public:
    void setDados(string nome, int idade, float classificacao) {
        this->nome = nome;
        this->idade = idade;
        this->classificacao = classificacao;
    }
    //Os métodos públicos são usados para definir a interface da classe, permitindo que os objetos da classe sejam manipulados de forma controlada.

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