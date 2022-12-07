#include <iostream>
#include <cstdlib>
#include <conio.h>
#include "controller/SesionController.h"
#include "controller/ClienteController.h"
#include "controller/PersonalController.h"
#include "controller/TipoPersonalController.h"
#include "controller/ProductoController.h"
#include "controller/CategoriaController.h"

using namespace std;
//Variables globales
SesionController *objSesionController = new SesionController();
ClienteController *objClienteController = new ClienteController();
PersonalController *objPersonalController = new PersonalController();
TipoPersonalController *TipController = new TipoPersonalController();
ProductoController *objProductoController = new ProductoController();
CategoriaController *objCategoriaController = new CategoriaController();

//Prototipos
void titulo();

//Seguridad
void IniciarSesion();

//Sistema principal
void MenuDelSistema();

//Clientes
void MenuDeClientes();
void AgregarClientes();
void ListarClientes();
void ModificarClientes();
void EliminarClientes();

//Personal
void MenuDePersonal();
void AgregarPersonal();
void ListarPersonal();
void ModificarPersonal();
void EliminarPersonal();

//Tipo de personal
void MenuDeTipoDePersonal();
void AgregarTipodePersonal();
void ListarTipodDePersonal();
void ModificarTipoDePersonal();
void EliminarTipoDePersonal();

//Productos
void MenuDeProductos();
void AgregarProductos();
void ListarProductos();
void ModificarProductos();
void EliminarProductos();

//Categoria de productos
void MenuDeCategoriaDeProductos();
void AgregarCategoriaDeProductos();
void ListarCategoriaDeProductos();
void ModificarCategoriaDeProductos();
void EliminarCategoriaDeProductos();

//venta
void MenuDeVenta();
int main ()
{
	IniciarSesion();
	return 0;
}

//Implementacion
void titulo()
{
	system("cls");
	cout << "_      _        _          _  _" << endl;
	cout << "\\ \\    / /       | |        |  \\/  |" << endl;
	cout << " \\ \\  / /_ _ _ | |_ _ _  | \\  / | _ _ _ " << endl;
	cout << "  \\ \\/ / _ \\ '_ \\| _/ _` | | |\\/| |/ _` / _|" << endl;
	cout << "   \\  /  _/ | | | || (| | | |  | | (| \\_ \"" << endl;
	cout << "    \\/ \\__|| ||\\\\,| ||  ||\\_,|_/\n"
		 << endl;
	cout << endl;
}