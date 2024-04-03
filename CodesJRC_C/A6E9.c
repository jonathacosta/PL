//void Aula6Ex9()    // Exibir diag.prin Matriz
void main()
{
int i,j,matriz[4][4],x;
    printf("Informe,a seguir, os valores dos elementos da matriz!\n");
   for(i=0;i<4;i++)
   {for(j=0;j<4;j++)
        {printf("(%d,%d): ",i,j);
        scanf("%d",&matriz[i][j]);
        }
    }

    printf("Os elementos a seguir compõem a diagonal principal da matriz:\n");
    printf("[");
   for(i=0;i<4;i++)
   {for(j=0;j<4;j++)
        {if (i==j) printf("%d",matriz[i][j]);
           else printf(" ");
        };
    }
    printf("]\n\n");
}

