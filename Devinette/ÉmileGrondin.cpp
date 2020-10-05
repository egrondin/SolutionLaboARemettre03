// But : Le programme g�n�re un nombre al�atoire entre 1 et 100 et l'utilisateur doit le deviner. L'utilisateur a 5 chances pour deviner le nombre et le programme lui indique si le nombre de l'utilisateur est inf�rieur ou sup�rieur au nombre g�n�r� al�atoirement
// Auteur : �mile Grondin
// Date : 04-10-2020

// Pour communiquer avec l'utilisateur
#include <iostream>
#include <time.h>

//Permet de ne pas avoir � �crire std::
using namespace std;					


void main()
{
	//Pour afficher correctement les accents dans la console
	setlocale(LC_ALL, "");

	// D�claration des variables
	int iRandom; // permet de m�moriser le nombre choisi al�atoirement par l�ordinateur
	srand(time(0)); // pour activer l�al�atoire dans le programme
	iRandom = rand() % 101; // l�ordinateur calcule un nombre al�atoire entre 0 et 100 et le stocke dans iRandom
	
	int nombre;		//nombre de l'utilisateur
	int essai = 1;		//essai de l'utilisateur

	cout << "Devinez un nombre entre 1 et 100: ";	//Le programme demande � l'utilisateur un nombre entre 1 et 100
	cin >> nombre;			//L'utilisateur entre un nombre

	//Si le nombre de l'utilisateur est plus petit que 0 ou plus grand que 100
	if (nombre < 0 || nombre > 100)
	{
		cout << "Vous n'avez pas choisi un nombre entre 1 et 100" << endl;		//Le programme indique � l'utilisateur qu'il n'a pas choisi un nombre entre 1 et 100
		cout << "Devinez un nombre entre 1 et 100: ";		//Le programme demande � l'utilisateur un nombre entre 1 et 100
		cin >> nombre;		//L'utilisateur entre un nombre
	}
	
	//Tant que le nombre de l'utilisateur est diff�rent du nombre g�n�r� al�atoirement par le programme et que l'utilisateur � toujours des chances (5 chances maximum)
	while (nombre != iRandom && essai < 5)
	{	
		//Si nombre g�n�r� al�atoirement par le programme est plus grand que le nombre de l'utilisateur
		if (iRandom > nombre)
		{
			cout << "Le nombre est sup�rieur" << endl;	//Le programme indique � l'utilisateur que le nombre g�n�r� al�atoirement est sup�rieur � son nombre
		}
		//Si nombre g�n�r� al�atoirement par le programme est plus petit que le nombre de l'utilisateur
		if (iRandom < nombre)
		{
			cout << "Le nombre est inf�rieur" << endl;		//Le programme indique � l'utilisateur que le nombre g�n�r� al�atoirement est inf�rieur � son nombre
		}

		cout << essai << " chance sur 5" << endl;		//Le programme informe l'utilisateur de son nombre de chances restante
		cout << "Devinez un nombre entre 1 et 100: ";	//Le programme demande � l'utilisateur un nombre entre 1 et 100
		cin >> nombre;		//L'utilisateur entre un nombre

		essai++;		//Le nombre de chance est augment�e de 1 (donc une chance de moin � chaque fois)
		
	}

	//Si le nombre de l'utilisateur est �gal au nombre g�n�r� al�atoirement par le programme
	if (nombre == iRandom)
	{
		cout << "Bravo le nombre �tait " << iRandom << " et vous l'avez devin� juste!";		//Le programme indique � l'utilisateur qu'il a devin� le bon nombre
	}
	else	//Si l'utilisateur n'arrive pas � trouver le nombre
	{
		cout << "Vous avez utilis� vos 5 chances et vous n'avez pas devin� le nombre. Le nombre �tait " << iRandom;		//Le programme indique � l'utilisateur qu'il n'a pas r�ussi � deviner le nombre g�n�r� al�atoirement et quel �tait ce nombre. 
	}
	


	/*
	Plan de test
	nombre g�n�r� al�atoirement			nombre de l'utilisateur				r�ponse
	50									50									bravo

	20									10									nombre sup�rieur (1/5 chance)
										50									nombre inf�rieur (2/5 chance)
										30									nombre inf�rieur (3/5 chance)
										20									bravo
	
	60									80									nombre inf�rieur (1/5 chance)
										50									nombre sup�rieur (2/5 chance)
										70									nombre inf�rieur (3/5 chance)
										65									nombre inf�rieur (4/5 chance)
										62									�chec (plus de chance), nombre �tait 60

	80									-1									veuillez choisir nombre entre 1 et 100

	90									101									veuillez choisir nombre entre 1 et 100
	*/

		
	

	

	


}