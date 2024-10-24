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
    Utilizador novo_obj;
    novo_obj.get();
    novo_obj.set("Filipa2","novaPass");
    novo_obj.get();
    mudaLinha();
    meuCarimbo();
    return 0;
}