#include <iostream>
using namespace std;

extern "C" {
    #include "./timestamp_FF.h"
}

class Utilizador{
    private:
    string nome = "Filipa";
    string palavraPasse = "abc123def456";

    public:
    void set(string nome, string palavraPasse){
        this -> nome = nome;
        this -> palavraPasse = palavraPasse;
    }
    void get(){
        cout << nome << " " << palavraPasse << endl;
    }
};

int main() {
    string nome;
    string palavraPasse;
    Utilizador novo_obj;
        cout << "Valores iniciais: " << endl;
    novo_obj.get();
        cout << "Novo nome: ";
        cin >> nome;
        cout << "Nova password: ";
        cin >> palavraPasse;
    novo_obj.set(nome, palavraPasse);
        cout << "Novos valores :";
    novo_obj.get();
    mudaLinha();
    meuCarimbo();
    return 0;
}