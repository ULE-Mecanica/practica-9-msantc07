#include <stdio.h>
#include <stdlib.h>
int dameprimo(int num);
int esprimo(int num);
int main(){
	int dato1;
	int *vector;
	printf("Introduzca el numero de elementos del vector: ");
	scanf("%d", &dato1);
	vector=(int*)malloc(sizeof(int)*dato1);

	int k=0;
	int i;
	for (i=0;i<dato1;i++){
		k = dameprimo(k);			
		vector[i] = k;
	}
	for (int i=0;i<dato1;i++){
		printf("%i ", vector[i]);
	}
	printf("\n");
	free (vector);
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
