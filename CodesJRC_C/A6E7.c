void Aula6Ex7()
{
int n=3,p=3;            // // Matrizes 2
    int i,j,matriz[n][p];

  printf ("\nDigite valor para os elementos da matriz (%d,%d)\n\n",n,p);    // Preenchendo a matriz
 for ( i=0; i<n; i++ )
    for ( j=0; j<p; j++ )
    {
      printf ("(%d,%d): ", i, j);
      scanf ("%d", &matriz[ i ][ j ]);
    }
    printf("\nA nova matriz é:\n");
    for(i=0;i<n;i++)                    // Imprimindo a matriz
    {   for(j=0;j<p;j++){
        printf ("%d ",2*(matriz[i][j]));
                        }
    printf("\n");
    };
}

