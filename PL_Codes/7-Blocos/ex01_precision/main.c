/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido: Soma com precisão diferente!
*/
#include <stdio.h>

int main()
{
float s=0;
for(int i=0;i<30000;i++)
    {
    s+=0.11;
    };
printf("\n%f",s);


double s1=0;
for(int i=0;i<30000;i++)
    {
    s1+=0.11;
    };
printf("\n%f",s1);

}
