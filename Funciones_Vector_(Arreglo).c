/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define tam 10//tamaño 
void inicializarArre(int[]);
void datosVector(int);
void main() 
{
    int arreglo[tam]={3,2,-1,5},cantNum;
    inicializarArre(arreglo);
    printf("Ingrese la cantidad de elementos del vector: ");
    scanf("%i",&cantNum);
    datosVector(cantNum);
    
}
 void inicializarArre(int arreg[tam])//arreglo[tamaño]
 {
     int cont=0;
     while(cont<4)//4 es el tamaño
     {
         printf("arreglo[%i]=%i\n",cont,arreg[cont]);
         cont++;
     }
 }
 void datosVector(int cant)
 {
     int cont=0,arreglo[tam];
     while(cont<cant)
     {
         printf("Ingrese el elemento[%i]: ",cont);
         scanf("%i",&arreglo[cont]);
         cont++;
     }
     printf("Elementos del vector\n");
     cont=0;
     while(cont<cant)
     {
         printf("Elemento[%i]=%i\n",cont,arreglo[cont]);
         cont++;
     }
 }


