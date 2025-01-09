// Código de Rotinas Auxiliares

#include <stdio.h>

// Função para ler os números
void LerNumeros(int numeros[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
}

void CarregarVetor(int numeros[], int tamanho) {
/* Note que,em C, não é possível retornar diretamente um array (ou vetor) de uma função, pois arrays locais são alocados na
stack e são destruídos quando a função termina.
Para tanto, contudo, é possível:
 - Passar um ponteiro para o vetor como argumento para a função.
 - Alocar o vetor dinamicamente na heap usando malloc.
 - Ou apenas pre-definir o vetor no código main e atualizar(carregar) o vetor conforme solução abaixo:
*/
    for (int i = 0; i < tamanho; i++) {
        numeros[i]=(i+1)*2;}
    }

// Função para encontrar o maior númerocom operador ternário
int EncontrarMaior( int numeros[], int tamanho) {
    int maior = numeros[0];
    for (int i = 1; i < tamanho; i++)
        {maior = (numeros[i] > maior) ? numeros[i]:maior;}
    return maior;
}

// Função para encontrar o menor número com operador ternário
int EncontrarMenor( int numeros[], int tamanho) {
    int menor = numeros[0];
    for (int i = 1; i < tamanho; i++)
        {menor = (numeros[i]<menor) ? numeros[i]:menor;}
    return menor;
}

// Função para calcular a média
float CalcularMedia( int numeros[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++)
        {soma += numeros[i];}
    return (float) soma / tamanho;
}
