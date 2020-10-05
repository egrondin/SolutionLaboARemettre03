// But : Demander � l'utilisateur (repr�sentants commerciaux) la valeur de leurs ventes brutes hebdomadaires pour afficher leur salaire final.
// Auteur : �mile Grondin
// Date : 04-10-2020

// Pour communiquer avec l'utilisateur
#include <iostream>

//Permet de ne pas avoir � �crire std::
using namespace std;	

void main()
{
	//Pour afficher correctement les accents dans la console
	setlocale(LC_ALL, "");

	// D�claration des variables
	const int MINIMUM = 250;	
	const float POURCENTAGE = 7.5;
	float vente;
	float commission;
	float salaire;

	cout << "Veuillez entrer le total de vos ventes de la semaine ou -1 pour quitter: ";	//Le programme demande � l'utilisateur d'entrer un nombre ou -1 pour quitter
	cin >> vente;		//l'utilisateur entre son nombre

	//Si le nombre de l'utilisateur est inf�rieur � -1
	if (vente < -1 )
	{
		cout << "Veuillez entrer un nombre positif: ";		//Le programme indique � l'utlisateur d'entrer un nombre positif
		cin >> vente;		//l'utilisateur entre son nombre
	}

	//tant que le nombre est d�ff�rent de -1 et plus grand ou �gal que 0
	while (vente != -1 && vente >=0)
	{
		commission = POURCENTAGE * vente / 100;		//La commission est �gal au pourcentage (7.5%) multipli� par le nombre entr� par l'utilisateur divis� par 100
		salaire = commission + MINIMUM;		//Le salaire total est �gal � la comission + le montant minimal de 250

		cout << "Votre salaire de la semaine est de: " << salaire << "$" << endl;		//Le programme indique � l'utilisateur le salaire total pour la semaine

		cout << "Veuillez entrer le total de vos ventes de la semaine ou -1 pour quitter: ";	//Le programme demande � l'utilisateur d'entrer un nombre ou -1 pour quitter
		cin >> vente;		//l'utilisateur entre son nombre
			
	}
	cout << "Merci et bonne journ�e!";		//Le programme envoie un message de fin � l'utilisateur
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