//Fichier main.cpp
//Version 1.0
//Branche release

#include <stdio.h>
#include "tvect.h"
#include "Cvecteur.h"

//#define TAILLE 255 //C'est pas une variable constante mais une macro
//const int TAILLE = 255; //Prend de la place en plus dans la memoire, mais a d'autre utilite

void incI();
static int fct(int);

int main() {

	printf_s("Version 1.0 du CPP\n");

	//Type Structure
	vecteur tvect;

	tvect.n_x = 0;
	tvect.n_y = 0;
	tvect.n_z = 0;

	initVecteur(&tvect, 5, 2, 9);

	//Type classe objet
	Cvecteur cVect;
	Cvecteur cVect2(1,3,6);

	//cVect.m_nX = 0; //Que dispo si la variable m_nX est public

	cVect.setX(5);
	printf_s("X : %d", cVect.getX());

	incI();
	incI();
	incI();

	fct(5);

	return 0;

}

void incI() {

	//variable static
	static int n_i = 0; //Variable qui est stocke au même endroit, si on appelle 3 fois la fonction, ça va s'incrementer
	n_i = n_i + 1;
	printf_s("\n%d", n_i);
}

static int fct(int n_val) { //Le static pour une fonction peut que etre utilise dans le ficher ou elle est declare

	return n_val;
}