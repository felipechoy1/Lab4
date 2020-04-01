/* Autor:F-Virtualbox  
Compilador: gcc (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0
Compilado: gcc  problema6.c -lm
librerias: <stdio.h>, <math.h>
Resúmen: Se lee un número y se realizan varias sumatorias en base a él.
Entradas: a,b,c,d
Salida: suma(a), sumab(b),sumac(c),sumad(d)
*/

//Librerias
#include <stdio.h>
#include <math.h>
//1. Se definen 4 funciones, cada una realizará cada sumatoria solicitada
float suma(float);
float sumab(float);
float sumac(float);
float sumad(float);
int main()
{
    //Se crea una variable de punto flotante para la primera sumatoria	      
	    printf("//\n \t PROBLEMA 3// \n");

        float a;
        do{
        printf("Ingrese hasta que número entero positivo n-esimo para las sumatorias :");
        scanf("%f",&a);
        }while (a<=0);//Solicitará ingresar enteros positivos, en caso negativo repetirá la pregunta cíclicamente.
        

       //Desplegando Sumatoria a)
      
        if(a==0)
        {
                printf("Éste número no está definido para la sumatoria a)\n");
        } //Se finaliza el caso en que se ingrese un 0 (ésto quedó de mas cuando termine de reparar el while, podría obviarse.

        else{
        printf("El resultado de la sumatoria a) es= %.2f \n",suma(a));
        } //Imprime el resultado de la función suma valuado en la variable a con 2 decimales.
        

        //Se crean 3 variables nuevas que adquieren el valor computado en a. ¿Por que no antes? Porque si fuese antes caerían dentro del if anterior.
        float b=a;
        float c=a;
	    float d=a;
   
    //Desplegando Sumatoria b)	

	if(b<2)
	{ printf("Este número no está definido para la sumatoria b)\n");
		
	} //Ignora todos los casos menores a 2

	else
	{
		printf("El resultado de la sumatoria b) es = %.2f \n", sumab(b));
		
	} //Imprime el resultado de la funcion sumab en la variable b con 2 decimales.
         
      //Desplegando suma c:

      if(c==0)
      {
	      printf("Éste número no está definido para la sumatoria c) \n");
      }	//Al igual que en la a, puede ser ignorable este if, en dado caso negaría todos los 0 con un mensaje de error.
      
      else
      {
             printf("El resultado de la sumatoria c) es= %.2f \n",sumac(c));
           } //Imprime el resultado de la función sumac en la variable c con 2 decimales.
      
     
      //Desplegando sumatoria c):

      if(d<2)
      {
	      printf("Éste número no está definido para la sumatoria d) \n");
      } //Imprime un mensaje de error si el número es menor que 2 ya que no está definido en la sumatoria.
      
      else
      {
	      printf("El resultado de la  sumatoria d es = %0.2f \n", sumad(d));
      } //Imprime el resultado de la función sumad en la variable d con 2 decimales

       return 0;
}


//Función sumatoria a)

float suma(float x){
	//caso base
	if(x==1)
	{
		x=-2;

	}

	else
	{
		if(x>1)
		{
			x=(suma(x-1)+(x*x*(x-3)));
		} //Caso general, es la suma del caso anterior mas el que está, el ciclo se repetirá hasta llegar al caso base en donde terminará el proceso if.
	}
                       
   
                    
return x; //Devuelve el valor almacenado en x.
}


//Función para la sumatoria b)
float sumab(float x)
{
	//caso base
	if(x==2)
	{
		x=3;
	}
	else
	{ if(x>1)
		{
		x=sumab(x-1) + (3/(x-1));

	}//Caso general, sumará el caso anterior y repite el ciclo hasta el inicial donde termina. (Igual al a cambiando el número del caso base y la funcion)
        }
return x; //Devuelve el valor almacenado en x en ésta función.
}

//Función para la sumatoria c)

float sumac(float x)
{       float k=(1/(sqrt(5))); //Se crea una constante para reducir el trabajo de escribir.
	//Caso base
    if(x==1)
	{
		x==1;
	}
	else if(x>1)
	{
		x=sumac(x-1)+(k*(pow(((1+sqrt(5))/2),x)-pow(((1-sqrt(5))/2),x))); //Se hace uso de pow y sqrt (potencia y raíz cuadrada) para ingresar la función (para esto es la librería math.h)
	}  //Caso general, hará lo mismo que las funciones anteriores en cuestión.
	return x; //Devuelve el valor de x para ésta función.
}

//Función para la sumatoria d)
float sumad(float x)
{  
    //Caso base (recordar que no está definida antes del 2)
	if(x==2)
        { x=0.70;
	}
        else if(x>2)
	{
		x = sumad(x-1) + 0.1*(3*(pow(2,(x-2)))+4); //Denuevo, ingreso de la función en términos de pow y sqrt de la librería math.h
	} //Caso general denuevo, hará el proceso similar a las funciones anteriores en cuestión.
        return x; //Devuelve el valor almacenado para este x de esta función. 
}
