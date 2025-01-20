//OchoSeis
//TiempoTraduccion=00:02
//j38
#include <iostream>

#define TAMANIO_ARREGLO 5
#define C_0 0
#define C_1 1

using namespace std;

int main()
{
    int arregloEnteros[TAMANIO_ARREGLO],arregloEnterosAlReves[TAMANIO_ARREGLO];
    int i,j;
    for(i = C_0; i < TAMANIO_ARREGLO; i++)
    {
        cout << "Dame el valor en la posicion " << i << " : ";
       cin >> arregloEnteros[i];
    }

    j = TAMANIO_ARREGLO;
    i = C_0;
    do
    {
        j--;
        arregloEnterosAlReves[j] = arregloEnteros[i];
        i++;
    }
    while(i < TAMANIO_ARREGLO);

    i = C_0;
    while(i < TAMANIO_ARREGLO)
    {
        cout << arregloEnterosAlReves[i] << " ";
        i++;
    }


}
