#-------------------------------------------------------------------
# Votre nom :
# Votre groupe :
# Date :
#-------------------------------------------------------------------


# Le tuple releves contient des données sous la forme :

# (nom de la ville, (relevé température moyenne par mois), (relevé cumul des précipitations en mm par mois))

releves = (
    ("Lille",
     (5.9, 7.7, 7.5, 12.9, 14.6, 17.7, 18.6, 21.5, 17.3, 12.0, 9.5, 6.0),
     (24.5, 92.3, 65.7, 41.1, 4.2, 72.2, 25.0, 64.1, 8.6, 109.0, 37.1, 83.3)),
    ("Paris",
     (7.9, 10.1, 9.9, 16.2, 17.1, 19.7, 21.4, 23.6, 20.1, 13.6, 11.5, 7.9),
     (29.6, 105.6, 54.0, 29.4, 47.0, 48.2, 7.8, 34.6, 44.6, 82.8, 14.0, 107.8)),
    ("Strasbourg",
     (4.5, 7.7, 7.9, 13.9, 15.1, 18.9, 21.1, 22.4, 18.0, 11.8, 7.0, 4.8),
     (10.8, 80.0, 47.4, 14.1, 56.0, 95.9, 12.0, 61.9, 18.9, 55.7, 11.4, 43.5)),
    ("Rennes",
     (7.7, 9.4, 9.2, 14.0, 15.8, 16.9, 18.9, 20.1, 17.7, 12.7, 10.7, 7.4),
     (81.5, 66.4, 45.1, 46.6, 59.7, 86.8, 8.2, 48.9, 65.1, 102.8, 23.7, 122.4)),
    ("Bordeaux",
     (9.1, 11.0, 10.6, 15.6, 18.3, 18.7, 22.6, 23.0, 20.1, 14.1, 12.2, 8.6),
     (67.3, 60.7, 103.5, 114.0, 122.0, 91.6, 3.0, 66.8, 90.4, 179.3, 16.9, 241.3)),
    ("Grenoble",
     (4.6, 7.1, 7.7, 12.4, 15.2, 17.8, 21.4, 21.9, 17.8, 11.2, 8.2, 4.4),
     (25.4, 33.0, 60.5, 46.2, 74.3, 94.2, 10.0, 49.5, 86.3, 137.8, 24.7, 112.6)),
    ("Toulouse",
     (8.0, 10.3, 10.7, 15.4, 18.5, 19.8, 23.5, 24.3, 20.4, 13.7, 12.2, 7.6),
     (59.8, 29.7, 57.8, 52.9, 58.3, 88.3, 3.4, 24.6, 38.2, 81.0, 15.1, 116.0)),
    ("Marseille",
     (11.4, 12.3, 12.2, 14.6, 18.8, 20.5, 23.6, 24.1, 20.9, 15.7, 14.8, 10.3),
     (21.2, 4.2, 8.2, 63.2, 67.8, 17.4, 0.2, 4.8, 45.4, 16.6, 19.0, 56.4))
    )




#---------------------------------------------------------------------------------
# Partie I
#---------------------------------------------------------------------------------

def effectif_total(xxx):
    """
    retourne l'effectif, c'est à dire, le nombre de valeurs contenue dans donnees
    :param donnees: tuple ne contenant que des valeurs de type int ou float
    :return: (type int) L'effectif des données 
    
    >>> A = (2.61, 10.45, 7.21)
    >>> effectif_total(A)
    3
    
    >>> B = (2, 1, 3, 6, 1, 2, 8, 10, 3, 1, 1, 3, 4, 8, 9, 10)
    >>> effectif_total(B)
    16
    
    """
    
    # code de la fonction







def somme(xxx):
    """
    retourne la somme des valeurs contenues dans donnees
    :param donnees: tuple ne contenant que des valeurs de type int ou float
    :return: (type int ou float) La somme des valeurs
    
    >>> A = (2.61, 10.45, 7.21)
    >>> somme(A)
    20.27
    
    >>> B = (2, 1, 3, 6, 1, 2, 8, 10, 3, 1, 1, 3, 4, 8, 9, 10)
    >>> somme(B)
    72
    
    """
    
    # code de la fonction








