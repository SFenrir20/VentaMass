#pragma once 
#include <iostream>

using namespace std;
class Categoria
{
private:
	int CodigoCategoria;
	string NombreCategoria;

public:
	Categoria();
	Categoria(int, string);

	//set
	void setCodigoCategoria(int);
	void setNombreCategoria(string);

	//get
	void getCodigoCategoria();
	void getNombreCategoria();
};

Categoria::Categoria()
{
}
Categoria::Categoria(int CodigoCategoria, string NombreCategoria)
{
	this-> CodigoCategoria = CodigoCategoria;
	this-> NombreCategoria = NombreCategoria;
}
//set
void Categoria::setCodigoCategoria(int Cod)
{
	this->CodigoCategoria = Cod;
}
void Categoria::setNombreCategoria(string Nom)
{
	this->NombreCategoria = Nom;
}
//get
int Categoria::getCodigoCategoria()
{
	return this-> CodigoCategoria;
}
string Categoria::getNombreCategoria()
{
	return this->NombreCategoria;
}