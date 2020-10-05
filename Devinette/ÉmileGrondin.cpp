// But : Le programme génère un nombre aléatoire entre 1 et 100 et l'utilisateur doit le deviner. L'utilisateur a 5 chances pour deviner le nombre et le programme lui indique si le nombre de l'utilisateur est inférieur ou supérieur au nombre généré aléatoirement
// Auteur : Émile Grondin
// Date : 04-10-2020

// Pour communiquer avec l'utilisateur
#include <iostream>
#include <time.h>

//Permet de ne pas avoir à écrire std::
using namespace std;					


void main()
{
	//Pour afficher correctement les accents dans la console
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int iRandom; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
	srand(time(0)); // pour activer l’aléatoire dans le programme
	iRandom = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom
	
	int nombre;		//nombre de l'utilisateur
	int essai = 1;		//essai de l'utilisateur

	cout << "Devinez un nombre entre 1 et 100: ";	//Le programme demande à l'utilisateur un nombre entre 1 et 100
	cin >> nombre;			//L'utilisateur entre un nombre

	//Si le nombre de l'utilisateur est plus petit que 0 ou plus grand que 100
	if (nombre < 0 || nombre > 100)
	{
		cout << "Vous n'avez pas choisi un nombre entre 1 et 100" << endl;		//Le programme indique à l'utilisateur qu'il n'a pas choisi un nombre entre 1 et 100
		cout << "Devinez un nombre entre 1 et 100: ";		//Le programme demande à l'utilisateur un nombre entre 1 et 100
		cin >> nombre;		//L'utilisateur entre un nombre
	}
	
	//Tant que le nombre de l'utilisateur est différent du nombre généré aléatoirement par le programme et que l'utilisateur à toujours des chances (5 chances maximum)
	while (nombre != iRandom && essai < 5)
	{	
		//Si nombre généré aléatoirement par le programme est plus grand que le nombre de l'utilisateur
		if (iRandom > nombre)
		{
			cout << "Le nombre est supérieur" << endl;	//Le programme indique à l'utilisateur que le nombre généré aléatoirement est supérieur à son nombre
		}
		//Si nombre généré aléatoirement par le programme est plus petit que le nombre de l'utilisateur
		if (iRandom < nombre)
		{
			cout << "Le nombre est inférieur" << endl;		//Le programme indique à l'utilisateur que le nombre généré aléatoirement est inférieur à son nombre
		}

		cout << essai << " chance sur 5" << endl;		//Le programme informe l'utilisateur de son nombre de chances restante
		cout << "Devinez un nombre entre 1 et 100: ";	//Le programme demande à l'utilisateur un nombre entre 1 et 100
		cin >> nombre;		//L'utilisateur entre un nombre

		essai++;		//Le nombre de chance est augmentée de 1 (donc une chance de moin à chaque fois)
		
	}

	//Si le nombre de l'utilisateur est égal au nombre généré aléatoirement par le programme
	if (nombre == iRandom)
	{
		cout << "Bravo le nombre était " << iRandom << " et vous l'avez deviné juste!";		//Le programme indique à l'utilisateur qu'il a deviné le bon nombre
	}
	else	//Si l'utilisateur n'arrive pas à trouver le nombre
	{
		cout << "Vous avez utilisé vos 5 chances et vous n'avez pas deviné le nombre. Le nombre était " << iRandom;		//Le programme indique à l'utilisateur qu'il n'a pas réussi à deviner le nombre généré aléatoirement et quel était ce nombre. 
	}
	


	/*
	Plan de test
	nombre généré aléatoirement			nombre de l'utilisateur				réponse
	50									50									bravo

	20									10									nombre supérieur (1/5 chance)
										50									nombre inférieur (2/5 chance)
										30									nombre inférieur (3/5 chance)
										20									bravo
	
	60									80									nombre inférieur (1/5 chance)
										50									nombre supérieur (2/5 chance)
										70									nombre inférieur (3/5 chance)
										65									nombre inférieur (4/5 chance)
										62									échec (plus de chance), nombre était 60

	80									-1									veuillez choisir nombre entre 1 et 100

	90									101									veuillez choisir nombre entre 1 et 100
	*/

		
	

	

	


}