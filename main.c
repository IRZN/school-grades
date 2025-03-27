#include <stdio.h>
#include <stdlib.h>

int main () {
    int nota1, nota2, nota3, alunos, media, soma, soma_total = 0;
    int maior_nota = 0, cont = 0;
    int aprov = 0, reprov = 0;
    
    printf ("\nQual o numero de alunos de sua sala? \n");
    scanf ("%i", &alunos);
    do {
        printf ("\nDigite as três notas de um aluno: \n");
        scanf ("%i %i %i", &nota1, &nota2, &nota3);
        soma = nota1 + nota2 + nota3;

        if (soma >= 60) {
            printf ("\nEste aluno foi Aprovado \n");
            aprov++;
        } else if (soma <60 && soma > 0) {
            printf ("\nEste aluno foi Reprovado \n");
            reprov++;
        }        
        if (soma < 0) {
            printf ("\nNota Invalida! \n");
            cont--;
        } else if (soma > maior_nota) {
            maior_nota = soma;
        }
        if (soma > 0) {
            soma_total = soma_total + soma;
        }
        cont++;
    }while (cont < alunos);

    media = soma_total / alunos;
    printf ("\nA quantidade de alunos Aprovados foi: %d \n", aprov);
    printf ("A quantidade de alunos Reprovados foi: %d \n", reprov);
    printf ("A nota media da turma foi: %d \n", media);
    printf ("A maior nota da turma foi: %d \n", maior_nota);
    return 0;
}