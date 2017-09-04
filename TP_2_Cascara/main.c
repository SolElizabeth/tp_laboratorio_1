#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float ingresarNumero1;
    float ingresarNumero2;
    float resultado;
    long long int resultadoFactorial;
    int flagX=0;
    int flagY=0;

    while(seguir=='s')
    {
        if(flagX==0)
        {
            printf("1- Ingresar 1er operando (A=x)\n");
        }
        else
        {
            printf("1- Ingresar 1er operando (A=%f)\n", ingresarNumero1);
        }

        if(flagY==0)
        {
            printf("2- Ingresar 2do operando (B=y)\n");
        }
        else
        {
            printf("2- Ingresar 2do operando (B=%f)\n", ingresarNumero2);
        }

        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            printf("Ingrese primer numero: ");
            scanf("%f", &ingresarNumero1);
            flagX=1;
            system("cls");
            break;
        case 2:
            printf("Ingrese otro numero:  ");
            scanf("%f", &ingresarNumero2);
            flagY=1;
            system("cls");
            break;
        case 3:
            resultado=sumar(ingresarNumero1,ingresarNumero2);
            printf("El resultado de la suma es: %f\n", resultado);
            system("pause");
            system("cls");
            break;
        case 4:
            resultado=restar(ingresarNumero1, ingresarNumero2);
            printf("El resultado de la resta es: %f\n", resultado);
            system("pause");
            system("cls");
            break;
        case 5:
            if(ingresarNumero2==0)
            {
                printf("ERROR\n");
                printf("Reingrese un segundo numero distinto de cero\n");
                system("pause");
                system("cls");

            }
            else
            {
                resultado=dividir(ingresarNumero1, ingresarNumero2);
                printf("El resultado de la division es: %f\n", resultado);
                system("pause");
                system("cls");
            }
            break;
        case 6:
            resultado=multiplicar(ingresarNumero1, ingresarNumero2);
            printf("El resultado de la multiplicacion es: %f\n", resultado);
            system("pause");
            system("cls");
            break;
        case 7:
            resultadoFactorial=factorear(ingresarNumero1);
            printf("El resultado de la factorizacion es: %lld\n", resultadoFactorial);
            system("pause");
            system("cls");
            break;
        case 8:
            resultado=sumar(ingresarNumero1,ingresarNumero2);
            printf("El resultado de la suma es: %f\n", resultado);
            resultado=restar(ingresarNumero1, ingresarNumero2);
            printf("El resultado de la resta es: %f\n", resultado);
            resultado=dividir(ingresarNumero1, ingresarNumero2);
            printf("El resultado de la division es: %f\n", resultado);
            resultado=multiplicar(ingresarNumero1, ingresarNumero2);
            printf("El resultado de la multiplicacion es: %f\n", resultado);
            resultadoFactorial=factorear(ingresarNumero1);
            printf("El resultado de la factorizacion es: %lld\n", resultadoFactorial);
            system("pause");
            system("cls");
            break;
        case 9:
            seguir = 'n';
            break;
        }
    }

    return 0;
}
