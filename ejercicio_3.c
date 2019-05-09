#include <stdio.h>
#include <stdlib.h>
int dameprimo(int num);
int esprimo(int num);
int main(){
	int dato1, dato2;
	int *matriz;
	printf("Introduzca el numero de filas: ");
	scanf("%d", &dato1);
	printf("Introduzca el numero de columnas: ");
	scanf("%d", &dato2);
	matriz=(int*)malloc(sizeof(int)*dato1*dato2);

	int k=0;
	int i, j;
	for (i=0;i<dato1;i++){
		for (j=0;j<dato2;j++){
			k = dameprimo(k);			
			matriz[(i*dato2)+j] = k;
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
int dameprimo(int num){
	num++;
	while(!esprimo(num)){
		num++;
	}
	return num;
}
int esprimo(int num){
	int i;	
	for(i=2;i<num;i++){
		if(num%i==0){
			return 0;
		}
	}
	return 1;
}
