//COM ALTERAÇÃO de código, de acordo com s boas práticas de programação (em particular DRY) e aplicando os conhecimentos adquiridos sobre heranças em POO 

#include <iostream>
#include "./timestamp_FF.h"

using namespace std;

// Superclasse Retangulo
class Retangulo {
    int altura;
    int largura;
public:
    Retangulo(int alt, int larg);
    void desenha();
    void desenha(char c);
};

// Construtor da classe Retangulo
Retangulo::Retangulo(int alt, int larg) : altura(alt), largura(larg) {}

// Método para desenhar o retângulo com um caractere personalizado
void Retangulo::desenha(char c) {
    for (int i = 0; i < altura; ++i) {
        for (int j = 0; j < largura; ++j) {
            cout << c;
        }
        cout << '\n';
    }
}
// Método para desenhar o retângulo com '*'
void Retangulo::desenha() {
    desenha('*');
}

int main() {
    meuCarimbo();
    mudaLinha();
    Retangulo ret(8, 12);
    ret.desenha();
    cout << "\n\n";
    ret.desenha('A');
    return 0;
}