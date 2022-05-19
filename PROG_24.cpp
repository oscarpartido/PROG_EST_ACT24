/* autor:oscar vivaldi partido ramirez fecha:28/04/2022 
hacer un programa que pida el nombre de un archivo e imprima su contenido en pantalla
imprimiendo caracter por caracter 
*/
#include <stdio.h>
#include "milibreria.h"

int main(){
	char nombre[50],c;
	FILE *f;
	int n=0, lineas=0;
	leers("Nombre del archivo: ",nombre,50);
	//Abrir el archivo en modo lectura
	f=fopen(nombre,"r");
	//verificar si se abrio correctamente el archivo
	if(f==NULL){
		printf("ERROR AL TRATAR DE ABRIR EL ARCHIVO\n");
	}
	else{
		//proceso
		while(1){
			c=fgetc(f);
			printf("%c",c);
			n++;
			if(c==EOF){
				break;
			}
			else if(c==10){
				lineas++;
			}
		}
		//cerrar 
		fclose(f);
		printf("\n------------------>el archivo contiene %d caracteres\n",n);
		printf("\n------------------>el archivo contiene %d lineas\n",lineas);


	}
	return 0;
}

