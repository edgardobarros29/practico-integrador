#include <stdio.h>
#include <stdlib.h>
#include"TDAatleta.h"
#include"lista_atleta.h"
#define MAXI 1000
int main()
{
    int country, sport, pm, cant, t, e,mpm, color, m, est;
    float point, punt;
    char nya[MAXI];
    atleta p;
    lista_atleta d;
    init_lista(&d);

    while(!isfull(d)!=0)
    {
        init(&p);
        fflush(stdin);
        printf("ingrese nombre y apellido\n");
    scanf("%[^\n]s", nya);
    fflush(stdin);
    printf("ingrese el pais\n");
    printf("<1> argentina\n");
    printf("<2> brasil\n");
    printf("<3> chile\n");
    printf("<4> bolivia\n");
    printf("<5> mexico\n");
    printf("<6> colombia\n");
    printf("<7> venezuela\n");
    printf("<8> peru\n");
    printf("<9> uruguay\n");
    printf("<10> paraguay\n");
    scanf("%d", &country);
    printf("ingrese el deporte\n");
    scanf("%d", &sport);
    printf("ingrese el puntaje\n");
    scanf("%f", &point);
    printf("ingrese si posee medalla\n");
    scanf("%d", &pm);
    printf("ingrese la cantidad de medalla\n");
    scanf("%d", &cant);
    printf("ingrese el tipo de medalla\n");
    scanf("%d", &t);
    printf("ingrese el estado\n");
    scanf("%d", &e);
    cargarnombreyapellido(&p, nya);
    cargarpais(&p, country);
    cargardeporte(&p, sport);
    cargarpuntaje(&p, point);
    cargarposeemedalla(&p, pm);
    cargarmedalla(&p, cant, t);
    cargarestado(&p, e);
    insertar(&d, p);
    printf("el numero es: %d\n", mostrarnatleta(copiar(d)));
    printf("el nombre y apellido son: %s\n", mostrarnombreyapellido(copiar(d)));
    printf("el pais es: %d\n", mostrarpais(copiar(d)));
    printf("el deporte es:%d\n", mostrardeporte(copiar(d)));
    printf("el puntaje es: %f\n", mostrarpuntaje(copiar(d)));
    printf("%d\n", mostrarposeemedallas(copiar(d)));
    printf("la cantidad de medallas es: %d, %d\n", mostrarmedalla(copiar(d)).cantidad, mostrarmedalla(copiar(d)).tipo);
    printf("el estado es: %d\n", mostrarestado(copiar(d)));
    }

/*    printf("ingrese el nuevo puntaje\n");
    scanf("%f", &punt);
    printf("ingrese si posee medalla\n");
    scanf("%d", &mpm);
    printf("ingrese la cantidad de medalla\n");
    scanf("%d", &m);
    printf("ingrese el tipo de medalla\n");
    scanf("%d", &color);
    printf("ingrese el esrado\n");
    scanf("%d", &est);
    modificarpuntaje(&p, punt);
    modificarposeemedalla(&p , mpm);
    modificarmedallas(&p, m, color);
    modificarestado(&p, est);
    printf("el puntaje es: %f\n", mostrarpuntaje(copiar(d)));
    printf("%d\n", mostrarposeemedallas(p));
     printf("la cantidad de medallas es: %d, %d\n", mostrarmedalla(copiar(d)).cantidad, mostrarmedalla(copiar(d)).tipo);
    printf("el estado es: %d\n", mostrarestado(copiar(d)));*/
    return 0;
}
