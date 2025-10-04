#include <stdio.h>
#define CANT_NUMEROS 5
main(){
	int numeros[CANT_NUMEROS] = {55, 44, 33, 22, 11};
	int i, j, aux;
	
	printf("Ordenamiento de un vector de menor a mayor \n");
	
	printf("Vector a ordenar: \n");
	for(i = 0; i < CANT_NUMEROS; i++){
		printf("%d  ", numeros[i]);
	}
	
	printf("\n");
	for(i= 0; i < CANT_NUMEROS - 1; i++){
		for(j = i+1; j < CANT_NUMEROS; j++){
			if(numeros[i] > numeros[j]){
				aux = numeros[i];
				numeros[i] = numeros[j];
				numeros[j] = aux;
			}
		}
	}
	
	printf("Vector ordenado: \n");
	for(i = 0; i < CANT_NUMEROS; i++){
		printf("%d  ", numeros[i]);
	}
}
