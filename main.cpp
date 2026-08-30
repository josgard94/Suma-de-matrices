/*
    Autor: Edgard Diaz

    Este programa suma dos matrices.

    Ejemplo:

    | 2 1 |   +   | 1 2 |   =   | 3 3 |
    | 1 2 |       | 2 1 |       | 3 3 |
*/

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Función para ingresar los valores de una matriz
void ingresarMatriz(vector<vector<float>>& matriz, const string& nombre)
{
    cout << "\nIngrese los valores de la matriz " << nombre << ":\n";

    for (size_t i = 0; i < matriz.size(); i++)
    {
        for (size_t j = 0; j < matriz[i].size(); j++)
        {
            cout << "Fila " << i + 1
                 << ", columna " << j + 1 << ": ";

            cin >> matriz[i][j];
        }
    }
}

// Función para mostrar una matriz
void mostrarMatriz(const vector<vector<float>>& matriz)
{
    for (const auto& fila : matriz)
    {
        cout << "| ";

        for (float valor : fila)
        {
            cout << setw(6) << valor << " ";
        }

        cout << "|\n";
    }
}

// Función para sumar dos matrices
vector<vector<float>> sumarMatrices(
    const vector<vector<float>>& matrizA,
    const vector<vector<float>>& matrizB)
{
    size_t filas = matrizA.size();
    size_t columnas = matrizA[0].size();

    vector<vector<float>> resultado(
        filas,
        vector<float>(columnas)
    );

    for (size_t i = 0; i < filas; i++)
    {
        for (size_t j = 0; j < columnas; j++)
        {
            resultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    return resultado;
}

int main()
{
    int filas;
    int columnas;

    cout << "===== SUMA DE MATRICES =====\n\n";

    // Solicitar dimensiones
    cout << "Numero de filas: ";
    cin >> filas;

    cout << "Numero de columnas: ";
    cin >> columnas;

    // Validar dimensiones
    if (filas <= 0 || columnas <= 0)
    {
        cout << "\nError: las filas y columnas deben ser mayores que 0.\n";
        return 1;
    }

    // Crear las matrices después de conocer sus dimensiones
    vector<vector<float>> matrizA(
        filas,
        vector<float>(columnas)
    );

    vector<vector<float>> matrizB(
        filas,
        vector<float>(columnas)
    );

    // Ingresar matrices
    ingresarMatriz(matrizA, "A");
    ingresarMatriz(matrizB, "B");

    // Realizar suma
    vector<vector<float>> resultado =
        sumarMatrices(matrizA, matrizB);

    // Mostrar resultado
    cout << "\n===== RESULTADO =====\n\n";

    mostrarMatriz(resultado);

    return 0;
}
