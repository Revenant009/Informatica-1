#include <stdio.h>
#define CANT_FILAS 2
#define CANT_COLUMNAS 3

main(){
	float matriz[CANT_FILAS][CANT_COLUMNAS];
	int i, j;
	
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
}
