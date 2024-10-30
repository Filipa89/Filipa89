//SEM ALTERAÇÃO de código, apenas corrigida a identação

#include <iostream>

using namespace std;

class Retangulo {
    int altura;
    int largura;
public:
    Retangulo(int alt, int larg);
    void desenha();
    void desenha(char c);
};

Retangulo::Retangulo(int alt, int larg) {
    altura = alt;
    largura = larg;
};

void Retangulo::desenha() {
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            cout << '*';
        }
        cout << "\n";
    }
};

void Retangulo::desenha(char c) {
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            cout << c;
        }
        cout << "\n";
    }
};

int main() {
    Retangulo ret(8, 12);
    ret.desenha();
    cout << "\n\n";
    ret.desenha('A');
    return 0;
};