/*
 *
 * IEEA - TP 2
 *
 * Nom binome 1 :
 * Nom binome 2 :
 *
 */


#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define M 15 /* nombre de lignes du damier */
#define N 22 /* nombre de colonnes du damier */

void sleep(int s) /* fonction permettant d'attendre s secondes */
{
	time_t start_time = 0;
	time_t current_time = 0;

	start_time = time(NULL);

	while(current_time-start_time+1 <= s)
		current_time = time(NULL);
}

void initialisation_damier(int damier[M][N])
{
	/* Initialise chaque cellule du damier "damier" (vivante ou morte) de maniere aleatoire */
	/* A completer */
}

void affiche_damier(int damier[M][N])
{
	/* Affiche le damier "damier" */
	/* A completer */
}

int nombre_voisins(int damier[M][N], int i0, int j0)
{
	/* Renvoie le nombre de voisins vivants de la cellule (i0,j0) du damier "damier" */
	int nb = 0;


	/* A completer */



	return nb;
}

void generation_suivante(int damier[M][N], int new_damier[M][N])
{
	/* Remplit le damier "new_damier" representant la generation suivante du damier "damier" */
	/* A completer */
}

void copie_damier(int damier_cible[M][N], int damier_source[M][N])
{
	/* Copie l'ensemble des cellules du damier "damier_source" vers le damier "damier_cible" */
	/* A completer */
}


int main ()
{
	int i = 0;
	int nbCycles = 0;

	int damier[M][N];
	int new_damier[M][N];




	/*
	 * A completer : rentrer le nombre de cycles au clavier
	 *
	 */

	/*
	 * A completer : initialisation du generateur de nombres
	 * aleatoires
	 */

	/*
	 * A completer : initialisation du damier
	 */

	while (i < nbCycles)
	{
		system("cls"); /* efface l'ecran de la console sur Windows */

		/* A completer : on affiche le damier */
		/* A completer : on calcule la generation suivante */
		/* A completer : on copie l'ensemble des cellules du nouveau damier vers l'ancien damier */
		/* A completer : attendre 1 seconde */

		i++;
	}

	return 0;
}

