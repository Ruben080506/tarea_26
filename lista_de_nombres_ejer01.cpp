/*
- diseñe la funcion que ordene una lista de nombres de personas de forma ascendente (Burbuja)
- diseñe la funcion que ordene una lista de nombres de personas de forma descendente (shell)
*/


#include <iostream>
#include <vector>

using namespace std;

void imprimirVector(string vector[], int tamanio)
{
    cout << endl << "Los elementos del vector son: ";
    for (int k = 0; k < tamanio; k++)
    {
        cout << vector[k] << endl;
    }
}

void ordenBurbuja(string v[], int n)
{
    int i = 0, j = 0;
    string aux;

    for (i = 1; i < n; i++)
        for (j = 0; j < (n - i); j++)
        {
            if (v[j] > v[j + 1])
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
}

void ordenShellOptima3(string a[], int n)
{
    int i, j, inc;
    string temp;
    for (inc = 1; inc < n; inc = inc * 3 + 1)
        ;
    while (inc > 0)
    {
        for (i = inc; i < n; i++)
        {
            j = i;
            temp = a[i];
            while ((j >= inc) && (a[j - inc] > temp))
            {
                a[j] = a[j - inc];
                j = j - inc;
            }
            a[j] = temp;
        }
        inc = inc / 2;
    }
}

int main()
{
    const int MAX = 10;
    string nombres[MAX] = {"Guerra Juan", "Posligua Kleber", "Giron Noelia",
                           "Pila Juan", "Alvarado Galo", "Perlaza Pablo", "Gavica Andres",
                           "Torres Pedro", "Zambrano Martha", "Andrade Ana"};
    cout << endl << "Orden ascendente";
    string aux = " ";

    imprimirVector(nombres, MAX);
    ordenBurbuja(nombres, MAX);
    cout << endl << "Nombres ordenados";
    imprimirVector(nombres, MAX);

    ordenShellOptima3(nombres, MAX);
    cout << endl << "Nombres ordenados";
    imprimirVector(nombres, MAX - 1);

    return 0;
}


#include <iostream>
#include <vector>

using namespace std;

void imprimirVector(string vector[], int tamanio)
{
    cout << endl << "Los elementos del vector son: ";
    for (int k = 0; k < tamanio; k++)
    {
        cout << vector[k] << endl;
    }
}

void ordenBurbuja(string v[], int n)
{
    int i = 0, j = 0;
    string aux;

    for (i = 1; i < n; i++)
        for (j = 0; j < (n - i); j++)
        {
            if (v[j] > v[j + 1])
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
}

void ordenShellOptima3(string a[], int n)
{
    int i, j, inc;
    string temp;
    for (inc = 1; inc < n; inc = inc * 3 + 1)
        ;
    while (inc > 0)
    {
        for (i = inc; i < n; i++)
        {
            j = i;
            temp = a[i];
            while ((j >= inc) && (a[j - inc] > temp))
            {
                a[j] = a[j - inc];
                j = j - inc;
            }
            a[j] = temp;
        }
        inc = inc / 2;
    }
}

int main()
{
    const int MAX = 10;
    string nombres[MAX] = {"Dario Bone", "Yasird Sevilla", "Giron Noelia",
                           "Karla Pacheco", "Alvarado Galo", "Perlaza Pablo", "Gavica Andres",
                           "Torres Pedro", "Carlos Mora", "Andrade Ana"};
    cout << endl << "Orden ascendente";
    string aux = " ";

    imprimirVector(nombres, MAX);
    ordenBurbuja(nombres, MAX);
    cout << endl << "Nombres ordenados";
    imprimirVector(nombres, MAX);

    ordenShellOptima3(nombres, MAX);
    cout << endl << "Nombres ordenados";
    imprimirVector(nombres, MAX - 1);

    return 0;
}

