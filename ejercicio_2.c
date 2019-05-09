#include <stdio.h>
#include <stdlib.h>
int main(){
	int dato1, dato2;
	int *matriz;
	printf("Introduzca el numero de filas: ");
	scanf("%d", &dato1);
	printf("Introduzca el numero de columnas: ");
	scanf("%d", &dato2);
	matriz=(int*)malloc(sizeof(int)*dato1*dato2);
	printf("Introduzca uno a uno los elementos de la matriz: \n");
	int suma = 0;
	for (int i=0;i<dato1;i++){
		printf("Introduzca la fila %i \n", (i+1));
		for (int j=0;j<dato2;j++){
			scanf("%i", (matriz+(i*dato2)+j));
			suma = suma + *(matriz+(i*dato2)+j);
		}
	}
	for (int i=0;i<dato1;i++){
		for (int j=0;j<dato2;j++){
			printf("%i ", *(matriz+(i*dato2)+j));
		}
		printf("\n");
	}
	printf("La suma de los elementos es: %i \n", suma);
	free (matriz);
	return 0;
}
