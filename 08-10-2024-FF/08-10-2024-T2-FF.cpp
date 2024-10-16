//Filipa Ferreira
//08-10-2024 - Tarefa 2 


#include <iostream>
#include <fstream>

using namespace std; // Sem isto teriamos que utilizar std:: Ex.: std::cout << "Olá Mundo!" << std::endl;

int main() {
    // Exibir "Olá Mundo!" em bom português
    cout << "Olá Mundo!" << endl;

    // Calcular o tamanho em bytes dos tipos de dados
    int tamanhoChar = sizeof(char);
    int tamanhoShort = sizeof(short);
    int tamanhoInt = sizeof(int);
    int tamanhoLong = sizeof(long);
    int tamanhoLongLong = sizeof(long long);
    int tamanhoFloat = sizeof(float);
    int tamanhoDouble = sizeof(double);
    int tamanhoLongDouble = sizeof(long double);

    // Exibir o tamanho dos tipos de dados
    cout << "Tamanho de char: " << tamanhoChar << " byte(s)" << endl;
    cout << "Tamanho de short: " << tamanhoShort << " byte(s)" << endl;
    cout << "Tamanho de int: " << tamanhoInt << " byte(s)" << endl;
    cout << "Tamanho de long: " << tamanhoLong << " byte(s)" << endl;
    cout << "Tamanho de long long: " << tamanhoLongLong << " byte(s)" << endl;
    cout << "Tamanho de float: " << tamanhoFloat << " byte(s)" << endl;
    cout << "Tamanho de double: " << tamanhoDouble << " byte(s)" << endl;
    cout << "Tamanho de long double: " << tamanhoLongDouble << " byte(s)" << endl;

    // Guardar os resultados num ficheiro de texto
    ofstream ficheiro("tamanho_tipos_dados.txt");
    if (ficheiro.is_open()) {
        ficheiro << "Tamanho de char: " << tamanhoChar << " byte(s)" << endl;
        ficheiro << "Tamanho de short: " << tamanhoShort << " byte(s)" << endl;
        ficheiro << "Tamanho de int: " << tamanhoInt << " byte(s)" << endl;
        ficheiro << "Tamanho de long: " << tamanhoLong << " byte(s)" << endl;
        ficheiro << "Tamanho de long long: " << tamanhoLongLong << " byte(s)" << endl;
        ficheiro << "Tamanho de float: " << tamanhoFloat << " byte(s)" << endl;
        ficheiro << "Tamanho de double: " << tamanhoDouble << " byte(s)" << endl;
        ficheiro << "Tamanho de long double: " << tamanhoLongDouble << " byte(s)" << endl;
        ficheiro.close();
        cout << "Resultados guardados no ficheiro 'tamanho_tipos_dados.txt'." << endl;
    } else {
        cout << "Erro ao abrir o ficheiro." << endl;
    }

    return 0;
}