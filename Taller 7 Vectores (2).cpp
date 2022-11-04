//Universidad Tecnologica de Pereira.
//Ingeniería en Sistemas y Computación.
//IS284 Programación 2.
//Valentina Rosas Coral.
//Taller 7 Vectores y Matrices.
//Observaciones.
//Tipo de notacion Pascal Case.

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int rango, n;

//Genera numeros aleatorios

int Aleatorio(int rango)
{
    srand (time(NULL));
    return ((rand() %rango)+1);
}

//1.Hacer una función que reciba un entero N y devuelva un vector de tamaño N, con enteros leídos por teclado.
//Nombre de la funcion: Ejercicio 1
//Objetivo: Hacer un vector que reciba un numero n, y reciba los datos del tamaño dado para posteriormente imprimir dicho vector,
//Ejemplo: Si el usuario ingresa el vector 3, ingresamos los 3 vectores (1,1,1) e imprimira el vectores dado.

void Ejercicio1()
{
    int num;
    printf("Ingrese el tamano del vector: ");
    scanf("%i", &n);

    int tamN[n];

    for (int i= 0; i < n; i++)
    {
        printf("Ingrese el dato para la posicion [%i] del vector: ", i);
        scanf("%i", &num);
        getchar();
        tamN[i] = {num};
    }

    for (int a = 0; a < n; a++)
    {
       printf("\nEl vector en la posicion [%i] : %i", a, tamN[a]);
    }
}

//2.Hacer lo mismo que en el punto anterior, pero generando los datos aleatoriamente.
//Nombre de la funcion: Ejercicio 2
//Objetivo: Hacer un vector de tamaño n e imprimir el los vectores dependiendo de n, con numeros aleatorios.
//Ejemplo: Si el usuario ingresa el vector 3 imprimira 3 numeros aleatorios ej:(1,2,3)

void Ejercicio2()
{
    int b,num;
    printf("Ingrese el tamano del vector: ");
    scanf("%i", &n);

    int tamN[n];
    b=n;
    for (int i= 0; i < n; i++)
    {
        num=Aleatorio(b);
        tamN[i] = {num};
        b++;
    }

    for (int a = 0; a < n; a++)
    {
       printf("\nEl vector en la posicion [%i] : %i", a, tamN[a]);
    }
}

//3.Dado un vector de enteros y un número X, devolver el numero de veces que está X en el vector.
//Nombre de la funcion: Ejercicio 3
//Objetivo: recibir un vector n y un numero x, mostrar en pantalla cuantas veces esta x en los vectores.
//Ejemplo: Si el usuario ingresa 2 e ingresamos los numeros (1,1), y tenemos como x a 1, entonces indicara que x esta dos veces en el vector.

void Ejercicio3()
{
    int num;
    printf("Ingrese el tamano del vector: ");
    scanf("%i", &n);

    int tamN[n];

    for (int i= 0; i < n; i++)
    {
        printf("Ingrese el dato para la posicion [%i] del vector: ", i);
        scanf("%i", &num);
        getchar();
        tamN[i] = {num};
    }

    printf("\n");

    int contador, x;
    contador=0;

    printf("Ingrese el numero que quiere buscar dentro del vector: ");
    scanf("%i", &x);

    for (int i=0; i<n; i++)
    {
        if (tamN[i] == x)
            {
                contador= contador +1;
            }
    }

    if (contador>= 1)
        printf("\nEl %i esta %i veces en el vector. ", x, contador);
    else
        printf("\nEl %i NO esta en el vector", x);
}

//4.Dada un vector, hacer una función que invierta sus datos en el mismo y lo devuelva invertido.
//Nombre de la funcion: Ejercicio 2
//Objetivo: Dados los valores de un vector imprimir dichos valores invertidos.
//Ejemplo: Si el usuario ingresa un vector con valores (1,2) posteriormente imprimira el (2,1).

void Ejercicio4()
{
    int num, x;

    printf("Ingrese el tamano del vector: ");
    scanf("%i", &n);

    int tamN[n];

    for (int i= 0; i < n; i++)
    {
        printf("Ingrese el dato para la posicion [%i] del vector: ", i);
        scanf("%i", &num);
        getchar();
        tamN[i] = {num};
    }

    int i=0;
    for (x=n-1; x>=0; x--)
    {
        for (int a = 1; a<=1; a++)
        {
           printf("\nEl vector en la posicion [%i] : %i", i, tamN[x]);
            i= i+1;
        }
    }

}


