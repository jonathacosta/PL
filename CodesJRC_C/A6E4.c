void Aula6Ex4()                 // primos
//void main()
{
   int n=10;                               // Define o tamanho do vetor e a quantidade esperada de numeros
   int num[n],i,j,k=0,res=0;
   printf("Informe %d valores em sequência:\n ",n);
   for(i=0;i<n;i++)
   {scanf("%d",&num[i]);
   };


   for(i=0;i<n;i++)                             // Varre o vetor de números num
   if(num[i]!=1)
   {
   {   for(j=2;j<=(num[i]/2);j++)               // Teste de primo a partir de 2
        { if (num[i]%j==0) {res++;};
        };
        if (res==0) { printf("%d ",num[i]); k++;}
        else {res=0;};
    };
    };
    if(k==0) printf("Não há números primos na série!\n\n");
    else printf("- são os %d números primos na série!\n\n",k);

}


