/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um programa para ler uma letra e verificar se é uma vogal ou não.
*/

#include <stdio.h>
int main(){
char letra;
// Ler dados
printf("Informe uma letra:\n"); scanf("%c",&letra);
// Testar
switch(letra)
{
    case 'a': printf("A letra é uma vogal.\n"); break;
    case 'b': printf("A letra é uma vogal.\n"); break;
    case 'c': printf("A letra é uma vogal.\n"); break;
    case 'd': printf("A letra é uma vogal.\n"); break;
    case 'e': printf("A letra é uma vogal.\n"); break;
    case 'A': printf("A letra é uma vogal.\n"); break;
    case 'B': printf("A letra é uma vogal.\n"); break;
    case 'C': printf("A letra é uma vogal.\n"); break;
    case 'D': printf("A letra é uma vogal.\n"); break;
    case 'E': printf("A letra é uma vogal.\n"); break;
    default: printf("A letra informada não é uma vogal!\n");
}
}
