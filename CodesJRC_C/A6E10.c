void Aula6Ex10() // Exibir exceto a diag.prin. matriz
{
int i,j,matriz[3][3],x;
    printf("Informe,a seguir, os valores dos elementos da matriz!\n");
   for(i=0;i<3;i++)
   {for(j=0;j<3;j++)
        {printf("(%d,%d): ",i,j);
        scanf("%d",&matriz[i][j]);
        }
    }

    printf("Os elementos a seguir não compõem a diagonal principal da matriz:\n");
    printf("[");
   for(i=0;i<3;i++)
   {for(j=0;j<3;j++)
        {if (i!=j) printf("%d ",matriz[i][j]);
           else printf(" ");
        };
    };
    printf("]\n\n");
}

