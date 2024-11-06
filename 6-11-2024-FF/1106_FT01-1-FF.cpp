#include <iostream>
#include <fstream>
#include "timestamp_FF.h"

using namespace std;

int main() {
    meuCarimbo();
    ifstream inputFile("C:\\Users\\filip\\Documents\\GitHub\\MY_CPP_Progs\\6-11-2024-FF\\Inteiros.txt");
    ofstream outputFile("1106_01_FF.txt");

    if (!inputFile) {
        cerr << "Erro ao abrir o ficheiro de entrada." << endl;
        return 1;
    } else {
        cout << "Ficheiro de entrada aberto com sucesso." << endl;
    }

    if (!outputFile) {
        cerr << "Erro ao abrir o ficheiro de saída." << endl;
        return 1;
    } else {
        cout << "Ficheiro de saída aberto com sucesso." << endl;
    }

    int number;
    int sumPositives = 0;  // Inicialização
    int sumNegatives = 0;  // Inicialização

    while (inputFile >> number) {
        cout << "Número lido: " << number << endl;  // Mensagem de depuração
        if (number > 0) {
            sumPositives += number;
        } else if (number < 0) {
            sumNegatives += number;
        }
    }
    outputFile << "Soma dos números positivos: " << sumPositives << endl;
    outputFile << "Soma dos números negativos: " << sumNegatives << endl;

    inputFile.close();
    outputFile.close();

    cout << "Resultados guardados em '1106_01_FF.txt'." << endl;

    return 0;
}
