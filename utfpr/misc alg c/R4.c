#include <stdio.h>

int main (){
	int N, i, t;
	
	do{
	scanf("%d", &N); 
	if (N>199 || N<6){
		printf("Valor invalido! Tente novamente!\n");
		continue;
	}
	if (N<201 && N>5){
	for (i=2; i<=N; i+=2){
		if (i<=N){
			t = i*i;
			printf ("%d^2 = %d\n", i, t);
		}
	}}
	} while(i<=N);
	return 0;
}