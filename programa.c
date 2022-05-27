#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <math.h>


struct Jugador {
	char nombre[50];
	int puntuacion;
};


void banner() {
	printf("\n");
	printf ("               *********    ****    *********      ******       *************   ****        *******          \n");
	printf ("             ***********    ****   **********     ********      *************   ****      ************       \n");
	printf ("            *******         ****  ***********    ***    ***     *************   ****     *****    *****      \n");
	printf ("            ******          ****  *****         ****    ****    ***       ***   ****     *****    *****      \n");
	printf ("            ******          ****  *****         ****    ****    ***       ***   ****     *****    *****      \n");
	printf ("             ********       ****  *****         ************    ***       ***   ****     *****    *****      \n");
	printf ("              ********      ****  *****         ************    *************   ****     *****    *****      \n");
	printf ("                 *******    ****  *****         ****    ****    *************   ****     *****    *****      \n"); 
	printf ("                 *******    ****  *****         ****    ****    *********       ****     *****    *****      \n");
	printf ("                 *******    ****  ***********   ****    ****    ***  ******     ****     *****    *****      \n");
	printf ("             ***********    ****   **********   ****    ****    ***    ******   ****      ************       \n");
	printf ("          ***********       ****    *********   ****    ****    ***       ***   ****        ********         \n");
	printf("\n");
}


void banner1() {
	printf("\n");
	printf ("             *********    ****    *********      ******       *************   ****        *******                   ***          \n");
	printf ("           ***********    ****   **********     ********      *************   ****      ************              ***            \n");
	printf ("          *******         ****  ***********    ***    ***     *************   ****     *****    *****    ***    ***              \n");
	printf ("          ******          ****  *****         ****    ****    ***       ***   ****     *****    *****    ***    ***              \n");
	printf ("          ******          ****  *****         ****    ****    ***       ***   ****     *****    *****    ***    ***              \n");
	printf ("           ********       ****  *****         ************    ***       ***   ****     *****    *****           ***              \n");
	printf ("            ********      ****  *****         ************    *************   ****     *****    *****           ***              \n");
	printf ("               *******    ****  *****         ****    ****    *************   ****     *****    *****    ***    ***              \n"); 
	printf ("               *******    ****  *****         ****    ****    *********       ****     *****    *****    ***    ***              \n");
	printf ("               *******    ****  ***********   ****    ****    ***  ******     ****     *****    *****    ***    ***              \n");
	printf ("          ***********     ****   **********   ****    ****    ***    ******   ****      ************              ***            \n");
	printf ("        **********        ****    *********   ****    ****    ***       ***   ****        ********                  ***          \n");
	printf("\n");
}


