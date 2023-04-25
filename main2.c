#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdlib.h>
#include<string.h>

void cerrar()
{
    printf ("Adios\n");
    exit (0);
}

int main() {
    char op[20];
    int pid, estado;
    char *programa, path[100];
    int status,cont=0;

    pid=fork();

        do
        {
        
        op==NULL;

        printf(">");scanf ("%s",op);
        printf ("antes");
        if (strcmp(op,"EXIT")==0)
        {
        	//printf ("if");
        	cont=1;
        	cerrar();
        }
	//printf ("c");
        strcat(strcpy(path,"/home/escom/Escritorio/prac21/"),op);
        /*printf ("\n%s\n",path);
        printf ("%s\n",op);*/
        //printf ("b");
        estado = execl(path,"1",NULL);
                if (estado==-1)
                    perror ("Error en el nombre de archivo");    
                    
        wait(&status);
        //printf("a");
        }while (op!='EXIT');
        
    return 0;
    }
