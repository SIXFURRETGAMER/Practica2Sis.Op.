# Practica2Sis.Op.

Este programa trata de simular una terminal bash del sistema operativo Linux, tiene comandos prescritos que son los nombres de los programas acompañantes del programa main.c, al terminar la ejecución de un programa este vuelve a esperar la siguiente línea del usuario para ejecutar otro programa

Aunque se logró que la ejecución de comandos, el ciclo no funciona correctamente y puede pasar 1 de 2 cosas, la primera es que al terminar el comando ingresado y salga del programa, al presionar una tecla sin importar cuál sea, comenzara un ciclo sin fin que no se puede terminar. La otra opción es que solo se ejecute una vez y después se cierre el programa

En el archivo main.c, en la línea 36 es necesario modificar la dirección de ubicación de los archivos complementarios, es necesario que todos estén en la misma carpeta 

Es necesario darle permiso a todos los ejecutables desde terminal con el comando "chmod +x ./ejecutable"

El comando de salida es "EXIT"
