#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
float sumar (float ingresarNumero1, float ingresarNumero2)
{
    float resultado;
    resultado=ingresarNumero1+ingresarNumero2;
    return resultado;
}
float restar(float ingresarNumero1, float ingresarNumero2)
{
    float resultado;
    resultado=ingresarNumero1-ingresarNumero2;
    return resultado;
}
float dividir(float ingresarNumero1, float ingresarNumero2)
{
    float resultado;
    resultado=ingresarNumero1/ingresarNumero2;
    return resultado;
}
float multiplicar(float ingresarNumero1, float ingresarNumero2)
{
    float resultado;
    resultado=ingresarNumero1*ingresarNumero2;
    return resultado;
}
long long int factorear(int ingresarNumero1)
{
    long long int resultadoFactorial;
    if(ingresarNumero1==0)
    {
        return 1;
    }
    else
    {
        resultadoFactorial=ingresarNumero1*factorear(ingresarNumero1-1);
        return resultadoFactorial;
    }
}




