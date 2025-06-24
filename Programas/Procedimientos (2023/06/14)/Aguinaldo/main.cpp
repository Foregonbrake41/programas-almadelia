#include <stdio.h>
#include <stdlib.h>

void aguinaldo(void)
{
    float pagadia,aguinaldo;
    printf("Teclea de cuánto es tu paga al día: ");
    scanf("%f",&pagadia);
    aguinaldo=pagadia*10;
    printf("Su aguinaldo es de: %f\n",aguinaldo);
}

int main()
{
    aguinaldo();
    return 0;
}