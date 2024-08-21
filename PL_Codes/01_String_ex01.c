#include<stdio.h>
#include<string.h>

struct Estudante
{char nome[50];
int idade;    
float nota;
};

int main() {
    struct Estudante aluno;

    strcpy(aluno.nome,"Ana");
    aluno.idade = 20;
    aluno.nota = 8.5;

    printf("Nome: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Nota: %.2f\n\n", aluno.nota);
    }
