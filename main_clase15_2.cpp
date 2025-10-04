#include <stdio.h>
#define CANT_NUMEROS 10

main(){
	int numeros[CANT_NUMEROS];
	char opcion;
	bool salir = false;
	int i, j, aux;
	
	do{
		printf("Opciones: \n");
		printf("	a) Ingresar %d numeros a un vector.\n", CANT_NUMEROS);
		printf("	b) Ordenar el vector de menor a mayor.\n");
		printf("	c) Ordenar el vector de mayor a menor.\n");
		printf("	d) Finalizar programa.\n");
		printf("Ingresar una opcion: ");
		fflush(stdin);
		scanf("%c", &opcion);
		
		while(opcion != 'a' && opcion != 'b' && opcion != 'c' && opcion != 'd'){
			printf("Opcion invalida. Reingrese la opcion: ");
			fflush(stdin);
			scanf("%c", &opcion);
			printf("\n");
		}
		
		switch(opcion){
			case 'a':
				printf("Ingresar %d numeros: \n", CANT_NUMEROS);
				for(i = 0; i < CANT_NUMEROS; i++){
					printf("%d-  ", i+1);
					scanf("%d", &numeros[i]);
				}
				printf("Ingreso completado: ");
				for(i = 0; i < CANT_NUMEROS; i++){
					printf("%d  ", numeros[i]);
				}
				printf("\n");
			break;
			
			case 'b':
				for(i = 0; i < CANT_NUMEROS - 1; i++){
					for(j = i+1; j < CANT_NUMEROS; j++){
						if(numeros[i] > numeros[j]){
							aux = numeros[i];
							numeros[i] = numeros[j];
							numeros[j] = aux;
						}
					}
				}
				
				printf("Vector ordenado de menor a mayor:	");
				for(i = 0; i < CANT_NUMEROS; i++){
					printf("%d  ", numeros[i]);
				}
				printf("\n");
			break;
			
			case 'c':
				for(i = 0; i < CANT_NUMEROS - 1; i++){
					for(j = i+1; j < CANT_NUMEROS; j++){
						if(numeros[i] < numeros[j]){
							aux = numeros[i];
							numeros[i] = numeros[j];
							numeros[j] = aux;
						}
					}
				}
				
				printf("Vector ordenado de mayor a menor:	");
				for(i = 0; i < CANT_NUMEROS; i++){
					printf("%d  ", numeros[i]);
				}
				printf("\n");
			break;
			
			case 'd':
				salir = true;
			break;
		}
	}while(salir == false);
	
	printf("Fin del programa");
}
