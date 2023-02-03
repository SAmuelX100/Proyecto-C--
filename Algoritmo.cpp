#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int numerosPrueba [] = {505,2,75,88,2550,885,25,365,17885,5,1,17,72,8556,6,225,368,7,100,4,3,9,27,1844,1917,666};

    int i, j, aux;

    int tamanoArrayAux = sizeof(numerosPrueba) / sizeof (int);

    cout<< " >> Array sin ordenar: ";

    for (i = 0; i < tamanoArrayAux; i++)
    {
        cout << numerosPrueba[i] << " // ";

    }

    cout << endl;

    //Algoritmo de ordenamiento
    for (i = 0; i < tamanoArrayAux; i++ )
    {
        for (j = 0; j < tamanoArrayAux; j++)
        {
            if (numerosPrueba[j] > numerosPrueba[j + 1])
            {
                aux = numerosPrueba[j];
                numerosPrueba[j] = numerosPrueba [j + 1];
                numerosPrueba [j + 1 ] = aux;
            }
        }
    }

    cout << endl;

    cout<<" >> Imprimiendo Array ordernado: " ;

    for (i = 0; i < tamanoArrayAux; i++)
    {
        cout << numerosPrueba[i] << " // ";

    }

    getch();
    return 0;
}
