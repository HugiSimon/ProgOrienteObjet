#include "Cvecteur.h"

Cvecteur::Cvecteur()
{
	this->m_nX = 0;
	this->m_nY = 0;
	this->m_nZ = 0;
}

Cvecteur::Cvecteur(int nX, int nY, int nZ):m_nX(nX),m_nY(nY),m_nZ(nZ) //Un raccourci de code qui fait la meme chose
{
	/*this->m_nX = nX;
	this->m_nY = nY;
	this->m_nZ = nZ;*/
}

void Cvecteur::setX(const int nX)
{
	this->m_nX = nX;
}

void Cvecteur::setY(const int nY)
{
	this->m_nY = nY;
}

void Cvecteur::setZ(const int nZ)
{
	this->m_nZ = nZ;
}

int Cvecteur::getX() const
{
	return this->m_nX;
}

int Cvecteur::getY() const
{
	return this->m_nY;
}

int Cvecteur::getZ() const
{
	return this->m_nZ;
}
