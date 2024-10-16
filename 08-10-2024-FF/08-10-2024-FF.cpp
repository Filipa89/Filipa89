#include <iostream> // Inclui a biblioteca padrão de entrada e saída, necessária para usar cin e cout.
#include <fstream> // Inclui a biblioteca para manipulação de arquivos, necessária para usar ofstream.

using namespace std; // Permite usar elementos do namespace std sem precisar prefixá-los com std::.

//Declara uma função que verifica se os valores de horas, minutos e segundos são válidos.
bool validarHora(int hh, int mm, int ss) {
    if (hh < 1 || hh > 23) return false; 
    if (mm < 0 || mm > 60) return false; 
    if (ss < 0 || ss > 60) return false; 
    return true; // Se todos os valores forem válidos, retorna true.
}

// Declara uma função que calcula o total de segundos desde a meia-noite
int calcularSegundos(int hh, int mm, int ss) { 
    return hh * 3600 + mm * 60 + ss;
}


int main() {
    int hh, mm, ss;
    cout << "Introduza as horas: ";
    cin >> hh;
    cout << "Introduza os minutos: ";
    cin >> mm;
    cout << "Introduza os segundos: ";
    cin >> ss;

// Verifica se os valores introduzidos são inválidos usando a função validarHora
    if (!validarHora(hh, mm, ss)) {
        cout << "Valores inválidos. Por favor, tente novamente." << endl;
        return 1; // Termina o programa com um código de erro.
    }

// Se os valores forem inválidos, exibe uma mensagem de erro.
    int totalSegundos = calcularSegundos(hh, mm, ss); // Calcula o total de segundos desde a meia-noite usando a função calcularSegundos
    cout << "Total de segundos desde o início do dia: " << totalSegundos << endl; 

//  ofstream ficheiro - Cria e abre um arquivo de texto chamado total_segundos.txt para escrita.
    ofstream ficheiro("total_segundos.txt");
    if (ficheiro.is_open()) { // Verifica se o arquivo foi aberto com sucesso.
        ficheiro << totalSegundos; // Escreve o total de segundos no arquivo.
        ficheiro.close(); // Fecha o arquivo.
        cout << "Valor guardado no ficheiro 'total_segundos.txt'." << endl;
    } else { // Se o arquivo não foi aberto com sucesso.
        cout << "Erro ao abrir o ficheiro." << endl;
    }

    return 0;
}