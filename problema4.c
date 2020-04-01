/* Autor:F-Virtualbox  
Compilador: gcc (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0
Compilado: gcc  problema4.c
librerias: <stdio.h> , <math.h> , <stdlib.h>
Resúmen: Se leen 2 matrices 3x3 y se realizan operaciones con ellas.
Entradas: x,matA,matB
Salida: a,det,minv,vjord,w,vectormult 
*/

//Librerias
#include<stdio.h>
#include<math.h>
#include <stdlib.h>
int main()
{
    printf("\n \t //PROBLEMA 4//\n");
	
    printf(" \n Escriba sólamente numeros enteros, en caso contrario el programa colapsará desplegando valores erróneos\n");
    int x;
    printf("Escriba una constante: \n");
	scanf("%i", &x);

	//1. Creación de la matríz matA mediante doble ciclo for. 
	//El primer ciclo se encarga de iterar las filas, mientras que el segundo las columnas. Solicita los datos al usuario y luego los almacena en el respectivo espacio del vector.
	printf("\n\t MATRIZ A: \n");
	int matA[3][3]={{0}},i,j,l;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("introduzca los datos para la matriz a [fila %i][columna %i]:\n",i+1,j+1);
		scanf("%i", &matA[i][j]);
		}
	}
	//2. Creación de la matríz matB similar a matA.
	//**Nota: Aún si se reutiliza el iterador i,j no importa ya que al inicio de los ciclos for se resetean a 0.
        printf("\n \t MATRIZ B: \n");
	int matB[3][3]={{0}};
	for(i=0;i<3;i++)
	{for(i=0;i<3;i++)
		{for(j=0;j<3;j++)
			{
				printf("introduzca los datos para la matriz b[ fila%i][columna%i]\n",i+1,j+1);
				scanf("%i",&matB[i][j]);
			}




		}
			

	}
        //A continuación se despliegan en pantalla las matrices ordenadas, se hace uso denuevo de 2 ciclos for para desplegar los términos (análogo a como se solicitaron)

	printf("\n \t MATRIZ A : \n");
	for(i=0;i<3;i++)
	{       printf("\n"); //Se deja un printf en cada pasada de el segundo iterador para dejar linea entre cada fila.
		for(j=0;j<3;j++)
		{
			printf("%6i",matA[i][j]);
		}

	}
	
	printf("\n \t MATRIZ B : \n");
        for(i=0;i<3;i++)
        {       printf("\n");
                for(j=0;j<3;j++)
                {
                        printf("%6i",matB[i][j]);
                }

        } 

	//Primera operación: matA por la constante x.
	//Su realización es, denuevo, con un ciclo for, la sutil diferencia radica en multiplicar x*(elemento[fila][columna] en cada ciclo que pase.
        printf("\n \tCONSTANTE C POR MATRIZ A: \n"); 
	for(i=0;i<3;i++)
        {       printf("\n");
                for(j=0;j<3;j++)
                {       
			printf("%6i",x*matA[i][j] );
                }

        } 

//Segunda Operación: suma de matA y matB.
//Denuevo, con el uso del ciclo for se cambia ahora el operador dentro del printf por la suma de ambos.
        printf("\n \tSUMA ENTRA MATRIZ A Y B: \n");
        for(i=0;i<3;i++)
        {       printf("\n");
                for(j=0;j<3;j++)
                {       
                        printf("%6i",(matB[i][j]+matA[i][j]) );
                }

        } 
//Tercera Operación: Resta de matA y matB.
//Denuevo, es un copia y pega de lo anterior cambiando el signo "+" por un "-"
              printf("\n \tSUMA ENTRA MATRIZ A Y B: \n"); 
        for(i=0;i<3;i++)
        {       printf("\n");
                for(j=0;j<3;j++)
                {       
                        printf("%6i",(matA[i][j]-matB[i][j]) );
                }

        } 
