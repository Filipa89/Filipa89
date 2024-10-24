#include <iostream>
using namespace std;

extern "C" {
    #include "./timestamp_FF.h"
}

//definição da classe
class nomeClasse {
    //declaração de membros privados desta classe
    private:
        int valorPrivado;

    //declaração de membros públicos desta classe
    public:
        int valorPublico;
        void funcaoPublica() {
            cout << "esta é a minha primeira função" << endl;
    }
}; // Fim da classe 'nomeClasse', termina com ';'

// Programa principal
int main() { //Inicio do programa principal
    nomeClasse objetoNovo; //Cria um objeto da classe 'nomeClasse'
    
    objetoNovo.valorPublico = 10; //Atribui o valor 10 à variável 'valorPublico'

    objetoNovo.funcaoPublica(); //Também podemos usar as funções públicas definidas dentro da classe
    
    meuCarimbo();
    return 0;
}





