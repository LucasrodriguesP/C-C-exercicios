#include <stdio.h>
#include <string.h>
//alterar valor das variaveis depois
struct Aluno{
    
    int matricula;
    char nom[50];
    char dataNasc[11];
    char curso[50];
    float cr;
    
    
    };


int main()
{
    struct Aluno aluno;
    aluno.matricula=12345;
    strcpy(aluno.nom,"raphael");
    strcpy(aluno.dataNasc,"raphael");
    strcpy(aluno.curso,"raphael");
    aluno.cr = 9.2;
    printf("%i   , %s ,   ,%s   ,%s     ,%f", aluno.matricula,aluno.nom,aluno.dataNasc,aluno.curso,aluno.cr);
    return 0;
}
