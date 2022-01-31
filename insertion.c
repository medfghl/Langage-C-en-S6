/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void tri_bulles (int a[], int len)
{
    int i, j, temp;
    
    for (i = len - 1; i > 0 ; i -- )
    // chaque iteération, la valeur maximum est dans le ième éléments de tableau
    // alors, on compare seulemnt les éléments sont dans les indices entre O et i - 1
    // si a[j] > a[j+1], on doit changer les ordres
    {
        for (j = 0; j < i; j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main()
{
    # define N 11
    int tableau[N];
    int i;
    srand(time(NULL));
    printf("tableau avant tri: \n");
    for (i = 0; i < N-1; i++)
    {
        tableau[i] = rand()%31;
        printf("tableau[%d] = %d\n", i, tableau[i]);
    }
    
    
    tri_bulles (tableau, N-1);
    
    printf("tableau apres tri: \n");
    for (i = 0; i < N-1; i++)
    {
        printf("%5d", tableau[i]);
    }
    printf("\n");
    
    // nouveau element 
    int a;
    printf("Entrez un nouveau element a inserer:");
    scanf("%d", &a);
    tableau[N - 1] = a;
    tri_bulles (tableau, N);
    printf("tableau apres l'insertion: \n");
    for (i = 0; i < N; i++)
    {
        printf("%5d", tableau[i]);
    }
    return 0;
}