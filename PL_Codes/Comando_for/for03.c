/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um programa que em C leia a idade e o peso de 8 pessoas. 
Calcule e imprima as médias de peso das pessoas da mesma faixa etária e quantas são de cada faixa etária. 
As faixas etárias são de 1 a 10 anos, de 11 a 20 anos, de  21 a 30 anos, e maiores de 30. Utilize o comando for.
*/
#include <stdio.h>
int main() {
    int idade;
    float peso;
    // Variáveis para armazenar as somas dos pesos e contadores por faixa etária
    float soma_peso_1_10 = 0, soma_peso_11_20 = 0, soma_peso_21_30 = 0, soma_peso_maior_30 = 0;
    int contador_1_10 = 0, contador_11_20 = 0, contador_21_30 = 0, contador_maior_30 = 0;
    // Leitura da idade e peso de 8 pessoas
    for (int i = 1; i <= 8; i++) {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);
        printf("Digite o peso da pessoa %d: ", i);
        scanf("%f", &peso);
        // Verificar a faixa etária e acumular os pesos e contadores
        if (idade >= 1 && idade <= 10) {
            soma_peso_1_10 += peso;
            contador_1_10++;
        } else if (idade >= 11 && idade <= 20) {
            soma_peso_11_20 += peso;
            contador_11_20++;
        } else if (idade >= 21 && idade <= 30) {
            soma_peso_21_30 += peso;
            contador_21_30++;
        } else if (idade > 30) {
            soma_peso_maior_30 += peso;
            contador_maior_30++;
        }}
    // Cálculo das médias de peso para cada faixa etária
    float media_peso_1_10 = (contador_1_10 > 0) ? (soma_peso_1_10 / contador_1_10) : 0;
    float media_peso_11_20 = (contador_11_20 > 0) ? (soma_peso_11_20 / contador_11_20) : 0;
    float media_peso_21_30 = (contador_21_30 > 0) ? (soma_peso_21_30 / contador_21_30) : 0;
    float media_peso_maior_30 = (contador_maior_30 > 0) ? (soma_peso_maior_30 / contador_maior_30) : 0;
    // Exibição dos resultados
    printf("\nMédia de peso (1 a 10 anos): %.2f (Total: %d pessoas)\n", media_peso_1_10, contador_1_10);
    printf("Média de peso (11 a 20 anos): %.2f (Total: %d pessoas)\n", media_peso_11_20, contador_11_20);
    printf("Média de peso (21 a 30 anos): %.2f (Total: %d pessoas)\n", media_peso_21_30, contador_21_30);
    printf("Média de peso (Maiores de 30 anos): %.2f (Total: %d pessoas)\n", media_peso_maior_30, contador_maior_30);
    return 0;

    /* NOTA:
    A estrutura abaixo :
     if (contador_1_10 > 0) {float media_peso_1_10 = soma_peso_1_10 / contador_1_10;}
    else {float media_peso_1_10 = 0;}
    pode ser substituida pelo operador ternário, ficando:
    float media_peso_1_10 = (contador_1_10 > 0) ? (soma_peso_1_10 / contador_1_10) : 0;
   */
}

