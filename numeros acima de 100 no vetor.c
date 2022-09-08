#include <stdio.h>

int main()
{
    int vetor[4],x=0,aux=0;
    
    for(x = 0; x<5; x++)
    {
      printf("5 numeros");
      scanf("%d",&vetor[x]);
    }
    for (x=0; x<5; x++)
    {
       if(vetor[x]>100){
           aux++;
       }
   }
   
   printf("%d",aux);
    return 0;
    
}
