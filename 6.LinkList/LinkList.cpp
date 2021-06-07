#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define HeadData -999

struct Node{
	int info;
	struct Node *link;
};

struct Node *H , *H1 , *p , *q;
int i,j,k,n,data;
char ch;

Node *Allocate(){
	struct Node *temp;
	temp = (Node*)malloc(sizeof(Node));
	return(temp);
}

void CreateNNode(int n){
	int i,temp;
	H=p;H1=p;
	for(i=1 ; i<=n ; i++){
		p = Allocate();
		temp=1+rand()%99;
		p->info=temp;
		H1->link=p;
		H1=p;
		H1->link=H;
	}
}

void ShowAllNode(){
	printf("============================================\n");
	printf("H =%x\n",H);
	printf("============================================\n");
	p=H->link;
	i=1;
	while(p->info != HeadData){
	printf("(%d):%x\t",i,p);
	printf("INFO :%d\t",p->info);
	printf("LINK :%x\n",p->link);
	p=p->link;
	i++;
	}
	printf("============================================\n");
}

void InsertAfter(int data1){
	int temp;
	if(H->link == H) printf("Circular Linked List have no HeadNode!!!...\n");
	else{
		H1=H->link;
		while(H1->info != HeadData){
			if(H1->info == data1){
				p=Allocate();
				printf("\nInsert data :");
				scanf("%d",&temp);
				p->info=temp;
				p->link=H1->link;
				H1->link=p;
			}
			H1=H1->link;
		}
	}
}

void DeleteAfter(int data1){
	int temp;
	if(H->link == H) printf("Circular Linked List have node!!...\n");
	else{
		H1=H->link;
		while(H1->info != HeadData){
			if(H1->info == data1){
				if(H1->link==H){
					printf("This is the Head Node,Can't delete it!!!\n");
				}else{
					p=H1->link;
					if(p->link==H){
						H1->link=H;
					}else{
						H1->link=p->link;
						 free(p);
					}
				}
			}
			H1=H1->link;
		}
	}
}

int trykey(){
	printf("\n==================================\n");
	printf("     	    Try Again\n");
	printf("==================================\n");
	ch=' ';
	while(ch!='E' && ch!='e'){
		printf("Menu :[I:Insert  D:Delete  E:Exit]");
		ch=getch();
		switch(ch){
			case 'I'	: case 'i' :
							printf("\nInsert After data  :");
							scanf("%d",&data);
							InsertAfter(data);
							printf("\nAll Data in Linked List After INSERTED\n");
							ShowAllNode();
							break;
							
			case 'D'	: case 'd' :
							printf("\nDelete After Data  :");
							scanf("%d",&data);
							DeleteAfter(data);
							printf("\nAll Data in Linked List After DELETED\n");
							ShowAllNode();
							break;
			case 'E'	: case 'e' :
						  printf("\nSee you :)\n");
						  break;
			default		: printf("\n\nError !!!\n");
						  trykey();
		}
	}
	return(0);
}

int main(){
	p=Allocate();
	p->info=HeadData;
	p->link=p;
	n=10;
	CreateNNode(n);
	printf("PROGRAM SIGLY CIRCULAR LINKED LIST\n");
	printf("==================================\n");
	printf("All Data in Linked List  \n");
	ShowAllNode();
	ch=' ';
	while(ch!='E' && ch!='e'){
		printf("Menu :[I:Insert  D:Delete  E:Exit]");
		ch=getch();
		switch(ch){
			case 'I'	: case 'i' :
							printf("\nInsert After data  :");
							scanf("%d",&data);
							InsertAfter(data);
							printf("\nAll Data in Linked List After INSERTED\n");
							ShowAllNode();
							break;
							
			case 'D'	: case 'd' :
							printf("\nDelete After Data  :");
							scanf("%d",&data);
							DeleteAfter(data);
							printf("\nAll Data in Linked List After DELETED\n");
							ShowAllNode();
							break;
			case 'E'	: case 'e' :
						  printf("\nSee you :)\n");
						  break;
			default		: printf("\n\nError !!!\n");
						  trykey();
		}
	}
	return(0);
}
