// timestamp.c
#include <stdio.h>
#include <time.h>

void mudaLinha(void); 
void meuCarimbo(void);

void mudaLinha(void)
{
    printf("\n"); // muda de linha
}	

void meuCarimbo(void)
{
    time_t tempo_atual = time(NULL);
    struct tm *tempo_local = localtime(&tempo_atual);
    char data_hora[64];
    
    strftime(data_hora, sizeof(data_hora), "%d-%m-%Y %H:%M:%S", tempo_local);
    printf("\n[Filipa Ferreira] - [ %s ]", data_hora);
    mudaLinha();
}
