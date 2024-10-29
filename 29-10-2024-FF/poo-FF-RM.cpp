#include <iostream>
#include <string>
#include <cstdlib> // Para usar 'atoi' e 'atof'
#include <ctime> // Para usar 'time' e 'localtime'

using namespace std;

void mudarLinha() {
    cout << endl; // Função para adicionar uma linha em branco
}

void meuCarimbo() {
    time_t timestamp = time(NULL);
    struct tm datetime = *localtime(&timestamp);
    cout << "Ricardo Moreira, Filipa Ferreira e Ana Lino - " << asctime(&datetime); // Imprime assinatura com o carimbo 
}

class Pessoa { 
private:
    string nome;
    int idade;
    float classificacao;

public:
    // Construtor para inicializar os atributos
    Pessoa(string n, int i, float c) : nome(n), idade(i), classificacao(c) {}

    // Método para verificar se a pessoa pode frequentar o curso
    void podeFrequentar() const {
        if (classificacao > 12 && idade >= 20) {
            cout << nome << " pode inscrever-se." << endl;
        } else {
            cout << nome << " não se pode inscrever." << endl;
        }
    }
};

int main(int argc, char* argv[]) {
    if (argc != 4) { // Verificar se foram passados 3 argumentos: nome, idade e classificação
        cerr << "Uso correto: /poo-07 <nome> <idade> <classificacao>" << endl;
        return 1;
    }

    // Converter os argumentos fornecidos (string -> int/float)
    string nome = argv[1];
    int idade = atoi(argv[2]);  //  atoi converte string para integer
    float classificacao = atof(argv[3]); // atof converte string para float

    // Criar instância da classe Pessoa com os argumentos passados
    Pessoa pessoa(nome, idade, classificacao);
    pessoa.podeFrequentar();

    // Verificar se a pessoa pode ou não inscrever-se
    pessoa.podeFrequentar();

    mudarLinha();
    meuCarimbo();

    return 0;
}
