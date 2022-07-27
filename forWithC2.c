// Desenvolva um programa que leia 3 notas de 10 alunos, calcule e mostre a média aritmética e a situação de aprovação de cada um deles. Lembre-se de que apenas a média igual ou acima de 7 aprova o aluno.

// Lógica: precisamos de 3 variáveis do tipo real (float) para armazenar as notas de cada aluno, uma variável real para armazenar a média das notas e uma variável inteira (int) para controlar a repetição.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float nota1,nota2,nota3,media;
    int contalunos;
    for (contalunos=1;contalunos<=6;contalunos++)
    {
        printf("Digite a nota 1 do aluno: \n");
        scanf("%f", &nota1);
        printf("Digite a nota 2 do aluno: \n");
        scanf("%f", &nota2);
        printf("Digite a nota 3 do aluno: \n");
        scanf("%f", &nota3);
        media=(nota1+nota2+nota3)/3;
        if (media>=7)
            {
                printf("Aluno APROVADO com média : %.2f \n",media);
            }
        else
            {
                printf("Aluno REPROVADO com média : %.2f . Boa sorte na recuperacao\n",media);
            }
    }
    return 0;
}