#include <iostream>
using namespace std;

#include "./timestamp_FF.h"



class Carro{
public:
    string nomeCarro;

    // Construtor com um argumento
    Carro(string nomeCarro){
        this -> nomeCarro = nomeCarro;
    }

    //Construtor de cóipia
    Carro(Carro &outroCarro){
        nomeCarro = outroCarro.nomeCarro;
    }
};

int main() {
    meuCarimbo();

    Carro carroOriginal("Cupra, porque o emponderamento sente-se no motor");
    cout << "Carro Original da Filipa: " << carroOriginal.nomeCarro << endl;

    meuCarimbo();

    Carro carroCopia1("Cupra, porque o emponderamento sente-se no motor");
    cout << "Carro Cópia da Filipa: " << carroCopia1.nomeCarro << endl;
    
    meuCarimbo();

    Carro carroCopia2("Cupra, porque o emponderamento sente-se no motor");
    cout << "E para quem não entendeu: " << carroCopia2.nomeCarro << endl;

    meuCarimbo();

    return 0;
}