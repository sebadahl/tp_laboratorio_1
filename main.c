/***************************************************************
*Programa: TP 01 - Calculadora.
*
*Objetivo: Realizar cinco operaciones matematicas, suma, resta, division, multipilcacion
    y factorial, de los números ingresados por el usuario.
*
*Versión 3.0 07/04/2016
*
*Autor: Sebastian Dahl.
*
****************************************************************/





#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"


int main()
{
char seguir='n';
int opcionElegida=0;
int operadorx=0;
int operadory=0;
int flag1=0;
int flag2=0;


do
{
        system("cls");
        printf("\t-_-Calculadora-_-\n\n");

        validarFlag1(flag1,operadorx);
        validarFlag2(flag2,operadory);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n\n");

    opcionElegida=tomarDato();
    opcionElegida=validarRango(opcionElegida, 1 , 9 );
    system("cls");

    switch(opcionElegida)
    {
        case 1:
            printf("\t***Valor de operador A***\n\n");
            operadorx=tomarDato();
            flag1=1;
            break;

        case 2:
            printf("\t***Valor de operador B***\n\n");
            operadory=tomarDato();
            flag2=1;
            break;

        case 3:
            sumarDosOperadores( operadorx, operadory, flag1, flag2);
            system("pause");
            break;

        case 4:
            restarDosOperadores( operadorx, operadory, flag1, flag2);
            system("pause");
            break;

        case 5:
            dividirDosOperadores( operadorx, operadory, flag1, flag2);
            system("pause");
         break;

        case 6:
            multiplicarDosOperadores( operadorx, operadory, flag1, flag2);
            system("pause");
            break;

        case 7:
            printf("\t***Factoreal de A***\n\n");
            printf("El factorial de A es: %d\n\n",factorialA(operadorx,flag1));
            system("pause");
         break;

        case 8:
            printf("\t***Todas las operaciones***\n\n");
            sumarDosOperadores( operadorx, operadory, flag1, flag2);
            restarDosOperadores( operadorx, operadory, flag1, flag2);
            dividirDosOperadores(operadorx, operadory, flag1, flag2);
            multiplicarDosOperadores(operadorx, operadory, flag1, flag2);
            printf("\t***Factoreal de A***\n\n");
            printf("El factorial de A es: %d\n\n",factorialA(operadorx,flag1));
            system("pause");
         break;

        case 9:
            seguir='n';
            break;

        default:
         printf("Fuera del rango, seleccione una opcion de 1 a 9");
         break;
    }





}while(seguir!='s');

return 0;
}




