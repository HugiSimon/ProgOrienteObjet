#include "Cvecteur.h"

Cvecteur::Cvecteur()
{
	this->m_nX = 0;
	this->m_nY = 0;
	this->m_nZ = 0;
}

void Cvecteur::setX(int nX)
{
	this->m_nX = nX;
}

void Cvecteur::setY(int nY)
{
	this->m_nY = nY;
}

void Cvecteur::setZ(int nZ)
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
