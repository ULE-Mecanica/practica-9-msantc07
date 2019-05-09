#include <stdio.h>
#include <stdlib.h>
int main(){
	int dato1, dato2, dato3;
	int *matriz;
	printf("Introduzca el numero de filas: ");
	scanf("%d", &dato1);
	printf("Introduzca el numero de columnas: ");
	scanf("%d", &dato2);
	matriz=(int*)malloc(sizeof(int)*dato1*dato2);
	for (int i=0;i<dato1;i++){
		for (int j=0;j<dato2;j++){
			if (i==j){
				dato3 = ((i+1)*(j+1));
			}
			else{
				dato3 = ((i+1)-(j+1));
			}
			*(matriz+(i*dato2)+j) = dato3;
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