int main () {
	
	int i=0,j=0,m=0;
	int respuesta1,respuesta2,respuesta3, respuesta4, respuesta6, respuesta5;
	
	char opcion, jugador1, jugador2, numero1, numero2, numeroJugadores; 
	
	banner();

	do {
		printf("BIENVENIDO AL MENU DE SICARIO \n");
		printf("Aqui podras poner a prueba tus cualidades como detective, disfruta :) \n");
		printf("\n");
		printf("Introduzca el numero de jugadores entre 1 y 2:\n");
		scanf("%c", &numeroJugadores);
		printf("\n");
	
	     if (numeroJugadores == 1) {
			printf("Jugador.1 introduzca su nombre de usuario:\n");
			fflush(stdin);
			scanf("%c",&jugador1);
			printf("\n");
		}	else if (numeroJugadores == 2){
			printf("Jugador.1 introduzca su nombre de usuario:\n");
			fflush(stdin);
			scanf("%c",&jugador1);
			printf("\n");
			
			printf("Jugador.2 introduzca su nombre de usuario:\n");
			fflush (stdin);
			scanf("%c",&jugador2);
			printf("\n");
		}
    	for (numeroJugadores=1; numeroJugadores<=1; numeroJugadores++){
		printf("Jugador.1 introduzca su nombre de usuario:\n");
		fflush(stdin);
		scanf("%c",&jugador1);
		printf("\n");
		}
		
		for (numeroJugadores=2; numeroJugadores<=2; numeroJugadores++){
		printf("Jugador.2 introduzca su nombre de usuario:\n");
		fflush ( stdin );
		scanf("%c",&jugador2);
		printf("\n");
	    }
	} while (jugador1 == 1 && jugador2 == 2);


printf("A continuacion debes elegir una de las opciones;\n\n");

do {
    fflush(stdin);
    printf("Elige la opcion deseada:\n");
    printf("A - Tutorial.\n");
    printf("B - Empiezar el juego.\n");
    printf("C - Tabla de puntuaciones.\n");
    printf("D - Salir del juego\n");
    fflush (stdin);
    scanf("%c", &opcion);
                
		switch (opcion) {
	
        
        	case 'A':
        	case 'a':
        		printf("A seleccionado la opción Tutorial");
        		printf("\n En la ceremonia de los Oscars aparece un cadaver.\n");
                printf(" La muerta se trata de Merinu, una actriz veterana que protagonizaba una pelicula junto a la actriz del momento, Paula.\n");
                printf(" Todo el mundo que participaba en la pelicula sabia que Merinu tenía problemas con mucha gente,");
				printf(" con actores, con directores de casting e incluso con su pareja, el director.\n");
                printf(" Durante la fiesta la vieron agitada, y al final de la noche aparecio muerta en los bastidores del escenario.\n\n");
                printf(" - Los inspectores se encargaran de a través de pistas obtenidas por simples preguntas de cultura encontrar al asesino.\n");
                printf(" - Acuérdate de ir apuntando cada una de tus pistas, para así al final poder elegir bien el asesino.");
            	printf(" - Gracias a tu trabajo, podremos alcanzar y cerrar al asesino.\n");
             	printf(" - Cabe la posibilidad de que existan dos jugadores en el propio juego, lo que añade una competicion extra por ver quién resuelve los acertijos mas rapidamente.\n");
            	printf(" - La puntuacion se basara en la rapidez de conseguir atrapar al asesino.\n\n %cEstas listo?\n\n");
			 
				break;
				
			case 'B':
			case 'b':		
                	printf("¿Preparados? Comencemos.\n");
        	    	printf("\n En la ceremonia de los Oscars aparece un cadaver.\n");
                    printf(" La muerta se trata de Merinu, una actriz veterana que protagonizaba una pelicula junto a la actriz del momento, Paula.\n");
                    printf(" Todo el mundo que participaba en la pelicula sabia que Merinu tenía problemas con mucha gente,");
			    	printf(" con actores, con directores de casting e incluso con su pareja, el director.\n");
                    printf(" Durante la fiesta la vieron agitada, y al final de la noche aparecio muerta en los bastidores del escenario.\n\n");
					printf("\nBienvenido a tu aventura como inspector. Bienvenido a SICARIO\n");
					
					printf("Debereis resolver los distintos acertijos antes de que se acabe el tiempo\n");
					printf("Mucha suerte. Confiamos en vosotros\n"); 
					
			
						
					printf("\n\n\nPRIMERA PREGUNTA.\n");
					printf("\nBienvenidos al ordenador general. Para esta prueba debereis marcar la opcion correcta para desbloquear la pista.\n");
					
					
					do {
	
						printf("Escoja una de las siguientes opciones, para la pregunta:\n");
						printf("¿Cual es el rio mas largo de España? \n");
  						printf("Opcion 1: Rio Tajo.\n");
						printf("Opcion 2: Rio Duero.\n");
						printf("Opcion 3: Rio Ebro.\n");
						printf("Opcion 4: Rio Guadiana\n");
  						scanf("%d", &respuesta1);
  						
  						switch(respuesta1)
  						{
                 		case 1 : printf("Opcion 1--ERROR\n");
                        break;
                 		case 2 : printf("Opcion 2--ERROR\n");
                        break;
                 		case 3 : printf("Opcion 3\n");
                        break;
                 		case 4 : printf("Opcion 4--ERROR\n");
                    	break;
                 		default : printf("Opcion desconocida\n"); 
                 		break;
       					}
       		
 					}while(respuesta1!=3);  
					printf("RESPUESTA COORECTA\n");
					printf("Aqui tienes tu primera pista: no es una persona muy cercana a ella, tan solo trabajan juntos.");  
					printf("Debes avanzar un poco más para conseguir las pistas que de verdad te ayuden a descartar");
	            
	 				printf("\n\n\nSEGUNDA PREGUNTA. Aqui te enfrentaras a un pequeño problema matematico. \n");
	 
	 
	 				printf("Quieres entrar como detective a la guarida de tu sospechoso para ello escuchas atentamente para averiguar la contraseña.\n");
					printf("Uno de ellos llama a la puerta del local y una voz dice desde el interior 6, a lo que esa persona contesta 3. Llega otro y le dicen 4, a lo que contesta 2.\n");
					printf("Un compañero tuyo se acerca a ellos y le dicen 8, a lo que responde 5. \n");
	 				printf("Lamentablemente le disparan.\n");
	 				printf("Es tu turno. Averigua la contraseña\n");


	 				do {
	 					printf("Hola, 14:\n");
	 					fflush(stdin);
	 					scanf("%d", &respuesta2);
	 	
	 				}while(respuesta2!=7);
                  	printf("RESPUESTA CORRECTA. Muy bien, ya vemos que tienes dotes suficientes para recompensarte con la pista. \n");
					printf("Pista numero 2: a Pablo le encerraron esa misma noche por blanqueo. \n");
					
					
				
					printf("\n\n\nTERCERA PREGUNTA.\n");
					do {
	
						printf("¿Donde se originaron los juegos olimpicos?:\n");
  						printf("Opcion 1: Grecia.\n");
						printf("Opcion 2: Escocia.\n");
						printf("Opcion 3: Australia.\n");
						printf("Opcion 4: Chipre.\n");
  						scanf("%d", &respuesta3);
  						
  						switch(respuesta3)
  						{
                 		case 1 : printf("Opcion 1\n");
                        break;
                 		case 2 : printf("Opcion 2--ERROR\n");
                        break;
                 		case 3 : printf("Opcion 3--ERROR\n");
                        break;
                 		case 4 : printf("Opcion 4--ERROR\n");
                    	break;
                 		default : printf("Opcion desconocida\n"); 
                 		break;
       					}
       		
 					} while(respuesta3!=1); 
					printf("RESPUESTA COORECTA\n");
					printf("Pista nº3: es una mujer. \n");
				
					
						
					printf("\n\n\nCUARTA PREGUNTA.\n");
					
					printf("Si 50 es el 100%.\n");
					do{
						printf("¿Cuanto es el 90 %? \n");
						scanf("%d", &respuesta4);
					
					}while(respuesta4!=45);
					
					printf("RESPUESTA CORRECTA.\n");
					printf("Ya poco a poco vas averiguando quien mato a merinu.\n");
					printf("Aquí tienes la pista nº4: Mario cosiguio devuelta el dinero que le debian.\n");
					
					  
					printf("\n\n\n QUINTA PREGUNTA.");
	  				do {
	
						printf("Escoja una de las siguientes opciones, para la pregunta:\n");
						printf("¿Que es un animal carnivoro?");
  						printf("Opcion 1: come plantas.\n");
						printf("Opcion 2: come plantas y carne.\n");
						printf("Opcion 3: come carne.\n");
						printf("Opcion 4: ninguna de las anteriores.\n");
  						scanf("%d", &respuesta5);
  						
  						switch(respuesta1)
  						{
                 		case 1 : printf("Opcion 1--ERROR\n");
                        break;
                 		case 2 : printf("Opcion 2--ERROR\n");
                        break;
                 		case 3 : printf("Opcion 3\n");
                        break;
                 		case 4 : printf("Opcion 4--ERROR\n");
                    	break;
                 		default : printf("Opcion desconocida\n"); 
                 		break;
       					}
       		
 					}while(respuesta1!=3);  
					printf("RESPUESTA COORECTA\n");
					printf("Aqui tienes la ultima pista de todas. Espero que sea de ayuda para averiguar quien es el asesino. \n");
					printf("Pista numero5: a Irina no le coincidia su cuartada con el resto del equipo. \n");
					printf("\n");
					
					
					system("cls");
					
						printf("Enhorabuena. Has conseguido recolectar todas las pistas. A continuacion debes de elegir al asesino de merinu.");
						printf("Al lado de cada sospechoso, te dejamos el motivo del posible asesinato.");
					do {
	
						printf(" Opcion 1: Paula (tambien queria el premio a mejor actriz). \n");
  						printf(" Opcion 2: El doble Pablo (merinu queria cerrar su negocio de blanqueo).\n");
						printf(" Opcion 3: Camara Mario (merinu le debia dinero por problemas con el juego).\n");
						printf(" Opcion 4: La sustituta Sara (tenia envidia de la muerta).\n");
						printf(" Opcion 5: Guionista Irina (merinu se nego a hacer los papeles y por su culpa la despidieron).\n");
  						scanf("%d", &respuesta6);
  						
  						switch(respuesta3)
  						{
                 		case 1 : printf("Opcion 1--ERROR\n");
                        break;
                 		case 2 : printf("Opcion 2--ERROR\n");
                        break;
                 		case 3 : printf("Opcion 3--ERROR\n");
                        break;
                 		case 4 : printf("Opcion 4--ERROR\n");
                    	break;
                    	case 5 : printf("Opcion 5\n");
                    	break;
                 		default : printf("Opcion desconocida\n"); 
                 		break;
       					}
       		
 					} while(respuesta6!=5); 
					printf("RESPUESTA COORECTA.\n");
					
					printf("Enhorabuena detective, ha conseguido encontrar al asesino y por tanto has ganado el juego con la mayor puntuacion 1000puntos. \n");
					return 0;
					
			case 'C':
			case 'c':
				system("cls");
	    		printf("\nEntrando a la tabla de puntuaciones.\n\n");
	    		
	    		break;		
					
            case 'D':
                	printf("Se procedera a salir de SICARIO.\n");
                	printf("\n");
                	banner1();
                		return 0;
                	break;
            	
            }    	
                	 
	} while (opcion!='D'); {
	printf("\n\nERROR JHJ5794. Lo sentimos, no se ha podido cargar el juego");
	system("cls");
    } 
    
return 0; 
} 

