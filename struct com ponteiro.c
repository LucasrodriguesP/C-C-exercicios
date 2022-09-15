#include <stdio.h>
#include <stdlib.h>
struct pessoa{
    int idade;
    float peso;
    char nome[30];
};

int main()
{
    struct pessoa *ptr;
    int i, n;
    
    printf("digte quantas pessoas ");
    scanf("%d",&n);
    
    ptr = (struct pessoa *)malloc(n * sizeof(struct pessoa));
    
    for (i=0;i<n;i++){
        printf("na sequencia, o nome e dade da pessoa :");
        scanf("%s %d", (ptr +i)->nome, &(ptr+i)->idade);
    }
    
    printf("exibindo as infos : ");
    for (i=0;i<n; i++){
      printf("nome : %s   idade :%d   ",(ptr + i)->nome,(ptr +i)->idade);
    }  
    return 0;
}
