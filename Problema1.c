/* Autor:F-Virtualbox  
Compilador: gcc (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0
Compilado: gcc  problema1.c 
librerias: <stdio.h>, <string.h>
Resúmen: Se da un menú de opciones entre ascendente y descendente a un usuario, de la opción se despliega un orden.
Entradas: temp
Salida: imprimir vector[10] 
*/

//Librerias
#include<stdio.h>
#include <string.h>
int main()
{       //1. Se declaran variables, un vector temporal para chequear si es letra y el otro que almacena los 10 números.
	//
	char temp[64]; //Variable temporal, almacenará hasta 64 caracteres si el usuario teclea de mas 
        int vector[10]={2,4,6,8,10,12,14,16,18,20}; //Vector que almacena los 10 números	
        int i; //Iterador

	//Mensaje de inicio
        printf("\n \t //PROBLEMA 1// \n");
        printf("\n Escriba la forma que desea ser desplegado");
        printf("\n Pulsa 'a' para orden Ascendente");
        printf("\n Pulsa 'd' para orden Descendente\n");

	while (fgets(temp,64,stdin)) //Ciclo while, volverá a leer el valor asignado al vector temporal hasta que alguna condición lo rompa.
	{  
		if(strncmp(temp,"a",1)==0) //Caso Ascendente
		{

       //Imprimirá el vector con un ciclo for desde el primero al último (como ya está ordenado bastara con ir del primero al último).
	printf("\n Orden ascendente desplegado: "); 
        for (i=0;i<10;i++)
		{
			printf(" \n%i \n", vector[i]);
                }
                break; //Se rompe el ciclo y termina el programa.
                }  
               
		else if(strncmp(temp,"d",1)==0) //Caso descendente
		{
		

			for(i=9;i>=0;i--) //Imprimirá el vector con un ciclo for en sentido contrario, por eso cambia el set.
			{

				printf("%i\n",vector[i]);
                        }
	          	break;
		}
		else
			//Cualquier otro caso repite el mensaje inicial pero no rompe el ciclo while.
		{
			printf("\n \tPOR FAVOR, ELIJA 'a' o 'd' \n");
			printf("\n Pulsa 'a' para orden Ascendente");
                        printf("\n Pulsa 'd' para orden Descendente\n");

		}
 
     }
     return 0;
}
