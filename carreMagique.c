/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define MAX 3

int estCarreMagique(int tab[MAX][MAX])
{
    int i, j;
    // somme de diagonale
    int s1 = 0, s2 = 0;
    // somme de ligne ou colonne
    int row, colum;
    // élément dans la diagonale, soit (i, i), soit (i, N-1-i)
    for(i = 0; i < MAX; i++)
    {   
        s1 += tab[i][i];
        s2 += tab[i][MAX-1-i];
    }
    if (s1 != s2)
       return 0;
    
    else
    {
        for (i = 0; i < MAX; i++)
        {
            row = 0;
            colum = 0;
            for (j = 0; j < MAX; j++)
            {
                row += tab[i][j];
                colum += tab[j][i];
            }
            if ((row != colum) || (row != s1))
                return 0;
        }
        
    }
    return 1;
}




int main()
{
    int A[MAX][MAX];
    int i, j;
    
    // Lecture de A
    for(i = 0; i < MAX; i++)
    {
        for(j = 0; j < MAX; j++)
        {
            printf("Entrez A[%d][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    
    //Affichage de A
    printf("A = \n");
    for(i = 0; i < MAX; i++)
    {
        for(j = 0; j < MAX; j++)
        {
            printf("%5d ", A[i][j]);
        }
        printf("\n");
    }
    if(estCarreMagique(A))
        printf("A est une matrice carré magique \n");
    else
        printf("A n'est une matrice carré magique \n");

    return 0;
}
