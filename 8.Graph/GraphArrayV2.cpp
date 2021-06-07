#include<stdio.h>
#include<conio.h>

#define MaxNode 6

int graph[MaxNode][MaxNode]={
		{0,1,1,1,0,0},
		{1,0,1,0,1,0},
		{1,1,0,0,0,0},
		{1,0,0,0,1,1},
		{0,1,0,1,0,0},
		{0,0,0,1,0,0}
};

char NodeName[MaxNode]={'A','B','C','D','E','F'};

void DispArray2D(){
	int i,j;
	printf("   ");
	for (j=0 ; j<=MaxNode ; j++){
		printf("%c  ",NodeName[j]);	
	}
	printf("\n");
	for(i=0 ; i<MaxNode ; i++){
		printf("%c  ",NodeName[i]);
		for(j=0 ; j<MaxNode ; j++){
			printf("%d  ",graph[i][j]);
		}
		printf("\n");
	}
	printf("==============================================");
}

void DispSetOfVertex(){
	int i;
	printf("\nSet of Vertex = {");
	for(i=0 ; i<MaxNode ; i++){
		printf("%c,",NodeName[i]);
	}
	printf("}\n");
}

void DispSetOfEdge(){
	int i,j,k;
	printf("\nSet of Edge = {");
	for(i=0 ; i < MaxNode ; i++){
		for(j=0 ; j < MaxNode ; j++){
			if(graph[i][j]==1){
				printf("(%c,%c,",NodeName[i],NodeName[j]);
				k=j+1;
				if(i != j){
					printf("%c)",NodeName[k]);
				}
			}
		}
		printf(" // ");
	}
	printf("}\n");
}

int main(){
	printf("GRAPH (ADJACENCY MATRIX REPRESENTATION METHOD)\n");
	printf("==============================================\n");
	DispArray2D();
	DispSetOfVertex();
	printf("\n==============================================");
	DispSetOfEdge();
	printf("==============================================\n");
	getch();
	return(0);
}
