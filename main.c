#include <stdio.h>
int op;
int op2;
int candidato1 = 0;
int candidato2 = 0;
int candidato3 = 0;
int candidato4 = 0;
int candidato5 = 0;
int votosnulos = 0;

int main(void)
{
    printf("Menu:\n");
    printf("1) Caso primero usando Switch:\n");
    printf("2) Caso dos usando if:\n");
    scanf("%d", &op2);
    switch (op2)
    {
    case 1:
        printf("Elecciones Electores.\n");
        printf("\n");
        printf("Candidatos para elecciones.\n");
        printf("\n");
        printf("1) Adrian Diaz\n");
        printf("2) Sofia Palacios\n");
        printf("3) Juan Perez\n");
        printf("4) Yaku Correa\n");
        printf("5) Susana Lazo\n");
        printf("\n");

        do
        {
            printf("Escoja su opcion:\n");
            scanf("%d", &op);
            switch (op)
            {
            case 1:
                candidato1 += 1;
                break;
            case 2:
                candidato2 += 1;
                break;
            case 3:
                candidato3 += 1;
                break;
            case 4:
                candidato4 += 1;
                break;

            case 5:
                candidato5 += 1;
                break;
            default:
                votosnulos += 1;
                break;
            }
        } while (op != 0);
        printf("Resultados de la eleccion:\n");
        printf("Candidato  Adrian Diaz: %d votos\n", candidato1);
        printf("Candidato  Sofia Palacios: %d votos\n", candidato2);
        printf("Candidato  Juan Perez: %d votos\n", candidato3);
        printf("Candidato Yaku Correa: %d votos\n", candidato4);
        printf("Candidato  Susana Lazo: %d votos\n", candidato5);
        printf("Cantidad de votos nulos : %d \n", votosnulos);
        break;

    case 2:
        printf("Elecciones Electores.\n\n");
        printf("Candidatos para elecciones.\n\n");
        printf("1) Adrian Diaz\n");
        printf("2) Sofia Palacios\n");
        printf("3) Juan Perez\n");
        printf("4) Yaku Correa\n");
        printf("5) Susana Lazo\n\n");

        do
        {
            printf("Escoja su opción (0 para finalizar):\n");
            scanf("%d", &op);

            switch (op)
            {
            case 0:
                // Finalizar el bucle si se ingresa 0.
                break;
            case 1:
                candidato1 += 1;
                break;
            case 2:
                candidato2 += 1;
                break;
            case 3:
                candidato3 += 1;

                break;
            case 4:
                candidato4 += 1;

                break;
            case 5:
                candidato5 += 1;

                break;
            default:
                votosnulos += 1;

                break;
            }
        } while (op != 0);

        printf("Resultados de la eleccion:\n");
        printf("Candidato  Adrian Diaz: %d votos\n", candidato1);
        printf("Candidato Sofia Palacios: %d votos\n", candidato2);
        printf("Candidato Juan Perez: %d votos\n", candidato3);
        printf("Candidato Yaku Correa: %d votos\n", candidato4);
        printf("Candidato Susana Lazo: %d votos\n", candidato5);
        printf("Votos nulos: %d\n", votosnulos);

        break;
    }

    return 0;
}
