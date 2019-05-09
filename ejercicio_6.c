#include <stdio.h>
#include <stdlib.h>
int damepar(int num);
int espar(int num);
int introduce(int *matriz1, int num1, int num2);
int pinta(int *matriz2, int num3, int num4);
int main(){
	int dato1, dato2;
	int *matriz;
	printf("Introduzca el numero de filas: ");
	scanf("%d", &dato1);
	printf("Introduzca el numero de columnas: ");
	scanf("%d", &dato2);
	matriz=(int*)malloc(sizeof(int)*dato1*dato2);

	introduce(matriz, dato1, dato2);
	pinta(matriz, dato1, dato2);

	free (matriz);
	return 0;
}
int introduce(int *matriz1, int num1, int num2){
	int k=0;
	int i, j;
	for (i=0;i<num1;i++){
		for (j=0;j<num2;j++){
			k = damepar(k);			
			matriz1[(i*num2)+j] = k;
		}
	}
}
int pinta(int *matriz2, int num3, int num4){
	for (int i=0;i<num3;i++){
		for (int j=0;j<num4;j++){
			printf("%i ", *(matriz2+(i*num4)+j));
		}
		printf("\n");
	}
}
int damepar(int num){
	num++;
	while(!espar(num)){
		num++;
	}
	return num;
}
int espar(int num){
	if(num%2==0){
		return 1;
	}
	return 0;
}
