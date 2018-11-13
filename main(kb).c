#include <stdio.h>
#include <stdlib.h>
#include <string.h>  

int main(int argc, char *argv[]) 
{
    if(argc!=2){//si la cant de argumentos es diferente de 2
      printf("error en la cantida de parametros\n");//muestra error
      return 0;}//else run program
      
    FILE *arch;
      if ( !(arch=fopen(argv[1],"rt")) ){ //si no coincide el nombre del archivo con uno existente
   		printf("Error al abrir %s\n",argv[1]); //muestra error
	    	return 0;}//else run program 

    fseek(arch,0,SEEK_END);//me ubico al final del archivo 
	
    int tam_total=ftell(arch)//devuelve el valor en bytes del tamaño del archivo

    if(tam_total>1024)//kb
	printf("el archivo excede el tamaño permitido");

return 0;
}
