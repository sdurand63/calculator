#include <stdio.h>
#include <stdlib.h>
#include "operations.h"

int main()
{
    float a = 0, b = 0, res = 0;
    char fin = 'y';
    char angle = 'r';
    char operation;
    while (fin != 'n')
    {
        printf("Quelle operation voulez-vous effectuer : + , - , * , / , 'r' pour racine, 'e' pour exponentielle, 'c' pour cosinus, 's' pour sinus ? \n ") ;
        if (scanf(" %c", &operation) != 1)
        {
            break;
        }
        if (operation == 'r' || operation == 'e' )
        {
            printf("Veuillez saisir un nombre, saisissez '0' si vous voulez utiliser le resultat precedent. \n");
            scanf(" %f", &a);
            if (a == 0)
            {
                a = res;
            }

        }
        else if (operation == 'c' || operation == 's')
        {
            printf("Saisissez si votre angle est en degre 'd' ou en radians 'r', puis saisissez un angle, saisissez '0' si vous voulez utiliser le resultat precdent \n");
            scanf(" %c", &angle);
            scanf(" %f", &a);
            if (a == 0)
            {
                a = res;
            }
        }
        else
        {
            printf("Veuillez saisir deux nombres, saisissez '0' pour le premier nombre si vous voulez utiliser le resultat prcdent\n");
            scanf(" %f", &a);
            scanf(" %f", &b);
            if (a == 0)
            {
                a = res;
            }
        }

        switch (operation)
        {
            case '+' :
                addition(&a,b);
                printf("%f", a);
                break;
            case '-' :
                soustraction(&a,b);
                printf("%f", a);
                break;
            case '*' :
                multiplication(&a,b);
                printf("%f", a);
                break;
            case '/':
                division (&a,&b);
                printf("%f",a);
                break;
            case 'r' :
                racine(&a);
                printf("%f",a);
                break;
            case 'e' :
                exponential(&a);
                printf("%f",a);
                break;
            case 'c':
                cosinus(&a,&angle);
                printf("%f",a);
                break;
            case 's':
                sinus(&a,&angle);
                printf("%f",a);
                break;
            default:
                printf("error\n");
                break;
        }
        res = a;
        printf("\n Voulez vous continuer ? y/n \n");
        if (scanf(" %c", &fin) != 1)
        {
            break;
        }
    }

    return 0;

}


