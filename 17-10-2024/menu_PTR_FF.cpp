#include <iostream>
#include <fstream>
#include <string>

void mostrarTexto(const std::string& caminho, int opcao) {
    std::ifstream ficheiro(caminho);
    if (ficheiro.is_open()) {
        std::string linha;
        int linhaAtual = 0;
        int inicio = (opcao - 1) * 6; // Cada seção tem 6 linhas
        int fim = inicio + 6;
        while (getline(ficheiro, linha)) {
            if (linhaAtual >= inicio && linhaAtual < fim) {
                std::cout << linha << std::endl;
            }
            linhaAtual++;
        }
        ficheiro.close();
    } else {
        std::cerr << "Não foi possível abrir o ficheiro." << std::endl;
    }
}

void exemploPonteiroSimples() {
    int var = 10;
    int* ptr = &var;
    std::cout << "Exemplo de Ponteiro Simples:" << std::endl;
    std::cout << "int var = 10;" << std::endl;
    std::cout << "int* ptr = &var;" << std::endl;
    std::cout << "Valor de var: " << var << std::endl;
    std::cout << "Endereço de var: " << &var << std::endl;
    std::cout << "Valor de ptr: " << ptr << std::endl;
    std::cout << "Valor apontado por ptr: " << *ptr << std::endl;
}

void exemploPonteiroArray() {
    int arr[3] = {10, 20, 30};
    int* ptr = arr;
    std::cout << "Exemplo de Ponteiro com Array:" << std::endl;
    std::cout << "int arr[3] = {10, 20, 30};" << std::endl;
    std::cout << "int* ptr = arr;" << std::endl;
    for (int i = 0; i < 3; i++) {
        std::cout << "arr[" << i << "] = " << arr[i] << ", *(ptr + " << i << ") = " << *(ptr + i) << std::endl;
    }
}

void exemploPonteiroParaPonteiro() {
    int var = 10;
    int* ptr = &var;
    int** ptr2 = &ptr;
    std::cout << "Exemplo de Ponteiro para Ponteiro:" << std::endl;
    std::cout << "int var = 10;" << std::endl;
    std::cout << "int* ptr = &var;" << std::endl;
    std::cout << "int** ptr2 = &ptr;" << std::endl;
    std::cout << "Valor de var: " << var << std::endl;
    std::cout << "Endereço de var: " << &var << std::endl;
    std::cout << "Valor de ptr: " << ptr << std::endl;
    std::cout << "Valor apontado por ptr: " << *ptr << std::endl;
    std::cout << "Valor de ptr2: " << ptr2 << std::endl;
    std::cout << "Valor apontado por ptr2: " << *ptr2 << std::endl;
    std::cout << "Valor apontado pelo ponteiro apontado por ptr2: " << **ptr2 << std::endl;
}

int main() {
    int opcao;
    std::string caminho = "ponteiros.txt";

    do {
        std::cout << "Menu de Opções:" << std::endl;
        std::cout << "1. Exemplo de Ponteiro Simples" << std::endl;
        std::cout << "2. Exemplo de Ponteiro com Array" << std::endl;
        std::cout << "3. Exemplo de Ponteiro para Ponteiro" << std::endl;
        std::cout << "4. Sair" << std::endl;
        std::cout << "Escolha uma opção: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                mostrarTexto(caminho, opcao);
                exemploPonteiroSimples();
                break;
            case 2:
                mostrarTexto(caminho, opcao);
                exemploPonteiroArray();
                break;
            case 3:
                mostrarTexto(caminho, opcao);
                exemploPonteiroParaPonteiro();
                break;
            case 4:
                std::cout << "Saindo..." << std::endl;
                break;
            default:
                std::cout << "Opção inválida. Tente novamente." << std::endl;
        }
    } while (opcao != 4);

    return 0;
}