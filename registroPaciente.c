#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "registroPaciente.h"

void cadastroPaciente(arquivo, op) {
    struct pacienteInfo pacInfo;
    do {
        arquivo = fopen("cadastro.txt", "a+");
        printf("\n Insira seu nome: ");
        fflush(stdin);
        scanf("%[^\n]s", &pacInfo.nome);

        printf("\n Insira seu CPF: ");
        fflush(stdin);
        scanf("%s", &pacInfo.cpf);

        printf("\n Insira seu telefone: ");
        fflush(stdin);
        scanf("%s", &pacInfo.telefone);

        printf("\n Insira seu rua: ");
        fflush(stdin);
        scanf("%[^\n]s", &pacInfo.rua);

        printf("\n Insira seu número: ");
        fflush(stdin);
        scanf("%s", &pacInfo.numero);

        printf("\n Insira seu CEP: ");
        fflush(stdin);
        scanf("%s", &pacInfo.cep);

        printf("\n Insira seu bairro: ");
        fflush(stdin);
        scanf("%[^\n]s", &pacInfo.bairro);

        printf("\n Insira seu cidade: ");
        fflush(stdin);
        scanf("%[^\n]s", &pacInfo.cidade);

        printf("\n Insira seu estado: ");
        fflush(stdin);
        scanf("%[^\n]s", &pacInfo.estado);

        printf("\n Insira a data de nascimento do paciente: ");
        fflush(stdin);
        scanf("%s", &pacInfo.dataNasc);

        printf("\n Insira o email do paciente: ");
        fflush(stdin);
        scanf("%s", &pacInfo.email);

        printf("\n Insira a data do diagnóstico: ");
        fflush(stdin);
        scanf("%s", &pacInfo.dataDiag);

        printf("\n Insira a comorbidade do paciente: ");
        fflush(stdin);
        scanf("%[^\n]s", &pacInfo.comorbidade);

        fprintf(arquivo,"\n\nNome: %s\nCPF: %s\nTelefone: %s\nRua: %s\nNúmero: %s\nCEP: %s\nBairro: %s\nCidade: %s\nEstado: %s\nData de nascimento: %s\nEmail: %s\nData do diagnóstico: %s\nComorbidade: %s", pacInfo.nome, pacInfo.cpf, pacInfo.telefone, pacInfo.rua, pacInfo.numero, pacInfo.cep, pacInfo.bairro, pacInfo.cidade, pacInfo.estado, pacInfo.dataNasc, pacInfo.email, pacInfo.dataDiag, pacInfo.comorbidade);

        printf("\nContinuar? (0-não / 1-sim): ");
        scanf("%d", &op);

        if (op == 1) {
            fputs("\n", arquivo);
        }
    } while (op==1);
    fclose(arquivo);
}