int validar_respuesta(int interrogatorio, char respuesta[]);
int rango_puntuacion();
void guardad_en_fichero(char nombre[], int puntuacion);
void consultar_puntuaciones();



int validar_respuesta(int interrogatorio, char respuesta[]){

	int validacion=0;
	char respuesta_correcta[100];

	switch(interrogatorio){
		case 1:
			strcpy(respuesta_correcta,"Opcion 3");
			break;
		case 2:
			strcpy(respuesta_correcta,"7");
			break;
		case 3:
			strcpy(respuesta_correcta,"Opcion 1");
			break;
		case 4:
			strcpy(respuesta_correcta,"45");
			break;
		case 5:
			strcpy(respuesta_correcta,"Opcion 3");
			break;
		case 6:
			strcpy(respuesta_correcta,"Opcion 5");
			break;
	}

	if(stricmp(respuesta, respuesta_correcta) == 0){
		validacion = 1;

	} else {
		validacion = 0;
	}

	return validacion;
}




void guardar_en_fichero(char nombre[], int puntuacion){

	FILE *fichero;

	fichero = fopen("puntuaciones_sicario.txt","a");

	if(fichero == NULL){
		printf("\nEl archivo que se busca no existe o no ha podido crearse.\n");
	}else{

		fseek( fichero, 0, SEEK_END );

		if (ftell( fichero ) == 0 ){
			fprintf(fichero, "Nombre  Puntuacion\n");
			fprintf(fichero, "---------------------\n");
			}
		fprintf(fichero, "%s   %d\n", nombre, puntuacion);
	}

	fflush(fichero);
	fclose(fichero);

}

void consultar_puntuaciones (){

	FILE *fichero;

	char leido[500];

	fichero = fopen("puntuaciones_sicario.txt","r");

	if(fichero == NULL){
		printf("\nEl archivo que se busca no existe.\n");
	}else{

		while(fgets(leido, sizeof(fichero), fichero) != NULL){
            printf("%s", leido);
        }

	}

	fflush(fichero);
	fclose(fichero);

}
