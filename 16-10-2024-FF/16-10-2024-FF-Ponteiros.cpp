#include <iostream>

extern "C" {
    #include "./timestamp_FF.h"
}
/**
 * A função principal demonstra o uso de ponteiros para aceder e manipular um array de inteiros.
 * Imprime os valores do primeiro elemento, o elemento apontado pelo ponteiro, o próximo elemento,
 * o elemento anterior e o elemento duas posições à frente do ponteiro.
 */
int main() {
   std::cout << "Programa de ponteiros"  << std::endl;
   mudaLinha();
   std::cout << "Iniciámos com um array de 5 inteiros (10, 20, 30, 40 e 50) e iniciámos um ponteiro para o primeiro elemento do array"  << std::endl;
    /**
     * Um array de 5 inteiros com os valores 10, 20, 30, 40 e 50.
     */
    int numeros[5] = {10, 20, 30, 40, 50};
   
    /**
     * Inicializa um ponteiro para o primeiro elemento do array `numeros`.
     */
    int *ptr = numeros;
    mudaLinha();
    std::cout << "Primeiro inteiro do array na posição [0]:"  << std::endl;
    /**
     * Imprime o valor do primeiro elemento no array `numeros`.
     */
    std::cout << numeros[0] << std::endl;
   
    /**
     * Imprime o valor do elemento apontado pelo ponteiro `ptr`.
     */
    mudaLinha();
    std::cout << "Valor do elemento apontado pelo ponteiro:"  << std::endl;
    std::cout << *ptr << std::endl;
    /**
     * Incrementa o ponteiro `ptr` para apontar para o próximo elemento no array.
     */
    mudaLinha();
    std::cout << "Incrementamos o ponteiro:"  << std::endl;
    ptr++;
    /**
     * Imprime o valor do elemento apontado pelo ponteiro `ptr`.
     */
    std::cout << *ptr << std::endl;
 
    /**
     * Decrementa o ponteiro `ptr` para apontar para o elemento anterior no array.
     */
    mudaLinha();
    std::cout << "Decrementamos o ponteiro:"  << std::endl;
    ptr--;
    /**
     * Imprime o valor do elemento apontado pelo ponteiro `ptr`.
     */
    std::cout << *ptr << std::endl;
 
    /**
     * Imprime o valor do elemento duas posições à frente do ponteiro `ptr`.
     */
    mudaLinha();
    std::cout << "Valor do ponteiro 2 posições adiante:"  << std::endl;
    std::cout << *(ptr + 2) << std::endl;

    meuCarimbo();
    
 
    return 0;
}
