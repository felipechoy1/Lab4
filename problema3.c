/* Autor:F-Virtualbox  
Compilador: gcc (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0
Compilado: gcc  problema3.c
librerias: <stdio.h>, <math.h>
Resúmen: Se solicitan coordenadas x,y,z de 2 vectores y luego se realizan operaciones con ellos.
Entradas: vector1[3] y vector2[3]
Salida: y,m,w
*/

//Librerias
#include <stdio.h>
#include <math.h>

float main()
{       //1. Se declaran los 2 vectores de entrada.
	float vector1[100]; //No importa realmente el tamaño del vector ya que a continuación solo se rellenarán (y usaran) 3 slots.
        float vector2[100];
        printf("\n \t//PROBLEMA 3// \n");
	//2. Se solicita al usuario ingresar cada coordenada.
	printf("\n Anote solo números, si anota una letra el programa colapsara, por lo tanto es su culpa si no obtiene lo que buscaba\n");
	printf(" \nAnote la coordenada x del vector 1\n");
        scanf("%f", &vector1[1]);
	
	printf(" \nAnote la coordenada y del vector 1\n");
        scanf("%f", &vector1[2]);   
	
	printf(" \nAnote la coordenada z del vector 1\n");
        scanf("%f", &vector1[3]);
	
	printf(" \nAnote la coordenada x del vector 2\n");
        scanf("%f", &vector2[1]);
	
	printf(" \nAnote la coordenada y del vector 2\n");
        scanf("%f", &vector2[2]);
	
	printf(" \nAnote la coordenada z del vector 2\n");
        scanf("%f", &vector2[3]);
        
	//a) MAGNITUDES:
	//Para la magnitues se declaran 2 variables, se almacenará directamente la operación.
	float m=sqrt(vector2[1]*vector2[1]+vector2[2]*vector2[2]+vector2[3]*vector2[3]);  //Aquí simplemente se escribe la operación de magnitud.
	float y= sqrt(vector1[1]*vector1[1]+vector1[2]*vector1[2]+vector1[3]*vector1[3]);
	
	//Se despliegan los resultados en pantalla.
        printf("\n a) Magnitudes de los vectores '1' y '2'");
	printf("\n |vector 1|= %.2f",y);
	printf("\n |vector 2|= %.2f \n",m);
	
        
	//b) SUMA VECTORIAL:
        //Se reciclan las variables enteriores, con la mínima diferencia que ahora almacenarán la suma de la misma componente entre ambos vectores
	y=vector1[1]+vector2[1];
 	m=vector1[2]+vector2[2];
	float w= vector1[3]+vector2[3]; //Nueva variable declarada para almacenar la suma en z.
        
	//Se imprime luego la suma en forma de vector.
	printf("\n b) Suma de vectores '1' y '2'");
	printf("\n Vector_1 + Vector_2 = (%.2f,%'.2f,%.2f) \n",y,m,w);
        
        //c) PRODUCTO PUNTO (PRODUCTO floatERNO):
	//Se reutilizan las variables anteriores, donde ahora ocuparán la multiplicación entre las componentes de ambos vectores (donde i=j).
        y=vector1[1]*vector2[1];
	m=vector1[2]*vector2[2];
        w=vector1[3]*vector2[3];

	//Se imprime el resultado de la suma de ellos (definición de producto punto).
	printf("\n c) Producto interno"); 
	printf("\n <Vector_1|Vector_2>  = %.2f \n",y+m+w);
        
	//c) PRODUCTO VECTORIAL (PRODUCTO CRUZ):
	//De nuevo, reciclando las variables anteriores se les asigna ahora los valores de lo que vendrían siendo las (mini-determinantes) para hallar el valor de cada componente en el nuevo vector generado por el producto cruz.
        y=vector1[2]*vector2[3]-vector1[3]*vector2[2];
	m=vector1[1]*vector2[3]-vector1[3]*vector2[1];
	w=vector1[1]*vector2[2]-vector1[2]*vector2[1];
	
	//Se imprime el resultado en forma de vector.
        printf("\n d) Producto vectorial entre 1 y 2");
        printf("\n Vector_1 X Vector_2 =(%.2f,%.2f,%.2f)\n",y,m,w);

return 0;
}