//5.Hacer una función que reciba un vector, y devuelva una copia en otra estructura similar.
//Nombre de la funcion: Ejercicio 5
//Objetivo: Dado un vector mostrar en pantalla una copia de este.
//Ejemplo: Si el usuario ingresa un vector con valores (1,2) posteriormente imprimira el (1,2).

void Ejercicio5()
{
    int num;
    float promedio;

    printf("Ingrese el tamano del vector: ");
    scanf("%i", &n);

    int tamN[n], tamNb[n];

    for (int i= 0; i < n; i++)
    {
        printf("Ingrese el dato para la posicion [%i] del vector a: ", i);
        scanf("%i", &num);
        getchar();
        tamN[i] = {num};
        tamNb[i] = {num};
        promedio= promedio+ num;
    }

    for (int a = 0; a < n; a++)
    {
       printf("\nEl vector b en la posicion [%i] : %i", a, tamNb[a]);
    }

}

//6.Hacer una función que reciba un vector de enteros y devuelva el promedio de los datos existentes.
//Nombre de la funcion: Ejercicio 6
//Objetivo: Dado los valores de un vector mostrar el promedio de estos.
//Ejemplo: Si el usuario ingresa un vector con valores (1,2) imprimira el promedio (1.50).

void Ejercicio6()
{
    int num;
    float Ejercicio6;

    printf("Ingrese el tamano del vector: ");
    scanf("%i", &n);

    int tamN[n];

    for (int i= 0; i < n; i++)
    {
        printf("Ingrese el dato para la posicion [%i] del vector: ", i);
        scanf("%i", &num);
        getchar();
        tamN[i] = {num};
        Ejercicio6= Ejercicio6+ num;
    }

    Ejercicio6= Ejercicio6/n;

    printf("\nEl promedio de los datos del vector es: %f", Ejercicio6, "\n");
}

//7.Hacer una función que reciba un vector de enteros y devuelva la posición del mayor valor de los datos existentes.
//Nombre de la funcion: Ejercicio 7
//Objetivo: Dado los valores de un vector mostrar en pantalla el mayor de estos.
//Ejemplo: Si el usuario ingresa un vector con valores (1,2) imprimira el valor (2).

void Ejercicio7()
{
    n= 5;
    int tamN[n];
    int b=n;
    int num;

    for (int i= 0; i < n; i++)
    {
        num=Aleatorio(b);
        tamN[i] = {num};
        b++;
    }

    for (int a = 0; a < n; a++)
    {
       printf("\nEl vector en la posicion [%i] : %i", a, tamN[a]);
    }


    if ((tamN[0]>=tamN[1]) && (tamN[0]>=tamN[2]) && (tamN[0]>=tamN[3]) && (tamN[0]>=tamN[4]))
    {
        printf("\nLa posicion que contiene el numero mayor es: 0 donde se encuentra %d", tamN[0]);
    }
    else
    {
        if ((tamN[1]>=tamN[0]) && (tamN[1]>=tamN[2]) && (tamN[1]>=tamN[3]) && (tamN[1]>=tamN[4]))
        {
            printf("\nLa posicion que contiene el numero mayor es: 1 donde se encuentra %d", tamN[1]);
        }
        else
        {
            if((tamN[2]>=tamN[0]) && (tamN[2]>=tamN[1]) && (tamN[2]>=tamN[3]) && (tamN[2]>=tamN[4]))
            {
                printf("\nLa posicion que contiene el numero mayor es: 2 donde se encuentra %d", tamN[2]);
            }
            else
            {
                if ((tamN[3]>=tamN[0]) && (tamN[3]>=tamN[1]) && (tamN[3]>=tamN[2]) && (tamN[3]>=tamN[4]))
                {
                    printf("\nLa posicion que contiene el numero mayor es: 3 donde se encuentra %d", tamN[3]);
                }
                else
                {
                    if ((tamN[4]>=tamN[0]) && (tamN[4]>=tamN[1]) && (tamN[4]>=tamN[2]) && (tamN[4]>=tamN[3]))
                    {
                        printf("\nLa posicion que contiene el numero mayor es: 4 donde se encuentra %d", tamN[4]);
                    }
                    else
                    {
                        if ((tamN[0]==tamN[1]) && (tamN[1]==tamN[2]) && (tamN[2]==tamN[3]) && (tamN[3]==tamN[4]))
                        {
                            printf("\nLos numeros en el vector son iguales \n");
                        }
                    }
                }
            }
        }

    }
}

