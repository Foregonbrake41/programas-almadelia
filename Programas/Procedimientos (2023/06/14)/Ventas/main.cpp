#include <stdio.h>
#include <stdlib.h>

void promedio(void)
{
    int chiapas,campeche,tabasco;
    printf("Teclea el número de ventas en Chiapas: ");
    scanf("%d", &chiapas);
    printf("Teclea el número de ventas en Campeche: ");
    scanf("%d", &campeche);
    printf("Teclea el número de ventas en Tabasco: ");
    scanf("%d", &tabasco);
    float prom=(chiapas+campeche+tabasco)/3.0;
    printf("El promedio de ventas fue de: %f\n",prom);
}

int main()
{
    promedio();
    return 0;
}
