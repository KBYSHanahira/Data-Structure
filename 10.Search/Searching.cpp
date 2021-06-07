#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h> // Use Sound Windows

#define MaxData 100

int Data[MaxData];
int N,key,Times;
bool result;

bool Duplicate(int i , int Data1){
	int j;
	for(j=0 ; j<i ; j++)
		if(Data1 == Data[j])
			return(true);
	return(false);	
}

void PrepareRawKey(int N){
	int i,j,temp;
	srand(time(NULL));
	for(i=0 ; i<=N ; i++){
		temp=(rand()%89)+10;
		while(Duplicate(i-1,temp))
			temp=(rand()%89)+10;
		Data[i]=temp;
	}
}

void DispKey(int N){
	int i;
	for(i=1 ; i<=N ; i++)
		printf("(%2d)",i);
	printf("\n");
	for(i=1 ; i<=N ; i++)
		printf("(%2d)",Data[i]);
	printf("\n");
}

bool SequentialSearch(int Key1){
	int i;
	Times=0;
	i=1;
	while(i<=N){
		Times++;
		printf("NUM[%d] :%2d ",i,Data[i]);
		printf("Searching Time :%d\n",Times);
		if(Key1==Data[i])
			return(true);
			i++;
	}
	return(false);
}

int main(){
	printf("SEQUEN SEARCH\n");
	printf("======================================\n");
	N=16;
	PrepareRawKey(N);
	printf("RAW KEY : \n");
	DispKey(N);
	printf("======================================\n");
	while(key!=-999){
		printf("\nEnter Key For Search(-999 for EXIT)\nPress Number : ");
		scanf("%d",&key);
		if(key!=-999){
			result=SequentialSearch(key);
			if(result)
				printf("Result...FOUND\n");
			else{
				Beep(600,600);
				printf("Resual...NOT FOUND!!\n");
			}
		printf("----------------------------Searching Finished\n");
		
		}
	}
	return(0);
}
