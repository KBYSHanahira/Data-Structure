#include <stdio.h>

int power(int m, int n){
	if (n == 0)	{
		return 1;	
	}
	else {
		return m*power(m,n-1);
	}
}

int main (){
	int m,n,sum = 0;
	
	scanf("%d %d",&m,&n);
	sum = power(m,n);
	printf("%d\n",sum);
			
	return 0 ;
}
