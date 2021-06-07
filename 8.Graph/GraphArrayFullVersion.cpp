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
		printf("%c",NodeName[i]);
		if(i != MaxNode-1){
			printf(",");
		}
	}
	printf("}\n");
}

void DispSetOfEdge(){
	int i,j,k;
	printf("\nSet of Edge = {");
	for(i=0 ; i < MaxNode ; i++){
		for(j=0 ; j < MaxNode ; j++){
			for(k=0 ; k < MaxNode ; k++){
				if(graph[i][j]==1 && graph[j][k]==1 && i != k) {
					printf("(%c,%c,%c)",NodeName[i],NodeName[j],NodeName[k]);
				}
			}
		}
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
