/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include	<stdlib.h>
#include	<stdio.h>
#define N 3 

int point_cols(int tab[N][N])
{
	int cmpt = 0;
	int i,j,k;
	int max, min, jmin, imax;

	for(i=0;i<N;i++)
	{
		min = tab[i][0];
		jmin = 0;
		for(j=1;j<N;j++)
		{
			if (tab[i][j] < min)
			{
				min = tab[i][j];
				jmin = j;
			}
		}

		max = tab[0][jmin];
		imax =  0;
		for(k=1;k<N;k++)
		{
			if (tab[k][jmin] > max)
			{
				max = tab[k][jmin];
				imax = k;
			}
		}

		if (min == max)
		{
			printf("%d est un point col, coordonnes = (%d,%d)\n",min,imax,jmin);
			cmpt++;
		}

	}

	return cmpt;
}

int main ()
{ 

	int M[3][3];
	M[0][0] = 2;
	M[0][1] = 1;
	M[0][2] = 3;
	
	M[1][0] = 8;
	M[1][1] = -7;
	M[1][2] = 9;

	M[2][0] = -3;
	M[2][1] = -6;
	M[2][2] = -4;

	printf("%d points cols\n",point_cols(M));


	return 0;
}			