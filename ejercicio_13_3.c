#include <stdio.h>
#include <stdlib.h>
void crea (int *matriz, int n);
void pinta (int *matriz, int n);
int main(){
	int dato1 = 6;
	int *matriz;
	matriz=(int*)malloc(sizeof(int)*dato1*dato1);
	crea(matriz, dato1);
	pinta(matriz, dato1);
	free (matriz);
	return 0;
}
void crea (int *matriz, int n){
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (i==j)
				*(matriz+(i*n)+j) = 1;
			else
				*(matriz+(i*n)+j) = 0;
		}
	}
}
void pinta (int *matriz, int n){
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			printf("%i ", *(matriz+(i*n)+j));
		}
		printf("\n");
	}
}
