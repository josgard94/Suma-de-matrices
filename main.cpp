/*
	Autor: Edgard  Diaz
	Este programa suma dos matrices, e. g. 
	
	| 2 1 | + | 1 2 | = | 3 3 | 
	| 1 2 |   | 2 1 |   | 3 3 |
	
	Visita mi canal  de YouTube: 
	https://www.youtube.com/channel/UC72s6VupjSyABlMZhDkFblg?view_as=subscriber
*/
#include <iostream>
using namespace std; 

int main(int argc, char ** argv)
{
	int fila = 0, columna = 0;
	float matriz_a[fila][columna], matriz_b[fila][columna], suma[fila][columna];
	cout<<"Numero de columnas"<<endl;
	cin>>columna;
	cout<<"Numero de filas"<<endl;
	cin>>fila;
	
	cout<<"Ingrese los valores de la matriz A:"<<endl;
	
	for(int i = 0; i < fila; i++)
	{
		for(int j = 0; j < columna; j++)
		{
			cout<<"fila: "<<i<<" columna: "<<j<<" ";
			cin>>matriz_a[i][j];
		}
	}
	
	cout<<"Ingrese los valores de la matriz B:"<<endl;
	
	for(int i = 0; i < fila; i++)
	{
		for(int j = 0; j < columna; j++)
		{
			cout<<"fila: "<<i<<" columna: "<<j<<" ";
			cin>>matriz_b[i][j];
		}
	}
	
	

	//Sumar matriz A + matriz B
	
	for(int i = 0; i < fila; i++)
	{
		for(int j = 0; j < columna; j++)
		{
			suma[i][j] = matriz_a[i][j] + matriz_b[i][j];
		}
	}
	
	cout<<"La suma de las matrices es: "<< endl;
	
	for(int i = 0; i < fila; i++)
	{	cout<<"| ";
		for(int j = 0; j < columna; j++)
		{
			cout<<suma[i][j]<<" ";
		}
		cout<<"|"<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
