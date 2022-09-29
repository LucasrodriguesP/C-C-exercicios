#include <stdio.h>
int main()
{
    int qntd=0,y=0,maior=0,menor;
    printf("quantos numeros vai digitar");
    scanf("%d",&qntd);
    qntd--;
    int vetorr[qntd];
    for (int x = 0; x <= qntd; x++){
        printf("%d VALOR: ", x);
        scanf("%d",&y);
        vetorr[x] = y;
    }
    for (int x = 0; x <= qntd; x++){
        if(vetorr[x] > vetorr[x+1]){
            if(vetorr[x] > maior)
            maior = vetorr[x];
        }
        
    }
    for (int x = 0; x <= qntd; x++){
        if(vetorr[x] < vetorr[x+1]){
            if(vetorr[x] < menor)
            menor = vetorr[x];
        }
        
    }
    printf("%d MAIOR    %d MENOR",maior,menor);

    return 0;
}
