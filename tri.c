/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

# include <stdio.h>

void tri_bulles (int a[], int len)
{
    int i, j, temp;
    
    for (i = len - 1; i > 0 ; i -- )
    // chaque itération, la valeur maximum est dans le ième éléments de tableau
    // alors, on compare seulement les éléments sont dans les indices entre O et i - 1
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

int main() {
        int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
        int len = (int) sizeof(arr) / sizeof(*arr);
        tri_bulles(arr, len);
        int i;
        for (i = 0; i < len; i++)
                printf("%d ", arr[i]);
        return 0;
}