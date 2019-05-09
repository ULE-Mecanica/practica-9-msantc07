#include <stdio.h>
#include <stdlib.h>
int main(){
	int dato;
	int *vector;
	printf("Introduzca el numero de elementos que quiere en el vector: ");
	scanf("%d", &dato);
	vector=(int*)malloc(sizeof(int)*dato);
	printf("Introduzca uno a uno los elementos del vector separados por un intro: \n");
	for (int i=0;i<dato;i++){
		scanf("%i", &vector[i]);
	}
	int min = vector[0];
	for (int i=1;i<dato;i++){
		if (vector[i]<min){
			min = vector[i];
		}
	}
	printf("El numero más pequeño del vector es el: %i \n", min);
	free (vector);
	return 0;
}
