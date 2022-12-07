#pragma once
#include <iostream>
#include "../model/Categoria.h"
#include <fstream>

using namespace std;
class CategoriaController
{
private:
	vector<Categoria> vectorCategoria;

public:
	CategoriaController();
	void agregar(Categoria);
	Categoria get(int);
	int size();
	int getCorrelativo();
	Categoria buscar(int);
	bool modificar(Categoria, Categoria);
	int getPostVector(Categoria);
	void eliminar(Categoria);
	void listar();
	string listarCategoria(Producto);
	void listar2();
	void reporte();
	void grabarEnArchivo(Categoria);
	void grabarModificarEliminar();
	void cargarDatosDelArchivoAlVector();
};
CategoriaController::CategoriaController()
{
	cargarDatosDelArchivoAlVector();
}
void CategoriaController::agregar(Categoria obj)
{
	vectorCategoria.push_back(obj);
}
Categoria CategoriaController::get(int pos)
{
	return vectorCategoria[pos];
}
int CategoriaController::size()
{
	return vectorCategoria.size();
}
int CategoriaController:: getCorrelativo()
{
	if (size() == 0)
	{
		return 1;
	}
	else 
	{
		return vectorCategoria[size() -1].getCorrelativo()+1;
	}
}
Categoria CategoriaController::buscar(int dato)
{
	Categoria objError;
	objError.setNombreCategoria("Error");
	for (int i = 0; i < vectorCategoria.size ; ++i)
	{
		if (dato == vectorCategoria[i].getCodigoCategoria())
		{
			return vectorCategoria[i];
		}
	}
	return objError;
}
bool CategoriaController::modificar(Categoria ObjViejo, Categoria ObjNuevo)
{
	for (int i = 0; i < vectorCategoria.size() ; ++i)
	{
		if (ObjViejo.getCodigoCategoria() == vectorCategoria[i].getCodigoCategoria())
		{
			vectorCategoria[i].setNombreCategoria(ObjNuevo.getNombreCategoria());
			return true;
		}
	}
	return false;
}
int CategoriaController::getPostVector(Categoria obj)
{
	for (int i = 0; i < vectorCategoria.size(); ++i)
	{
		if (obj.getCodigoCategoria() == vectorCategoria[i].getCodigoCategoria())
		{
			return i;
		}
	}
	return -1;
}
void CategoriaController::eliminar(Categoria objEncontrado)
{
	vectorCategoria.erase(vectorCategoria.begin() + getPostVector(objEncontrado));
}
void CategoriaController::listar()
{
	for (int i = 0; i < vectorCategoria.size(); ++i)
	{
		cout << "[" << vectorCategoria[i].getCodigoCategoria() <<"]\t" << vectorCategoria[i].getNombreCategoria() << endl;
	}
	cout << "Ingresar una opcion: ";
}
string CategoriaController::listarCategoria( Producto obj)
{
	string temporal
	for (int i = 0; i < vectorCategoria.size() ; ++i)
	{
	   if (obj.getCodigoCategoria() == vectorCategoria[i].getCodigoCategoria())
	   {
	   	 temporal = vectorCategoria[i].getCodigoCategoria();
	   }
	}
	return temporal;
}
void CategoriaController::listar2()
{
	cout << "Codigo\t Categoria de Producto\n ";
	for (int i = 0; i < vectorCategoria.size() ; ++i)
	{
		cout << vectorCategoria[i].getCodigoCategoria() << "\t" << vectorCategoria[i].getNombreCategoria() << "\n";
	}
}
void CategoriaController::grabarEnArchivo(Categoria obj)
{
	try
	{
		fstream archivoCategoria;
		archivoCategoria.open("Categoria.csv", ios::app);
		if (archivoCategoria.is_open())
		{
			archivoCategoria << obj.getCodigoCategoria() << ";" << obj.getNombreCategoria() << ";" << endl;
			archivoCategoria.close();
		}
	}
	catch(exception e)
	{
		cout << "ocurrio un error al grabar el archivo";
	}
}
void CategoriaController::grabarModificarEliminar()
{
	try
	{
		fstream archivoCategoria;
		archivoCategoria.open("Categoria.csv", ios::out);
		if (Categoria x : vector)
		{
			/* code */
		}
	}
}