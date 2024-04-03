void Aula6Ex2()
{ int num[10],i,y,x;
   printf("Informe 10 valores em sequência:\n ");
   for(i=0;i<10;i++)
    {
    scanf("%d",&num[i]);
    if(i==0) {x=num[i];y=num[i];};
    if(num[i]>x) x=num[i];
    if(num[i]<y) y=num[i];
    };
    printf("O maior valor é %d!\n",x);
    printf("O menor valor é %d!\n",y);
    printf("A diferença entre eles é %d!\n",x-y);
    printf("\n\n");
}
