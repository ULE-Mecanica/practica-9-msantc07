#include <stdio.h>
#include <stdlib.h>
int introduce(int *matriz1, int num1, int num2);
int main(){
	int dato1, dato2, dato3;
	int *matriz;
	printf("Introduzca el numero de filas: ");
	scanf("%d", &dato1);
	printf("Introduzca el numero de columnas: ");
	scanf("%d", &dato2);
	matriz=(int*)malloc(sizeof(int)*dato1*dato2);
	introduce(matriz, dato1, dato2);
	for (int i=0;i<dato1;i++){
		for (int j=0;j<dato2;j++){
			printf("%i ", *(matriz+(i*dato2)+j));
		}
		printf("\n");
	}
	free (matriz);
	return 0;
}
int introduce(int *matriz1, int num1, int num2){
	int k=0;
	int i, j;
	for (i=0;i<num1;i++){
		for (j=0;j<num2;j++){
			if (i==j){
				matriz1[(i*num2)+j] = 1;
			}
			else{
				matriz1[(i*num2)+j] = 0;
			}
		}
	}
}
