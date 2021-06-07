#include <stdio.h>
#include <conio.h>

int Number, Answer;
int Power(int M,int N){
	if(N == 0){
		return(1);
	}else{
		return (M*Power(M,N-1));
	}
}

int main () {
	int M,N;
	printf("\n\n");
	printf("RECURSIVE (POWER NUMBER) PROGRAM\n") ;
	printf("==========================\n") ;	
	printf("RECURSIVE [M]^[N]");
	printf("\n[M] [N] = ");
	scanf("%d %d",&M,&N);		
	printf("==========================\n") ;	
	Answer=Power(M,N);
	printf("\n\nAnswer = %d\n",Answer);
	return (0) ;
}
