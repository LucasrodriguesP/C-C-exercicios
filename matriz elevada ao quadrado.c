#include <math.h>
#include <stdio.h>

int main()
{
    int vetor[5],vetor2[5],x,potencia;
    
      for(x = 0; x<5; x++)
    {
      printf("5 numeros");
      scanf("%d",&vetor[x]);
    }

     printf("Deseja elevar a qual potencia?");
     scanf("%d",&potencia);

     for (x=0;x<5;x++)
    {
        vetor2[x] = pow(vetor[x],potencia);
    } 
    for (x=0;x<5;x++){
        
        printf("vetor a = %d\n",vetor[x]);
        printf("vetor b = %d\n",vetor2[x]);
    }
    return 0;
}
