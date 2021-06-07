#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define MaxNode 40
struct Node
	{
		int info;
		struct Node *lson;
		struct Node *rson;
	};
struct Node *T, *address[MaxNode];
int i,N,info[MaxNode];
//char chet[31] = {' ','R','O','T','G','-','H','H','O','N','W','A','A','C','A','P','R','N'};
char chet[31] = {' ','S','-','O','K','S','N','R','A','N','U'};
//char chet[31] = {' ','o','a','t','u','r','a','r','a','a','t','n','a','c','a','p','n','w','s','n','t','a','-','r','k','y','h'};
char ch;
Node *Allocate()
	{
		struct Node *temp;
		temp = (Node*)malloc(sizeof(Node));
		return(temp);
	}
void CreateTreeNP(int n)
	{
		int i,temp,Father;
		struct Node *p, *FatherPT;
		T = NULL;
		for(i=1;i<=n;i++)
			{
				p=Allocate();
				temp=chet[i];
				info[i]=temp;
				address[i]=p;
				p->info=temp;
				p->lson=NULL;
				p->rson=NULL;
				if(T == NULL)
					{
						T=p;
					}
				else
					{
						Father=(i/2);
						FatherPT=address[Father];
						if(FatherPT->lson==NULL)
							FatherPT->lson=p;
						else
							FatherPT->rson=p;
					}
			}
	}
void ShowTree()
{
	int j, level,start,ends ;
	j=1 ;
	level = 1 ;
	printf("\n") ;
	while(info[j] != NULL)
		{
			start = pow (2,level)/2 ;
			ends = pow(2,level)-1 ;
			for (j = start; j<= ends;j++) 
				if (info[j] != NULL)
				{
					switch(level)
					{
						case 1 : printf("%40c",info[j]) ;
									break ;
						case 2 : if(j==2)
									printf("%20c",info[j]) ;
								else
									printf("%40c", info[j]) ;
									break ;
						case 3 : if(j == 4)
									printf("%10c",info[j]) ;
								else
									printf("%20c",info[j]) ;
									break ;
						case 4 : if(j == 8)
									printf("%5c",info[j]);
								else
									printf("%10c",info[j]) ;
									break ;
						case 5 : if(j == 16)
									printf("%c", info[j]) ;
								else
									printf("%5c",info[j]) ;
									break ;
					}
				}
		printf("\n") ;
		level ++ ;
		}
}
void ReversePreorder(struct Node *i)
	{
		if(i!=NULL)
			{
				printf(" %c",i->info);
				ReversePreorder(i->rson);
				ReversePreorder(i->lson);
			}
	}
int main(){
	N=10;
	CreateTreeNP(N);
	while(ch!='E' && ch!='e')
		{
			printf("\nPROGRAM TREE(Node Pointer)\n");
			printf("=======================\n");
			printf("N :%d\n",N);
			printf("Sequence of data :");
			for(i=1;i<=N;i++)
				printf("%c ",info[i]);
			ShowTree();
			printf("\nMENU => R:Reverse Pre Order	E:Exit");
			printf("\n------------------------------------------------------\n");
			ch=getch();
			switch(ch)
				{
					case 'R':	case 'r' :
								printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
								printf("Result : \n");
								printf("PRE ORDER TRAVERSAL :");
								printf("[> > > ");
								ReversePreorder(T);
								printf(" < < <]");
								printf("\n---------------------------------\n");
								break;
				}
		}
		return(0);
}
