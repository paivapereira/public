#include <stdio.h>

int main(){
	int U=-100, N=-100;
	
	while (U!=0){
		scanf("%d", &U);
		if(U>100 || U<-100){
			printf("Valor invalido! Tente novamente!\n");
		}else if (U>N){
			if (U<=100 && U>=-100)
			N = U;		
		}
	}
	printf("%d\n", N);
	return 0;
}