def moyenne(xxx):
    """
    retourne la moyenne des valeurs contenues dans donnees
    :param donnees: tuple ne contenant que des valeurs de type int ou float
    :return: (type float) Moyenne des donnees arrondie à deux décimales
    
    >>> A = (2.61, 10.45, 7.21)
    >>> moyenne(A)
    6.76
    
    >>> B = (2, 1, 3, 6, 1, 2, 8, 10, 3, 1, 1, 3, 4, 8, 9, 10)
    >>> moyenne(B)
    4.5
    
    """
    
    # code de la fonction










def val_max(xxx):
    """
    retourne la valeur maximale des données contenues dans donnees
    :param donnees: tuple ne contenant que des valeurs de type int ou float
    :return: (type int ou float) La valeur maximale dans le tuple
    
    >>> A = (2.61, 10.45, 7.21)
    >>> val_max(A)
    10.45
    
    >>> B = (2, 1, 3, 6, 1, 2, 8, 10, 3, 1, 1, 3, 4, 8, 9, 10)
    >>> val_max(B)
    10
    
    """
    
    # code de la fonction










def val_min(xxx):
    """
    retourne la valeur minimale présente dans donnees
    :param donnees: tuple ne contenant que des valeurs de type int ou float
    :return: (type int ou float) La valeur minimale dans le tuple
    
    >>> A = (2.61, 10.45, 7.21)
    >>> val_min(A)
    2.61
    
    >>> B = (2, 1, 3, 6, 1, 2, 8, 10, 3, 1, 1, 3, 4, 8, 9, 10)
    >>> val_min(B)
    1
    
    """
    
    # code de la fonction
    
    
    
    
    
    
    


def etendue(xxx):
    """
    retourne l'étendue de la série statistique fournie par donnees
    :param donnees: tuple ne contenant que des valeurs de type int ou float
    :return: (type int ou float) L'étendue de la série de données

    >>> A = (2.61, 10.45, 7.21)
    >>> etendue(A)
    7.84
    
    >>> B = (2, 1, 3, 6, 1, 2, 8, 10, 3, 1, 1, 3, 4, 8, 9, 10)
    >>> etendue(B)
    9
    
    """
    
    # code de la fonction
    
    
    
    
    
    
    
    
    


def effectif_valeur(xxx):
    """
    retourne l'effectif de la valeur dans la série de données fournie sous forme de tuple.
    :param donnees: tuple ne contenant que des valeurs de type int ou float
    :param valeur: (type int ou float) la valeur dont on cherche l'effectif
    :return: (type int) Effectif de la valeur dans la série donnees

    >>> A = (2.61, 10.45, 7.21)
    >>> effectif_valeur(A, 10.45)
    0.3333333333333333
    
    >>> B = (2, 1, 3, 6, 1, 2, 8, 10, 3, 1, 1, 3, 4, 8, 9, 10)
    >>> effectif_valeur(B, 10)
    2
    >>> effectif_valeur(B, 5)
    0
    
    """
    
    # code de la fonction
    
    
    
    
    
    
    
    
    
    


def frequence_valeur(xxx):
    """
    retourne la fréquence de valeur dans la série de données fournie sous la forme
    d'un tuple
    :param donnees: tuple ne contenant que des valeurs de type int ou float
    :param valeur: (type int ou float) la valeur dont on cherche la fréquence
    : return : (tpe int) La fréquence de valeur dans la série donnees
    
    >>> A = (2.61, 10.45, 7.21)
    >>> frequence_valeur(A, 7.21)
    0.25
    
    >>> B=(2,1,3,6,1,2,8,10,3,1,1,3,4,8,9,10)
    >>> frequence_valeur(B,10)
    0.125
    >>> frequence_valeur(B, 5)
    0.0
    
    """
    
    # code de la fonction









