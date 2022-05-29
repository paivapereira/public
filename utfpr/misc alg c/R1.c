#include <stdio.h>

int main () {
	
	int N = 1, i, resultado = 0;
	
	while (N != 0){
		scanf ("%d", &N);
		if (N>1 && N<101){
			
		for (i = 2; i <= N / 2; i++) {
    		if (N % i == 0) {
       		resultado++;
       		break;
    		}
 		}
 
		if (resultado == 0)
			{printf("Primo\n");
    		N = 1;
    		resultado = 0;
			}else
    		printf("Nao primo\n");
    		N = 1;
    		resultado = 0;
			
			
		}else if (N == 1 || N > 100){
			printf("Valor invalido! Tente novamente!\n");
		}
	}
}

