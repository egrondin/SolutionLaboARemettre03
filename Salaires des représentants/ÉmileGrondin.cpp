// But : Demander à l'utilisateur (représentants commerciaux) la valeur de leurs ventes brutes hebdomadaires pour afficher leur salaire final.
// Auteur : Émile Grondin
// Date : 04-10-2020

// Pour communiquer avec l'utilisateur
#include <iostream>

//Permet de ne pas avoir à écrire std::
using namespace std;	

void main()
{
	//Pour afficher correctement les accents dans la console
	setlocale(LC_ALL, "");

	// Déclaration des variables
	const int MINIMUM = 250;	
	const float POURCENTAGE = 7.5;
	float vente;
	float commission;
	float salaire;

	cout << "Veuillez entrer le total de vos ventes de la semaine ou -1 pour quitter: ";	//Le programme demande à l'utilisateur d'entrer un nombre ou -1 pour quitter
	cin >> vente;		//l'utilisateur entre son nombre

	//Si le nombre de l'utilisateur est inférieur à -1
	if (vente < -1 )
	{
		cout << "Veuillez entrer un nombre positif: ";		//Le programme indique à l'utlisateur d'entrer un nombre positif
		cin >> vente;		//l'utilisateur entre son nombre
	}

	//tant que le nombre est défférent de -1 et plus grand ou égal que 0
	while (vente != -1 && vente >=0)
	{
		commission = POURCENTAGE * vente / 100;		//La commission est égal au pourcentage (7.5%) multiplié par le nombre entré par l'utilisateur divisé par 100
		salaire = commission + MINIMUM;		//Le salaire total est égal à la comission + le montant minimal de 250

		cout << "Votre salaire de la semaine est de: " << salaire << "$" << endl;		//Le programme indique à l'utilisateur le salaire total pour la semaine

		cout << "Veuillez entrer le total de vos ventes de la semaine ou -1 pour quitter: ";	//Le programme demande à l'utilisateur d'entrer un nombre ou -1 pour quitter
		cin >> vente;		//l'utilisateur entre son nombre
			
	}
	cout << "Merci et bonne journée!";		//Le programme envoie un message de fin à l'utilisateur
}

/*
Plan de test:
vente			minimum			commission			salaire		
-1																	quitte le programme
-10																	veuillez entrer un nombre positif
0				250				0					250
250				250				18.75				268.75
1000			250				75					325




*/