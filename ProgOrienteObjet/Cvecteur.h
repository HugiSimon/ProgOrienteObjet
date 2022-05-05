#pragma once

class Cvecteur
{

private :

	//Donnes membres de la classe
	int m_nX; //Données privée, non public
	int m_nY;
	int m_nZ;

public :

	//fonctions membres

		//Un constructeur
	Cvecteur(); 
	
		//Set

	void setX(const int nX);
	void setY(const int nY);
	void setZ(const int nZ);

		//Get

	int getX()const; //Const dit que la fonction ne peux pas modifier la donnees membres 
	int getY()const;
	int getZ()const;

};