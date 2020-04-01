/* Autor:F-Virtualbox  
Compilador: gcc (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0
Compilado: gcc  problema5.c -lm
librerias: <stdio.h> , <math.h>
Resúmen: Se realiza el factorial de un número
Entradas: En main: x
Salida: función factorial valuada en x.
*/

//Librerias
#include <stdio.h>
#include <math.h>

//1. Definimos una funcion (que utilizará enteros obviamente), en donde se ejecutará la recursión para poder dar el factorial.

int factorial(int);
int main(){
    printf("\n \t //PROBLEMA 5// \n");
	//3. Se declara una variable x en donde se almacenará el número ingresado por el usuario,
	int x;
	printf("Ingrese el número del cual desee su factorial\n ");
	scanf("%i",&x);
	printf("%i",factorial(x)); //Se imprime el valor de nuestra función valuada en x. 
			
return 0;
}

//2. Declaramos una variable que es donde se valuará nuestra función
int factorial(int n)
{
	if(n==0) //Caso base: Sabemos que 0! =0, es por eso el primer if.
	{
	n=1;

	}
	else //Caso contrario (el general), se valuará la función con ELLA MISMA y se reducirá en 1 el valor de n, ésto hasta llegar a 0 que, entonces devolverá nuestro valor n valuado (por eso return n).
	{
		n =n*factorial(n-1);
	}
return n;
}
