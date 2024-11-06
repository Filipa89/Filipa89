#include <iostream>
#include <fstream>
#include <vector>
#include <numeric> // Para std::accumulate
#include "timestamp_FF.h"

using namespace std;

int main() {
    meuCarimbo();
    ifstream inputFile("C:\\Users\\filip\\Documents\\GitHub\\MY_CPP_Progs\\6-11-2024-FF\\1106_FT01-2-FF.cpp");
    ofstream outputFileA("1106_02A_FF.txt");
    ofstream outputFileB("1106_02B_FF.txt");

    if (!inputFile) {
        cerr << "Erro ao abrir o ficheiro 'InteirosPositivos.txt'" << endl;
        return 1;
    } else {
        cout << "Ficheiro de entrada aberto com sucesso." << endl;
    }

    if (!outputFileA) {
        cerr << "Erro ao abrir o ficheiro de saída A." << endl;
        return 1;
    } else {
        cout << "Ficheiro de saída A aberto com sucesso." << endl;
    }
    if (!outputFileB) {
        cerr << "Erro ao abrir o ficheiro de saída B." << endl;
        return 1;
    } else {
        cout << "Ficheiro de saída B aberto com sucesso." << endl;
    }

    vector <int> numbers;
    int number;

    // Ler os números do ficheiro e armazená-los no vetor
    while (inputFile >> number) {
        cout << "Número lido: " << number << endl;
        numbers.push_back(number);
    }

    

    // Calcular o valor médio dos números
    double average = accumulate(numbers.begin(), numbers.end(), 0.0) / numbers.size();

    // Guardar os números nos ficheiros correspondentes
    for (int number : numbers) {
        if (number < average) {
            outputFileA << number << endl;
        } else {
            outputFileB << number << endl;
        }
    }
    inputFile.close();
    outputFileA.close();
    outputFileB.close();

    cout << "Processamento concluído. Verifique os ficheiros '1106_02A_FF.txt' e '1106_02B_FF.txt'." << endl;

    return 0;
}
