#include <stdio.h>
#include <stdlib.h>
float media(int *vec, int num);
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
	printf("El valor medio del vector es: %f \n", media(vector, dato));
	free (vector);
	return 0;
}
float media(int *vec, int num){
	float media = 0;
	int contador = 0;
	for (int i=0;i<num;i++){
		media = media + vec[i];
		contador++;
	}
	media = media / contador;
	return media;
}
