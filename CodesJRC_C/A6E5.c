void Aula6Ex5()
{
int vec[8],i,k,j=0;
printf("Digite 8 numeros inteiros para armazenamento e identificação de posição!\n\n ");
for(i=0;i<8;i++)            // Recebe 8 entradas de inteiros
    {printf("Faltam apenas %d números: \n ",(8-i));scanf("%d",&vec[i]);
    };
    printf("Números armazenados!\n");
    printf("\n Digite um numero para identificamos o endereço :\n");scanf("%d",&k);

for (i=0;i<8;i++)               // teste vec={1,2,3,4,5,6,7,8,9}; 0
    {if( vec[i]==k ) j=i;
    };

if (j==0) printf("O número não pertence a sequencia digitada\n\n");
else printf("O número está na posição %d da sequencia digitada.\n\n",j);
}

