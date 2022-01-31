/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#define N  10

// Fonction pour calculer la moyenne de tableau
// La taille de tableau est toujours 10, donc on donne pas la taille de tableau dans la fonction
// On definie un paramètre global 


double moyenne_tableau (int l[ ])
{
    int i, s = 0;
    
    // L'index début pour le tableau est 0, dernier index est N - 1
    
    for (i = 0 ; i < N ; i++)
       s  = s + l[i];
    
    double avg = s / N;
    return avg;
}



int main()
{   
    int i, A[N];
    for (i = 0; i < N; i++)
    {
        printf("Entrez l'element dans le tableau[%d]", i);
        scanf("%d", &A[i]);
    } 
    
    printf("La moyenne de tableau est : %f", moyenne_tableau (A));

    return 0;
}
