/** \brief  La funcion recibe dos datos enteros(int) los valida por medio de flags para realizar la suma. En caso contrario los vuelve a solicitar.
 *
 * \param A(int) hace referencia al primer dato cargado por el usuario.
 * \param B(int) hace referencia al segundo dato cargado por el usuario.
 * \param f1(int) hace referencia a la bandera para validar que el primer dato haya sido cargado.
 * \param f2(int) hace referencia a la bandera para validar que el segundo dato haya sido cargado.
 * \return Sin retorno(void)
 *
 */






/******************************/
void sumarDosOperadores(int A, int B, int f1, int f2)
{
    if(f1==1 && f2==1)
    {
        printf("\t***Suma de dos operadores***\n\n");
        printf("El resultado de la suma es: %d\n\n",A+B);
    }
    else
    {
        printf("Error.Falta ingresar operandos.");
    }

}

/******************************/

/** \brief  La funcion recibe dos datos enteros(int) los valida por medio de flags para realizar la resta. En caso contrario los vuelve a solicitar.
 *
 * \param A(int) hace referencia al primer dato cargado por el usuario.
 * \param B(int) hace referencia al segundo dato cargado por el usuario.
 * \param f1(int) hace referencia a la bandera para validar que el primer dato haya sido cargado.
 * \param f2(int) hace referencia a la bandera para validar que el segundo dato haya sido cargado.
 * \return Sin retorno(void)
 *
 */


/******************************/

int restarDosOperadores(int A, int B, int f1, int f2)
{
    if(f1==1 && f2==1)
    {
        printf("\t***Resta de dos operadores***\n\n");
        printf("El resultado de la resta es: %d\n\n",A-B);
    }
    else
    {
        printf("Error.Falta ingresar operandos.");
    }

}

/******************************/

/** \brief  La funcion recibe dos datos enteros(int) los valida por medio de flags para realizar la multiplicacion. En caso contrario los vuelve a solicitar.
 *
 * \param A(int) hace referencia al primer dato cargado por el usuario.
 * \param B(int) hace referencia al segundo dato cargado por el usuario.
 * \param f1(int) hace referencia a la bandera para validar que el primer dato haya sido cargado.
 * \param f2(int) hace referencia a la bandera para validar que el segundo dato haya sido cargado.
 * \return Sin retorno(void)
 *
 */

/******************************/

float dividirDosOperadores(int A, int B, int f1, int f2)
{
    printf("\t***Division de dos operadores***\n\n");
    if(f1==1 && f2==1 && B!=0)
    {

        printf("El resultado de la division es: %.2f\n\n",(float)A/B);
    }
    else
    {
        printf("Error.Falta ingresar operandos.");
    }

}

/******************************/

/** \brief  La funcion recibe dos datos enteros(int) los valida por medio de flags para realizar la multiplicacion. En caso contrario los vuelve a solicitar.
 *
 * \param A(int) hace referencia al primer dato cargado por el usuario.
 * \param B(int) hace referencia al segundo dato cargado por el usuario.
 * \param f1(int) hace referencia a la bandera para validar que el primer dato haya sido cargado.
 * \param f2(int) hace referencia a la bandera para validar que el segundo dato haya sido cargado.
 * \return Sin retorno(void)
 *
 */

/******************************/

int multiplicarDosOperadores(int A, int B, int f1, int f2)
{
    if(f1==1 && f2==1)
    {
        printf("\t***Multiplicacion de dos operadores***\n\n");
        printf("El resultado de la multiplicacion es: %d\n\n",A*B);
    }
    else
    {
        printf("Error.Falta ingresar operandos.");
    }

}

/******************************/

/** \brief  La funcion recibe un dato entero(int) lo valida por medio de un flag y realiza el factorial. En caso contrario los vuelve a solicitar.
 *
 * \param A(int) hace referencia al primer dato cargado por el usuario.
 * \param f1(int) hace referencia a la bandera para validar que el primer dato haya sido cargado.
 * \return resultado(int) valor resultante del factorial.
 *
 */

/******************************/

int factorialA(int A, int f1)
{

    int resultado;

    if(f1==1)
    {
        if(A!=1)
        {
            resultado=A*factorialA(A-1, f1);
        }
        else
        {
            resultado=1;
        }

    }

    else
    {
        printf("Error.Falta ingresar operandos.");
    }

return resultado;

}

/******************************/

/** \brief  La funcion recibe tres datos enteros(int) los valida por medio de un bucle while validar que el dato ingresado se encuentre dentro del rango asignado.
 *
 * \param I(int) hace referencia al dato ingresado por el usuario.
 * \param J(int) hace referencia al minimo dato del rango.
 * \param K(int) hace referencia al maximo dato del rango.
 * \return I(int) dato validado.
 *
 */

/******************************/

int validarRango(int I, int J, int K)
{
    while(I<J || I>K)
    {
        printf("Error.Ingrese un opcion dentro del rango %d a %d\n\n", J, K);
        printf("Ingrese un numero: ");
        scanf("%d",&I);
    }
    return I;
}
/******************************/

/** \brief  La funcion solicita un numero.
 *
 * \param resultado(int) variable donde quedara contenido el valor ingresado.
 * \return resultado(int) retorna el numero ingresado.
 *
 */

/******************************/

int tomarDato(void)
{
    int resultado;
    printf("Ingrese un numero: ");
    scanf("%d",&resultado);
    return resultado;
}

/******************************/

/** \brief  La funcion recibe dos datos enteros(int) para asignar un campo con dos textos variables segun las condiciones del flag.
 *
 * \param f1(int) hace referencia al dato de la bandera.
 * \param x(int) hace referencia al dato ingresado por el usuario.
 * \return sin retorno(void).
 *
 */

/******************************/

void validarFlag1(int f1, int x)
{
    if(f1==0)
        {
            printf("1- Ingresar primer operando (A= sin asignar)\n");
        }

        else
        {
            printf("1- Primer operando ingresado (A= %d)\n",x);
        }
}

/******************************/

/** \brief  La funcion recibe dos datos enteros(int) para asignar un campo con dos textos variables segun las condiciones del flag.
 *
 * \param f2(int) hace referencia al dato de la bandera.
 * \param y(int) hace referencia al dato ingresado por el usuario.
 * \return sin retorno(void).
 *
 */

/******************************/

void validarFlag2(int f2, int y)
{

    if(f2==0)
        {
            printf("2- Ingresar segundo operando (B= sin asignar)\n");
        }

        else
        {
            printf("2- Segundo operando ingresado (B= %d)\n",y);
        }
}

/******************************/


