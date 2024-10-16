//Filipa Ferreira
//08-10-2024 - Tarefa 3

#include <iostream>
#include <fstream>

using namespace std;

// PRE explicação:
// int argc: Este parâmetro representa o número de argumentos passados na linha de comando, 
// incluindo o nome do programa. Por exemplo, em ./programa arg1 arg2, argc será 3 (o nome do programa conta como o primeiro argumento).
// char* argv[]: Este parâmetro é um array de ponteiros para caracteres. 
// Cada elemento do array argv é um ponteiro para uma string (um array de caracteres).
// O primeiro elemento (argv[0]) é o nome do programa, e os elementos subsequentes (argv[1], argv[2], etc.) 
// são os argumentos passados na linha de comando.

int main(int argc, char* argv[]) {
    // Verificar se há argumentos suficientes
    if (argc < 1) {
        cout << "Por favor, forneça argumentos ao executar o programa." << endl;
        return 1;
    }

    // Exibir os argumentos no terminal
    cout << "Nr. de argumentos fornecidos: " << argc << endl;
    for (int i = 0; i < argc; ++i) {
        cout << "Argumento " << i << ": " << argv[i] << endl;
    }

    // Guardar os argumentos num ficheiro de texto
    ofstream ficheiro("argumentos.txt");
    if (ficheiro.is_open()) {
        ficheiro << "Nr. de argumentos fornecidos: " << argc  << endl;
        for (int i = 0; i < argc; ++i) {
            ficheiro << "Argumento " << i << ": " << argv[i] << endl;
        }
        ficheiro.close();
        cout << "Argumentos guardados no ficheiro 'argumentos.txt'." << endl;
    } else {
        cout << "Erro ao abrir o ficheiro." << endl;
    }

    return 0;
}