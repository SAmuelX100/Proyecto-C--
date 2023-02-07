#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    // Declaracion de variables
    int definirSizeArray;
    int i, j, aux;

    // Declaracion del tamano del array.
    cout << " >> Ingrese el tamano del array: ";
    cin >> definirSizeArray;

    //Declaracion del array utilizando el auxiliar de tamano
    int numerosPrueba[definirSizeArray];

    //Funcion Srand.
    srand(time(NULL));

    //Este ciclo for se utiliza para iterar el array e ir rellenando sus posiciones con numeros random
    for (int m = 0; m < definirSizeArray; m++){
        int numeroRandom = rand()%definirSizeArray;
        numerosPrueba[m] = numeroRandom;
    }

    cout << endl;

    // Hace una referencia al tamaño del Array, haciendo más fácil trabajar con este
    int tamanoArrayAux = sizeof(numerosPrueba) / sizeof(int);

    cout << " >> Array sin ordenar: " << endl; // Simple letrero

    for (i = 0; i < tamanoArrayAux; i++) // Ciclo for para mostrar el array desordenado
    {
        cout << "  >> " << numerosPrueba[i] << endl;
    }

    cout << endl;

    // Algoritmo de ordenamiento
    for (i = 0; i < tamanoArrayAux; i++)
    {
        for (j = 0; j < tamanoArrayAux; j++)
        {
            if (numerosPrueba[j] > numerosPrueba[j + 1])
            {
                aux = numerosPrueba[j];
                numerosPrueba[j] = numerosPrueba[j + 1];
                numerosPrueba[j + 1] = aux;
            }
        }
    }

    cout << endl;

    cout << " >> Imprimiendo Array ordernado: " << endl; // Simple letrero

    //Ciclo For para imprimir el array ya ordenado
    for (i = 0; i < tamanoArrayAux; i++)
    {
        cout << "  >> " << numerosPrueba[i] << endl;
    }

    getch();
    return 0;
}
