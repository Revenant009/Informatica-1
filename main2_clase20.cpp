#include <stdio.h>
#define CANT_ALUMNOS 5 
#define CANT_MATERIAS 3

main(){
	float notas[CANT_ALUMNOS][CANT_MATERIAS];
	float aux;
	int nro_orden, i, j;
	char salir = 'n';
	
	for(i = 0; i < CANT_ALUMNOS; i++){
		for(j = 0; j < CANT_MATERIAS; j++){
			notas[i][j] = 0;
		}
	}
	
	do{
		printf("Ingresar numero de orden: ");
		scanf("%d", &nro_orden);
		printf("Para alumno %d ingresar: \n", nro_orden);
		for(i = 0; i < CANT_MATERIAS; i++){
			printf("	Materia %d: ", i+1);
			scanf("%f", &aux);
			notas[nro_orden][i] = aux;
		}
		
		printf("\nSalir? ");
		fflush(stdin);
		scanf("%c", &salir);
	}while(salir == 'n');
	
	for(i = 0; i < CANT_ALUMNOS; i++){
		printf("\n");
		for(j = 0; j < CANT_MATERIAS; j++){
			printf("%.2f ", notas[i][j]);
		}
	}
	printf("\nFin del programa.");
}
