#pragma once

class Cvecteur
{

private :

	//Donnes membres de la classe
	int m_nX; //Donnees privee, non public
	int m_nY;
	int m_nZ;

public :

	//fonctions membres

		//Un constructeur
	Cvecteur(); 
	Cvecteur(int nX, int nY, int nZ); //Un autre constructeur mais avec des parametres
	
		//Set

	void setX(const int nX);
	void setY(const int nY);
	void setZ(const int nZ);

		//Get

	int getX()const; //Const dit que la fonction ne peux pas modifier la donnees membres 
	int getY()const;
	int getZ()const;

};