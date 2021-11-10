#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "loginregister.h"
#include "registroPaciente.h"

int main()
{
    int cho;
    printf("Digite 1 para registrar \nDigite 2 para fazer login\n\n");
    scanf("%d", &cho);
    if(cho == 1)
    {
        system("CLS");
        registro();
    }
    else if(cho == 2)
    {
        system("CLS");
        login ();
    }

    FILE *arquivo;
    int op = 1;

    if (logged == 1) {
        cadastroPaciente(arquivo, op);
    }

    return 0;
}
