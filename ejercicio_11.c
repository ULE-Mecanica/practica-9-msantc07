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
	int k = (dato1*dato2);
	for (int i=0;i<dato1;i++){
		for (int j=0;j<dato2;j++){
			*(matriz+(i*dato2)+j) = k;
			k--;
		}
	}
	for (int i=0;i<dato1;i++){
		for (int j=0;j<dato2;j++){
			printf("%i ", *(matriz+(i*dato2)+j));
		}
		printf("\n");
	}
	free (matriz);
	return 0;
}
