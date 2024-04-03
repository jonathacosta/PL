void Aula6Ex3()
{
   int n=10;            //Ímpares
   int num[n],i;
   printf("Informe %d valores em sequência:\n ",n);
   for(i=0;i<n;i++)
   {scanf("%d",&num[i]);
   };
   printf("Os números impares da série são: ");
   for(i=0;i<n;i++)
   { if (num[i]%2!=0)
    printf ("%d ",num[i]);
    };
}
