#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct jugador {
        char nombre[100];
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
	char nombre;
	int contador=0; i;
    char respuesta[50], acertar[100]="RESPUESTA CORRECTA";
    int puntos=0;
	char opcion, jugador1, jugador2, numero1, numero2, numeroJugadores; 
	
	FILE*fentrada;
	
	banner();

	do {
		printf("BIENVENIDO AL MENU DE SICARIO \n");
		printf("Aqui podras poner a prueba tus cualidades como detective, disfruta :) \n");
		printf("\n");
		printf("Introduzca el numero de jugadores:\n");
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
					printf("\nBienvenidos al ordenador general. Para esta prueba contareis conun tiempo de 15seg, donde debereis marcar la opcion correcta para abrir la siguiente sala.\n");
					
					
					do {
	
						printf("Escoja una de las siguientes opciones, para la pregunta:\n");
						printf("¿Cuál es el río más largo de España?");
  						printf("Opción 1: Rio Tajo.\n");
						printf("Opcion 2: Rio Duero.\n");
						printf("Opcion 3: Rio Ebro.\n");
						printf("Opcion 4: Rio Guadiana\n");
  						scanf("%d", &respuesta1);
  						
  						switch(respuesta1)
  						{
                 		case 1 : printf("Opción 1--ERROR\n");
                        break;
                 		case 2 : printf("Opción 2--ERROR\n");
                        break;
                 		case 3 : printf("Opción 3\n");
                        break;
                 		case 4 : printf("Opción 4--ERROR\n");
                    	break;
                 		default : printf("Opción desconocida\n"); 
                 		break;
       					}
       		
 					}while(respuesta1!=3);  
					printf("RESPUESTA COORECTA\n");
			
					if(respuesta1!=3)
					printf(" Pista nº1: ");
							
					system("cls");
	                        
	            
	 				printf("\n\n\nSEGUNDA PREGUNTA. Aqui te enfrentaras a un pequeño problema matematico. \n");
	 
	 
	 				printf("Quieres entrar como detective a la guarida de tu sospechoso para ello escuchas atentamente para averiguar la contraseña.\n");
					printf("Uno de ellos llama a la puerta del local y una voz dice desde el interior 6, a lo que esa persona contesta 3. Llega otro y le dicen 4, a lo que contesta 2.\n");
					printf("Un compañero tuyo se acerca a ellos y le dicen 8, a lo que responde 5");
	 				printf("Lamentablemente le disparan.\n");
	 				printf("Es tu turno. Averigua la contraseña\n");


	 				do {
	 					printf("Hola, 14:\n");
	 					fflush(stdin);
	 					scanf("%d", &respuesta2);
	 	
	 				}while(respuesta2!=7);
	 
					printf("RESPUESTA CORRECTA. Muy bien, ya vemos que tienes dotes suficientes para recompensarte con la pista. Aqui tienes");
					printf("Pista nº2:");
			

	                
					system("cls"); 
					
			
					printf("\n\n\nTERCERA PREGUNTA.\n");
					do {
	
						printf("¿Dónde se originaron los juegos olimpicos?:\n");
  						printf("Opción 1: Grecia.\n");
						printf("Opcion 2: Escocia.\n");
						printf("Opcion 3: Australia.\n");
						printf("Opcion 4: Chipre.\n");
  						scanf("%d", &respuesta3);
  						
  						switch(respuesta3)
  						{
                 		case 1 : printf("Opción 1\n");
                        break;
                 		case 2 : printf("Opción 2--ERROR\n");
                        break;
                 		case 3 : printf("Opción 3--ERROR\n");
                        break;
                 		case 4 : printf("Opción 4--ERROR\n");
                    	break;
                 		default : printf("Opción desconocida\n"); 
                 		break;
       					}
       		
 					} while(respuesta3!=1); 
					printf("RESPUESTA COORECTA\n");
					printf("Pista nº3:");
	
					system("cls");
						
					printf("\n\n\nCUARTA PREGUNTA.\n");
					
					printf("Si 50 es el 100%.\n");
					do{
						printf("¿Cuanto es el 90%?\n");
						scanf("%d", &respuesta4);
					
					}while(respuesta4!=45);
					
					printf("RESPUESTA CORRECTA.\n");
					printf("Ya poco a poco vas averiguando quien mato a merinu.\n");
					printf("Aquí tienes la pista nº4:\n");
					 
					system("cls");
					
					  
					printf("\n\n\n QUINTA PREGUNTA.");
	  				do {
	
						printf("Escoja una de las siguientes opciones, para la pregunta:\n");
						printf("¿Que es un animal carnivoro?");
  						printf("Opción 1: come plantas.\n");
						printf("Opcion 2: come plantas y carne.\n");
						printf("Opcion 3: come carne.\n");
						printf("Opcion 4: ninguna de las anteriores.\n");
  						scanf("%d", &respuesta5);
  						
  						switch(respuesta1)
  						{
                 		case 1 : printf("Opción 1--ERROR\n");
                        break;
                 		case 2 : printf("Opción 2--ERROR\n");
                        break;
                 		case 3 : printf("Opción 3\n");
                        break;
                 		case 4 : printf("Opción 4--ERROR\n");
                    	break;
                 		default : printf("Opción desconocida\n"); 
                 		break;
       					}
       		
 					}while(respuesta1!=3);  
					printf("RESPUESTA COORECTA\n");
					printf("Aquí tienes la ultima pista de todas. Espero que sea de ayuda para averiguar quien es el asesino.");
					printf("Pista nº5:");
					
					system("cls");
					
						printf("Enhorabuena. Has conseguido recolectar todas las pistas. A continuación debes de elegir al asesino de merinu.");
						printf("Al lado de cada sospechoso, te dejamos el motivo del posible asesinato.");
					do {
	
						printf(" Opcion 1: Paula (también quería el premio a mejor actriz). \n");
  						printf(" Opcion 2: El doble Pablo (merinu queria cerrar su negocio de blanqueo).\n");
						printf(" Opcion 3: Cámara Mario (merinu le debia dinero por problemas con el juego).\n");
						printf(" Opcion 4: La sustituta Sara (tenía envidia de la muerta).\n");
						printf(" Opcion 5: Guionista Irina (merinu se nego a hacer los papeles y por su culpa la despidieron).\n");
  						scanf("%d", &respuesta6);
  						
  						switch(respuesta3)
  						{
                 		case 1 : printf("Opción 1--ERROR\n");
                        break;
                 		case 2 : printf("Opción 2--ERROR\n");
                        break;
                 		case 3 : printf("Opción 3--ERROR\n");
                        break;
                 		case 4 : printf("Opción 4--ERROR\n");
                    	break;
                    	case 5 : printf("Opción 5\n");
                    	break;
                 		default : printf("Opción desconocida\n"); 
                 		break;
       					}
       		
 					} while(respuesta6!=5); 
					printf("RESPUESTA COORECTA.\n");
					
					printf("Enhorabuena detective, ha conseguido encontrar al asesino.");
					return 0;
					
					
			case 'C':
			case 'c':
			
			fentrada = fopen("entrada.txt", "r");
        		if (fentrada == NULL) {
                	printf("Error de lectura\n");
                	return 0;
        		}
        		
				i=0;
        		contador=0;
        		while (fscanf(fentrada, "%s %d", jugador[i].nombre, jugador[i].puntuacion) != EOF) {
                	i++;
                	contador++;                
				}
        		fclose(fentrada);
        		
        		for(i=0; i<contador; i++){
        			if (jugador[i].puntos>jugador[i+1].puntos) {
        				printf("%d %s %d %d", orden, jugador[i].nombre, jugador[i].puntos);
            			orden++;
            		} 
				}   
       		break;	
				
                			
            case 'D':
                	printf("Saliendo de SICARIO.\n");
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
