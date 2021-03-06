#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;
class Password
{
public:
	//Variable que mantiene el programa corriendo en loop.
	bool RunProgram = true;

	//Miembros que definiran los requisitos de la contraseņa.
	const int MinPassLenght = 8; //Tamaņo minimo de la contraseņa.
	const int RequiredNums = 1; //Cantidad de digitos del 0 al 9 requeridos en la contraseņa.
	const int RequiredSpecialChar = 1; //Cantidad de caracteres especiales requeridos en la contraseņa.
	const int RequiredCapitalChar = 1; //Cantidad de mayusculas requeridas en la contraseņa.

	//Funciones prototipos publicas.
	Password(); //Constuctor
	void requestPass(); //Funcion que pide al usuario una contraseņa.
	string generatePass(); //Funcion que genera una contraseņa basada en los requisitos.

private:
	//Miembros privados que contienen todos los digitos posibles dentro de una contraseņa.
	const string Chars = "abcdefghijklmnopqrstuvwxyz"; //Caracteres minusculas.
	const string CapitalChars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; //Caracteres mayusculas.
	const string Nums = "0123456789"; //Caracteres numericos.
	const string SpecialChar = "!$&?*/\\"; //Caracteres especiales.

	void addDigit(string& password, string availableDigits); //Funcion que permite aņadir caracteres desde una cadena de string a la contraseņa generada.

	bool verifyPass(const string& password); //Funcion que permite validar una contraseņa con los requisitos propuestos.

	//Funciones privadas para criterios de contraseņas
	bool countCharacters(const string &password); //Cuenta los caracteres.
	bool checkForNums(const string& password); //Verifica que existan numeros en la contraseņa.
	bool checkforSpecialChar(const string& password); //Verifica que existan caracteres especiales en la contraseņa.
	bool checkCapital(const string& password); //Verifica que existan mayusculas en la contraseņa.
	bool checkCharRepeat(const string& password); //Verifica si existen repeticiones seguidas de caracteres.
};

