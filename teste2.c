#include <stdio.h>


int main()
{   
    char nome[20]; 
    // como a linguagem C não tem string(palavra) usamos o metodo char e informamos quantos caracteres precisamos

    printf("Digite o seu nome:\n");
    scanf("%s", &nome); 
    printf("Bem-vindo, %s !!", &nome);
    return 0;
}