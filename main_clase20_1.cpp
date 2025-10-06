#include <stdio.h>
#define CANT_FILAS 3
#define CANT_COLUMNAS 3

main(){
	float matriz[CANT_FILAS][CANT_COLUMNAS];
	int i, j, k, aux;
	
	printf("Ingresar numeros a la matriz %d x %d: \n", CANT_FILAS, CANT_COLUMNAS);
	for(i = 0; i < CANT_FILAS; i++){
		printf("Fila %d: ", i);
		for(j = 0; j < CANT_COLUMNAS; j++){
			printf("\nColumna %d: ", j);
			fflush(stdin);
			scanf("%f", &(matriz[i][j]));
		}
	}
	
	printf("\nMatriz ingresada: \n", CANT_FILAS, CANT_COLUMNAS);
	for(i = 0; i < CANT_FILAS; i++){
		printf("\n");
		for(j = 0; j < CANT_COLUMNAS; j++){
			printf("%f  ", matriz[i][j]);
		}
	}
	
	for(i = 0; i < CANT_FILAS - 1; i++){
		for(j = i+1; j < CANT_FILAS; j++){
			if(matriz[i][0] > matriz[j][0]){
				for(k = 0; k < CANT_COLUMNAS; k++){
					aux = matriz[i][k];
					matriz[i][k] = matriz[j][k];
					matriz[j][k] = aux;
				}
			}
		}
	}
	
	printf("\nMatriz ordenada: \n", CANT_FILAS, CANT_COLUMNAS);
	for(i = 0; i < CANT_FILAS; i++){
		printf("\n");
		for(j = 0; j < CANT_COLUMNAS; j++){
			printf("%f  ", matriz[i][j]);
		}
	}
}