#---------------------------------------------------------------------------------
# Partie II
#---------------------------------------------------------------------------------


def indice_ville(xxx):
    """
    Retourne l'indice du tuple encapsulé contenant ville ou False si ville n'est
    pas présente dans le tuple releves défini en variable globale. 
    :param ville: (type str) Le nom de la ville recherchée
    :return: (int ou bool) Indice du tuple corrrespondnat à la ville
                           False si la ville ne se trouve pas dans releves
    
    >>> indice_ville("Lille")
    0
    
    >>> indice_ville("Grenoble")
    5
    
    >>> indice_ville("Lyon")
    False

    """
    
    # code de la fonction
    
    
    
    
    


def temp_moyenne(xxx):
    """
    retourne la température moyenne annuelle de la ville arrondie à 2 décimales ;
    les données initiales étant celles du tuple releves.
    :param ville: (type str) Le nom d'une ville
    :return:(type float) La température moyenne annuelle de la ville
    
    :CU: La ville doit être présente dans la variable globale releves
    
    >>> temp_moyenne("Lille")
    12.60
      
    """
    
    # code de la fonction
    
    
    
    
    
    
    

def cumul_precipitations(xxx):
    """
    retourne le cumul annuel des précipitations de la ville, arrondi à 2 décimales ;
    les données initiales étant celles du tuple releves.
    : ville : (type str) Le nom d'une ville
    : return : (type int ou float) Le cumul annuel des précipitations pour cette ville
    
    :CU: La ville doit être présente dans la variable globale releves
    
    >>>cumul_precipitation("Lille")
    627.1
    
    """ 
        
    # code de la fonction
    
    
    
    
    



def valeurs_annuelles_villes(xxx):
    """
    Retourne un tuple de tuples, chacun d'eux contenant le nom d'une ville,
    sa température moyenne annuelle et son cumul annuel des précipitations ;
    les données initiales étant celles du tuple releves.
    :param: Aucun
    :return: tuple de tuples contenant chacun le nom d'une ville, sa température moyenne annuelle
             et son cumul annuel des précipitations
    
    >>> valeurs_annuelles_villes()
    (('Lille', 12.6, 627.1), ('Paris', 14.92, 605.4), ('Strasbourg', 12.76, 507.6),
    ('Rennes', 13.37, 757.2), ('Bordeaux', 15.32, 1156.8), ('Grenoble', 12.47, 754.5),
    ('Toulouse', 15.37, 625.1), ('Marseille', 16.6, 324.4))
    
   """
    
    # code de la fonction
    
    
    
    
    
    



def afficher_valeurs_annuelles_villes(xxx):
    """
    Affiche la température moyenne annuelle et le cumul annuel des précipitations
    de toutes les villes présentes dans le tuple releves
    :param: Aucun
    :return: None
    
    Le format d'affichage est :
    
    ******* Valeurs annuelles *******
    ville_1 [Température moyenne : T1 ; Cumul des précipitations : C1 mm]
    ville_2 [Température moyenne : T2 ; Cumul des précipitations : C2 mm]
    ...
    
    où ville_n correspond au nom d'une ville, Tn à sa température moyenne annuelle
    et Cn à son cumul annuel des précipitations
    
    """
    
    # code de la fonction








def ajout_donnees(xxx):
    """
    Demande à l'utilsateur de saisir une ville puis ses valeurs de températures et précipitations sur une année.
    Ajoute ensuite ces données dans le tuple releves défini en variable globale, en respectant son format de données.
    """
    
    global releves    # utilisation de la variable globale
    
        
    # code de la fonction
    
    
    
    
    
    
    


def suppression_donnees(xxx):
    """
    Demande à l'utilisateur de saisir le nom d'une ville, puis supprime ses données du tuple releves.
    Si la ville entrée par l'utilisateur ne se trouve pas dans releves, ce tuple reste inchangé.
    """
    
    global donnees
    
    
    # code de la fonction
    
    