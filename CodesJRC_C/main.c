#include<stdio.h>
#include<math.h>
#include "jrc_bib_AulasJRC.h"

int main()
{
//imp_cab();
int n='s';char ch;
while((ch!='N')&&(ch!='n'))
    {printf("Qual exercício deseja simular?\n Responda entre 1 e 10: "); scanf("%d",&n);

switch(n){
case 1:  printf("\n\nExercício %d\n\n",n); Aula6Ex1();break;
case 2:  printf("\n\nExercício %d\n\n",n); Aula6Ex2();break;
case 3:  printf("\n\nExercício %d\n\n",n); Aula6Ex2();break;
case 4:  printf("\n\nExercício %d\n\n",n); Aula6Ex4();break;
case 5:  printf("\n\nExercício %d\n\n",n); Aula6Ex5();break;
case 6:  printf("\n\nExercício %d\n\n",n); Aula6Ex6();break;
case 7:  printf("\n\nExercício %d\n\n",n); Aula6Ex7();break;
case 8:  printf("\n\nExercício %d\n\n",n); Aula6Ex8();break;
case 9:  printf("\n\nExercício %d\n\n",n); Aula6Ex9();break;
case 10: printf("\n\nExercício %d\n\n",n); Aula6Ex10();break;
default: printf("\n\nEscolha fora da faixa indicada!\n\n");}
printf("\nContinuar? (S) ou (N) \n");scanf(" %c",&ch); // Usar espaço antes de %c para para o while
    }

return 0;
}
