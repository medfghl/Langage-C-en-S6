/*
 *
 * IEEA - TP 1
 *
 * Nom binome 1 :
 * Nom binome 2 :
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char* couleur[]={"Vert","Rouge","Blanc","Violet","Jaune","Marron","Cyan","Rose"};

void afficheTableau(int tab[], int n, int m);
int malPlace(int tabJoueur[], int tabMachine[], int n, int m);

void initialiserTableau(int tab[], int n, int m);
int bienPlace(int tabJoueur[], int tabMachine[], int n);
void saisieTableau(int tab[], int n, int m);


void afficheTableau(int tab[], int n, int m)
{
	int i = 0;
	for(i=0; i<n; i++)
	{
		if (tab[i] >=0 && tab[i] < m)
			printf("%s ",couleur[tab[i]]);
		else
			printf("Couleur non valide");

	}

	printf("\n");
}

int malPlace(int tabJoueur[], int tabMachine[], int n, int m)
{
	int mal = 0, i = 0, j = 0;
	int cmptJoueur = 0, cmptOrdinateur = 0;

	/* pour chaque couleur */
	for (j=0; j<m; j++)
	{
		cmptJoueur = 0;
		cmptOrdinateur = 0;

		/*
		 * on compte le nombre de fois que la couleur apparait dans la
		 * sequence du joueur et dans la sequence de l'ordinateur sans
		 * prendre en compte les pions bien places.
		 *
		 * */

		for (i = 0; i<n; i++)
		{
			if (j == tabJoueur[i] && tabJoueur[i] != tabMachine[i])
				cmptJoueur++;
			if (j == tabMachine[i] && tabJoueur[i] != tabMachine[i])
				cmptOrdinateur++;
		}

		/*
		 * le nombre de pions mal places est
		 * le minimum des occurences precedemment
		 * relevees dans chacune des deux sequences.
		 *
		 * */

		if (cmptJoueur > cmptOrdinateur)
			mal += cmptOrdinateur;
		else
			mal += cmptJoueur;
	}

	return mal;
}

int main()
{
	int nbCouleurs = 8;
	int nbPions = 6;


	return 0;
}
