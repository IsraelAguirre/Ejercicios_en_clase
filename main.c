/******************************************************************************

realizar un programa en c que permita determinar el area del circulo.
Datos Entrada
real: radio, pi, area=0
Proceso
Escribir("Ingrese")

*******************************************************************************/
#include <stdio.h>//Definicion de librerias
# define pi 3.1416//difinicion de coinstantes

void main()//definicion d ela funcion principal
{
    float radio,area=0;//Declaracion de variable
    printf("ingrese el radio");//impresion de pantalla
    scanf("%f",&radio);//lectura de la variable radio
    area= pi*radio*radio;//Proceso
    printf("el area es %.2f",area);//Salida del area del circulo
}