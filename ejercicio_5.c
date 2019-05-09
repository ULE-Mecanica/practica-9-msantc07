#include <stdio.h>
#include <stdlib.h>
int main(){
	int dato1=10;
	int dato2=10;
	int *matriz;
	int k=1;
	matriz=(int*)malloc(sizeof(int)*dato1*dato2);
	for (int i=0;i<dato1;i++){
		for (int j=0;j<dato2;j++){
			*(matriz+(i*dato2)+j) = k;
			k++;
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