//Cuarta Operación: Multiplicación de matA y matB.
//Para este caso se hace uso de una iteración más. La razón es que almacenaremos cada suma de multiplicaciones entre cada componente. Cabe recordar que como no avanzan de la misma forma A y B (salvo la diagonal) la 3era iteración cumple esa función, así que se almacena cada multiplicación de el A j-ésimo con el B-késimo los cuales recorren en distintos ciclos, así luego se almacena la suma de las multiplicaciones en una variable nueva llamada suma. Luego se almacena en un vector.
 	int vectormult[3][3]={{0}},suma;
	for(i=0;i<3;i++)
        {       printf("\n");
                for(j=0;j<3;j++)
                {
			for(l=0;l<3;l++)
			{
				suma +=matA[j][l]*matB[l][i];
                        
			}
                 vectormult[i][j]=suma;
			
		}

        } 

	//Se hace el ciclo for de siempre pero con la matriz de multiplicación.
	printf("Multiplicación entre matA y matB");
        for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%6i ",vectormult[i][j]);
		}
	}
//Operación 5 (e) determinante de matA
//Para no extenderme, bueno, para hacer algo que no sea tan dificil de imaginar, se asignarán valores de la matriz a las siguientes variables, y luego se hará la operación matemática de determiannte con ellas, reutilizaré i y l para no extenderme con muchas.

       int a=matA[0][0],b=matA[0][1],c=matA[0][2],d=matA[1][0],e=matA[1][1],f=matA[1][2],g=matA[2][0],h=matA[2][1];

       i=matA[2][2];
int det=(a*(e*i-f*h))-(b*(d*i-f*g))+(c*(d*h-e*g));
       
       printf("\n \tLA DETERMINANTE DE LA MATRIZ A ES: %i\n",det);
       
//Operacion y (f) traspuesta de matB:
//Para la traspuesta es tan sencillo como repetir el ciclo pero cambiar la iteración de orden, osea en lugar de tener valor[i][j] tenerlo como valor[j][i].
        printf("Traspuesta de la matriz B\n"); 
        for(i=0;i<3;i++)
        {       printf("\n");
                for(j=0;j<3;j++)
                {
                        printf("%6i",matB[j][i]);
                }

        } 

//Operación 7 (g): Inversa de matA:
//Para la inversa, sabemos que invA=detA^-1 * adj^-1A. La inversa ya la tenemos, así que nos limitamos a hallar el adjunto y unirlo. 

//Hallando el adjunto inverso: Para el adjunto se hace uso de un for doble, en teoría primero sacaríamos la transpuesta invirtiendo el printo de [i][j] a [j][i] (como con matB), luego obtener una matriz de determinantes menores en ella y finalmente dividir cada componente por la determinatne original. Bueno, esto lo resumiré en el print. ¿Como? Sencillo, al igual que en la traspuesta se invierte de i,j a j,i, luego se reduce a hallar la determinante de cada componente. Finalmente se divide cada aij entre la determinante y se despliega.
        int minv[3][3];
	if(det==0){printf("\n \t La matriz A no tiene inversa!\n");


	}
	else{
	minv[0][0]=((matA[1][1]*matA[2][2]-matA[1][2]*matA[2][1])/det);
	minv[0][1]=((matA[1][2]*matA[2][0]-matA[1][0]*matA[2][2])/det);
	minv[0][2]=((matA[1][0]*matA[2][1]-matA[1][1]*matA[2][0])/det);
	minv[1][0]=((matA[0][2]*matA[2][1]-matA[0][1]*matA[2][2])/det);
	minv[1][1]=((matA[0][0]*matA[2][2]-matA[0][2]*matA[2][0])/det);
	minv[1][2]=((matA[0][1]*matA[2][0]-matA[0][0]*matA[2][1])/det);
	minv[2][0]=((matA[0][1]*matA[1][2]-matA[0][2]*matA[1][1])/det);
	minv[2][1]=((matA[0][2]*matA[1][0]-matA[0][0]*matA[1][2])/det);
	minv[2][2]=((matA[0][0]*matA[1][1]-matA[0][1]*matA[1][0])/det);

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%6i",minv[j][i]);
		}
	}
	}
//Operacion 9 (h): Reducción de Gauss de matB.
//La reducción de gauss jordan procura revisar si la diagonal es igual, luego de ello procede a reordenar para tener 0's debajo de la diagonal.

	int vjord[3][3];
	int w;
	printf("\n \tLa solución con Gauss Jordan en B es\n:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i!=j)
			{
				w=matB[i][j]/matB[j][i];
				for(l=0;l<4;l++)
				{
					vjord[i][l]=matB[i][l]-w*matB[i][l];
				}
			}
		}
	}

	for(i=0;i<3;i++)
	{       printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%6i",vjord[i][j]);
		}
	}
return 0;
}
