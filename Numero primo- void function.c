#include <stdio.h>

void primo(){
    
    int num,aux=0;
    
    printf("digite um valor ");
    scanf("%d", &num);
    
    for(int i=1; i<=num; i++){
        if(num%i==0){
        aux++;
        }
    }
    if (aux == 2){
        printf("eh um primo");
    }
    else{
        printf("nao e primo");
    }
}

int main(){
    
    int num;
    primo(num);

    return 0;
}
