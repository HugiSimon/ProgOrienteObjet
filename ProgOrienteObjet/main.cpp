//Fichier main.cpp
//Version 1.0
//Branche release

#include <stdio.h>
#include "tvect.h"
#include "Cvecteur.h"

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
	//cVect.m_nX = 0; //Que dispo si la variable m_nX est public

	cVect.setX(5);
	printf_s("X : %d", cVect.getX());

	return 0;

}