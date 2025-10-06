#include <stdio.h>
#define CANT_ALUMNOS 5

main(){
	char opcion;
	int i, j, aux;
	bool salir = false;
	int vector_notas[CANT_ALUMNOS];
	int vector_materias[CANT_ALUMNOS];
	int vector_paralelo[CANT_ALUMNOS];
	
	do{
		printf("\nIngresar una opcion: \n");
		printf("	a) Ingresar notas y cantidad de materias de %d alumnos.\n", CANT_ALUMNOS);
		printf("	b) Ordenar los estudiantes por nota descendente (mayor a menor nota).\n");
		printf("	c) Mostrar notas y cantidad de materias por nota descendente.\n");
		printf("	d) Mostrar notas y cantidad de materias en oden inverso a lo ingresado.\n");
		printf("	e) Salir del programa.\n");
		fflush(stdin);
		scanf("%c", &opcion);
		
		while(opcion != 'a' && opcion != 'b' && opcion != 'c' && opcion != 'd' && opcion != 'e' ){
			printf("Opcion invalida. Reingrese una opcion: ");
			fflush(stdin);
			scanf("%c", &opcion);
		}
		
		switch(opcion){
			case 'a':
				printf("Ingresar notas.\n");
				for(i = 0; i < CANT_ALUMNOS; i++){
					printf("Nota alumno %d: ", i+1);
					scanf("%d", &vector_notas[i]);
				}
				
				printf("\nIngresar cantidad de materias.\n");
				for(i = 0; i < CANT_ALUMNOS; i++){
					printf("cantidad de materias alumno %d: ", i+1);
					scanf("%d", &vector_materias[i]);
				}
				printf("\nIngreso completado.\n");
			break;
			
			case 'b':
				for(i = 0; i < CANT_ALUMNOS; i++){
					vector_paralelo[i] = i;
				}
				
				for(i = 0; i < CANT_ALUMNOS - 1; i++){
					for(j = i+1; j < CANT_ALUMNOS; j++){
						if(vector_notas[vector_paralelo[i]] < vector_notas[vector_paralelo[j]]){
							aux = vector_paralelo[i];
							vector_paralelo[i] = vector_paralelo[j];
							vector_paralelo[j] = aux;
						}
					}
				}
				printf("Ordenamiento completado.\n");
			break;
			
			case 'c':
				printf("\nNotas: ");
				for(i = 0; i < CANT_ALUMNOS; i++){
					printf("%d  ", vector_notas[vector_paralelo[i]]);
				}
				printf("\nCantidad de materias: ");
				for(i = 0; i < CANT_ALUMNOS; i++){
					printf("%d  ", vector_materias[vector_paralelo[i]]);
				}
			break;
			
			case 'd':
				printf("\nNotas orden original inverso: ");
				for(i = CANT_ALUMNOS - 1; i >= 0 ; i--){
					printf("%d  ", vector_notas[i]);
				}
				printf("\nCantidad de materias orden original inverso: ");
				for(i = CANT_ALUMNOS - 1; i >= 0 ; i--){
					printf("%d  ", vector_materias[i]);
				}
			break;
			
			case 'e':
				salir = true;
			break;
		}
	}while(salir == false);
	printf("\nFin del programa.");
}
