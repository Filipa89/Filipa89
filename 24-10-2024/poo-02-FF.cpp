#include <iostream>
#include <string>
using namespace std;

extern "C" {
    #include "./timestamp_FF.h"
}

class Estudante{
public:
    string nome;
    int idade;

    void mostrar(){
        cout << nome << " " << idade << endl;
    }
};

int main() {
    Estudante novoEstudante;
    cin >> novoEstudante.nome >> novoEstudante.idade;
    novoEstudante.mostrar();

    meuCarimbo();
    return 0;

}