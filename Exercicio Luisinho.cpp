#include <stdio.h>
float soma(){
  
  float numerador;
  float denominador=1;
  float auxiliar = 0;
  float somarest;

    for (numerador = 1; numerador <= 99; numerador = numerador + 2){
          auxiliar = auxiliar + (numerador/denominador);
          denominador++;
	     	

}
    

    
	return printf("%.2f",auxiliar);
}




int main(){

 soma();
return 0;
}

