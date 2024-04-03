// Aula 6 exercício 1
void Aula6Ex1()

{
int num[10],i,x;
    printf("Informe 10 valores em sequência?\n");
   for(i=0;i<10;i++)
    {    scanf("%d",&num[i]);
         if(i==0) x=num[i];
         if(num[i]>x) x=num[i];
    };
    printf("O maior valor é %d",x);
    printf("\n\n");
}
