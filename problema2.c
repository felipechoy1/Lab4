/* Autor:F-Virtualbox  
Compilador: gcc (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0
Compilado: gcc  problema2.c
librerias: <stdio.h>
Resúmen: Se solicitan 5 numeros y se ordenarán de forma ascendente
Entradas: vector[5]
Salida: Impresión de vector[5] 
*/
//Librerias

#include <stdio.h>
//PROBLEMA 2////

int main(){
	//1. Se declaran variables, un vector para almacenar datos , un iterador, un vector de posición y un auxiliar.
	int userinput[100];
        int i, pos, aux;
        printf("\n \t //PROBLEMA 2//\n");

	printf("\n \t Ingrese 5 números enteros separados por la tecla 'ENTER' o 'INTRO'...\n // OJO solo enteros, si ingresa una letra o un decimal el programa colapsará, por lo que es su culpa si esto ocurre en algún momento//.\n ");
        
	//2. Se inicia un ciclo for para escanear cada dato que el usuario ingrese.
        for(i=0;i<5;i++)
	{
		scanf("%i",&userinput[i]);
	}	

	//3. Se ordenan las componentes del vector mediante el método de burbuja.
        

	for(i=0;i<5;i++) //En el segundo toma cada valor y lo reordena denuevo.
	{
		for(int j=0;j<5;j++) 
		{
			if(userinput[j]>userinput[j+1]) //En el segundo ciclo se valúa el j-esimo con el siguiente, si éste es mayor el valor auxiliar tomára el valor del vector siguiente, luego el vector volverá a tomar el valor del j-esimo que va a leer el for, finalmente devuelve ese valor guardado en el axuiliar. 
			{
				aux=userinput[j+1];
				userinput[j+1] = userinput[j];
				userinput[j]=aux;
			}
		}
        
        }
	
	//4.Se hace otro ciclo for para ir mostrando cada elemento, ya que están reordenados (esto se puede hacer igual haciendo 5 printf(vector[i-esimo elegido).
	printf("\n Orden ascendente desplegado: ");
        for (i=0;i<5;i++)
		{
			printf(" \n%i \n", userinput[i]);

                }


return 0;
}
