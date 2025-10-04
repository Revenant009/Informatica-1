#include <stdio.h>
#define CANT_ALUMNOS 5

main(){
	char puntaje[CANT_ALUMNOS];
	int i;
	bool flag;
	
	printf("Ingresar puntaje de la materia (s, a, r, i, z): \n");
	
	for(i = 0; i < CANT_ALUMNOS; i++){
		flag = false;
		do{
			if(flag == true){
				printf("Puntaje invalido. Reingrese el puntaje \n");
			}
			printf("Alumno %d: ", i+1);
			fflush(stdin);
			scanf("%c", &puntaje[i]);
			flag = true;
			printf("%c \n", puntaje[i]);
		}while(puntaje[i] != 's' && puntaje[i] != 'a' && puntaje[i] != 'r' && puntaje[i] != 'i' && puntaje[i] != 'z');
	}
	printf("Puntajes de la materia: \n");
	for(i = 0; i < CANT_ALUMNOS; i++){
		printf("Alumno %d: ", i+1);
		printf("%c \n", puntaje[i]);
	}
	printf("Fin programa");	
}
