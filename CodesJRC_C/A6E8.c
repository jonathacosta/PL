void Aula6Ex8()    // Matrizes 3 Soma os elementos de uma matriz 2x3
{
int i,j,matriz[2][3],x;
    printf("Informe,a seguir, os valores dos elementos da matriz!\n");
   for(i=0;i<2;i++)
   {for(j=0;j<3;j++)
        {printf("(%d,%d): ",i,j);
        scanf("%d",&matriz[i][j]);
        }
    }
   x=0;
   for(i=0;i<2;i++)
   {for(j=0;j<3;j++)
        {x=x+matriz[i][j];
        }
    }
printf("\nA soma dos elementos da matriz é %d\n",x);
}
