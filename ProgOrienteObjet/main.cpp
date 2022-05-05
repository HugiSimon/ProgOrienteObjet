//Fichier main.cpp
//Version 1.0
//Branche release

#include <stdio.h>
#include "tvect.h"

int main() {

	printf_s("Version 1.0 du CPP");

	vecteur tvect;

	tvect.n_x = 0;
	tvect.n_y = 0;
	tvect.n_z = 0;

	initVecteur(&tvect, 5, 2, 9);

	return 0;

}