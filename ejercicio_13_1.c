#include <stdio.h>
#include <stdlib.h>
int main(){
	int dato1;
	int *matriz;
	printf("Introduzca el numero de filas y columnas: ");
	scanf("%d", &dato1);
	matriz=(int*)malloc(sizeof(int)*dato1*dato1);
	for (int i=0;i<dato1;i++){
		for (int j=0;j<dato1;j++){
			if (i==j)
				*(matriz+(i*dato1)+j) = 1;
			else
				*(matriz+(i*dato1)+j) = 0;
		}
	}
	for (int i=0;i<dato1;i++){
		for (int j=0;j<dato1;j++){
			printf("%i ", *(matriz+(i*dato1)+j));
		}
		printf("\n");
	}
	free (matriz);
	return 0;
}