//8.Hacer una función que reciba un vector de enteros e indique si está ordenado ascendentemente.
//Nombre de la funcion: Ejercicio 8
//Objetivo: Dado un vector indicar si esta de manera ascendentemente.
//Ejemplo: Si el usuario ingresa un vector con valores (1,2,3,4,5) indicara que esta de forma ascendentemente..

void Ejercicio8()
{
    n=5;
    int tamN[n];
    int num;

    printf("\nA continuacion ingresara los valores para el vector de tamano 5, para saber si este se encuentra en orden ascendente o descendente \n");
    for (int i= 0; i < n; i++)
    {
        printf("Ingrese el dato para la posicion [%i] del vector: ", i);
        scanf("%i", &num);
        getchar();
        tamN[i] = {num};
    }

    if ((tamN[0]<=tamN[1]) && (tamN[1]<=tamN[2]) && (tamN[2]<=tamN[3]) && (tamN[3]<=tamN[4]))
    {
        printf("\nLos numeros del vector se encuentran en orden ascendente \n");
    }
    else
    {
        if ((tamN[0]>=tamN[1]) && (tamN[1]>=tamN[2]) && (tamN[2]>=tamN[3]) && (tamN[3]>=tamN[4]))
        {
            printf("\nLos numeros del vector se encuentran en orden descendente \n");
        }
        else
        {
            printf("\nLos numeros del vector no se encuentran ordenados \n");
        }
    }


}

//Menu

void menu()
{
    int opcion=0;

    printf("\nProcedimientos con vectores. Elija una de las siguientes opciones \n\n");
    printf("\nOpcion 1. Hacer una función que reciba un entero N y devuelva un vector de tamaño N, con enteros leídos por teclado.\n");
    printf("\nOpcion 2. Hacer lo mismo que en el punto anterior, pero generando los datos aleatoriamente. \n");
    printf("\nOpcion 3. Dado un vector de enteros y un número X, devolver el numero de veces que está X en el vector. \n");
    printf("\nOpcion 4. Dada un vector, hacer una función que invierta sus datos en el mismo y lo devuelva invertido.\n");
    printf("\nOpcion 5. Hacer una función que reciba un vector, y devuelva una copia en otra estructura similar. \n");
    printf("\nOpcion 6. Hacer una función que reciba un vector de enteros y devuelva el promedio de los datos existentes.\n");
    printf("\nOpcion 7. Hacer una función que reciba un vector de enteros y devuelva la posición del mayor valor de los datos existentes.\n");
    printf("\nOpcion 8. Hacer una función que reciba un vector de enteros e indique si está ordenado ascendentemente. \n");
    printf("\nOpcion 0. Salir \n");

    printf("\n\n Ingrese la opcion deseada:");
   scanf ("%d",&opcion);

    if (opcion == 0)
    {
        printf("\nUsted ha elegido salir del programa, hasta luego \n");
        system("pause");
        system("cls");
    }
    else
    {
        if (opcion == 1)
        {
            printf("\nCree su propio vector  \n");
            Ejercicio1();
            system("pause");
            system("cls");
            menu();
        }
        else
        {
            if (opcion == 2)
            {
                printf("\nVector con valores aleatorios \n");
                Ejercicio2();
                system("pause");
                system("cls");
                menu();
            }
            else
            {
                if (opcion == 3)
                {
                    printf("\nVeces que x esta en el vector  \n");
                    Ejercicio3();
                    system("pause");
                    system("cls");
                    menu();
                }
                else
                {
                    if (opcion == 4)
                    {
                        printf("\nInvertir un vector  \n");
                        Ejercicio4();
                        system("pause");
                        system("cls");
                        menu();
                    }
                    else
                    {
                        if (opcion == 5)
                        {
                            printf("\nCopia de un vector  \n");
                            Ejercicio5();
                            system("pause");
                            system("cls");
                            menu();
                        }
                        else
                        {
                            if (opcion == 6)
                            {
                                printf("\nPromedio de los valores del vector  \n");
                                Ejercicio6();
                                system("pause");
                                system("cls");
                                menu();
                            }
                            else
                            {
                                if (opcion == 7)
                                {
                                    printf("\nPosicion del mayor de los datos \n");
                                    Ejercicio7();
                                    system("pause");
                                    system("cls");
                                    menu();
                                }
                                else
                                {
                                    if (opcion == 8)
                                    {
                                        printf("\nOrden del vector \n");
                                        Ejercicio8();
                                        system("pause");
                                        system("cls");
                                        menu();
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
main()
{
    menu();
}
