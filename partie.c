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
    # define N 10
    int tableau[N];
    int i;
    srand(time(NULL));
    for (i = 0; i < N; i++)
    {
        tableau[i] = rand()%31;
        //printf("tableau[%d] = %d\n", i, tableau[i]);
    }
    
    printf("tableau avant la section: \n");
    for (i = 0; i < N; i++)
    {
        printf("%5d", tableau[i]);
    }
    printf("\n");
    
    // Deux tableaux pour mémoriser les nombre impairs et impairs
    int impair[N], pair[N];
    // Les nombre total pour les impairs et impairs
    int N_impair = 0, N_pair = 0;
    for (i = 0; i < N; i++)
    {   
        // ieme element est pair
        if(tableau[i]%2 == 0) 
        {
           pair[N_pair] = tableau[i];
           N_pair++;
        }
        else 
        {
           impair[N_impair] = tableau[i];
           N_impair++;
        }
    } 
    
    tri_bulles (pair, N_pair);
    tri_bulles (impair, N_impair);
    
    i = 0;
    int j = 0;
 
    for(j = 0; j < N_impair; j++) 
    {
      tableau[i] = impair[j];
      i++;
    }
 
    for(j = 0; j < N_pair; j++) 
    {
      tableau[i] = pair[j];
      i++;
    }
    
    // affichage
    printf("tableau apres la section: \n");
    for (i = 0; i < N; i++)
    {
        printf("%5d", tableau[i]);
    }
    
}