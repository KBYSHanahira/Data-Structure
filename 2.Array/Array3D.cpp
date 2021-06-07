#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define l 1
#define u 2
#define l1 1
#define u1 3
#define l2 1
#define u2 2
#define l3 1
#define u3 2

int *BA21, *BA22, *p;
int  *BA3, *BA4 , *BA5 , *BA6 , *BA7 , *BA8; 
int i,j,k;

//----------------2D ARRAY ROW MAJOR-------------------//
void Create21DArray(){//Make Array 2D
	int element, c, total_mem ; // Create Element
	element = (u1-l1+1)*(u2-l2+1) ; // Cal Element
	c = sizeof (*BA21);
	total_mem = element * c ;
	BA21 = (int*)malloc(total_mem) ; // Cal Total of Element
}
void A21(int i, int j, int x){ // Create 2D Array
	p = BA21+((i-l1)*(u2-l2+1)+(j-l2)) ;
	*p = x ; // Return Pointer
}
int ReadA21(int i, int j){ // Read 2D Array
	p = BA21 + (i-l1)*(u2-l2+1)+(j-l2) ;
	return(*p);// Return Pointer
}


//----------------2D ARRAY COLUMN MAJOR-------------------//
void Create22DArray(){//Make Array 2D
	int element, c, total_mem ; // Create Element
	element = (u1-l1+1)*(u2-l2+1) ; // Cal Element
	c = sizeof (*BA22) ;
	total_mem = element * c ;
	BA22 = (int*)malloc(total_mem) ; // Cal Total of Element
}
void A22(int i, int j, int x){ // Create 2D Array
	p = BA22+((i-l1)*(u2-l2+1)+(j-l2)) ;
	*p = x ; // Return Pointer
}
int ReadA22(int i, int j){ // Read 2D Array
	p = BA22 + (i-l1)*(u2-l2+1)+(j-l2) ;
	return(*p);// Return Pointer
}

//----------------3D ARRAY-------------------//
void Create3DArray(){ // Plane Row Column
	int element, c, total_mem ; // Create Element
	element = (u1-l1+1)*(u2-l2+1)*(u3-l3+1) ; // Cal Element
	c = sizeof (*BA3);
	total_mem = element * c ;
	BA3 = (int*)malloc(total_mem);// Cal Total of Element
}
void A3(int i, int j, int k, int x){ // Create 3D Array
	p = BA3 + ((i-l1)*(u2-l2+1)*(u3-l3+1)+(j-l2)*(u3-l3+1)+(k-l3));
	*p = x;
}

void ReadA3(int i, int j, int k, int x){
	p = BA3 + ((i-l1)*(u2-l2+1)*(u3-l3+1)+(j-l2)*(u3-l3+1)+(k-l3));
	*p = x; // Return Pointer
}
int ReadA3(int i, int j, int k){
	p = BA3 + (i-l1)*(u2-l2+1)*(u3-l3+1)+(j-l2)*(u3-l3+1)+(k-l3); 
	return(*p);
 }
 
 
//---------------------------------------------------------------//
 
 
void Create3DArray2(){ //Plane Column Row
	int element, c, total_mem ;
	element = (u1-l1+1)*(u2-l2+1)*(u3-l3+1) ;
	c = sizeof (*BA4) ;
	total_mem = element * c ;
	BA4 = (int*)malloc(total_mem);
}
void A4(int i, int j, int k, int x){
	p = BA4 + ((i-l1)*(u2-l2+1)*(u3-l3+1)+(k-l3)*(u2-l2+1)+(j-l2));
	*p = x;
}
void ReadA4(int i, int j, int k, int x){
	p = BA4 + ((i-l1)*(u2-l2+1)*(u3-l3+1)+(k-l3)*(u2-l2+1)+(j-l2));
	*p = x;
}
int ReadA4(int i, int j, int k){
	p = BA4 + ((i-l1)*(u2-l2+1)*(u3-l3+1)+(k-l3)*(u2-l2+1)+(j-l2)); 
	return(*p);
 }


//---------------------------------------------------------------//


void Create3DArray3(){ //Row Plane Column
	int element, c, total_mem ;
	element = (u1-l1+1)*(u2-l2+1)*(u3-l3+1) ;
	c = sizeof (*BA5) ;
	total_mem = element * c ;
	BA5 = (int*)malloc(total_mem);
}
void A5(int i, int j, int k, int x){
	p = BA5 + ((j-l2)*(u1-l1+1)*(u3-l3+1)+(i-l1)*(u3-l3+1)+(k-l3));
	*p = x;
}
void ReadA5(int i, int j, int k, int x){
	p = BA5 + ((j-l2)*(u1-l1+1)*(u3-l3+1)+(i-l1)*(u3-l3+1)+(k-l3));
	*p = x;
}
int ReadA5(int i, int j, int k){
	p = BA5 + ((j-l2)*(u1-l1+1)*(u3-l3+1)+(i-l1)*(u3-l3+1)+(k-l3)); 
	return(*p);
 }


//---------------------------------------------------------------//


void Create3DArray4(){ //Row Column Plane
	int element, c, total_mem ;
	element = (u1-l1+1)*(u2-l2+1)*(u3-l3+1) ;
	c = sizeof (*BA6) ;
	total_mem = element * c ;
	BA6 = (int*)malloc(total_mem);
}
void A6(int i, int j, int k, int x){
	p = BA6 + ((j-l2)*(u1-l1+1)*(u3-l3+1)+(k-l3)*(u1-l1+1)+(i-l1));
	*p = x;
}
void ReadA6(int i, int j, int k, int x){
	p = BA6 + ((j-l2)*(u1-l1+1)*(u3-l3+1)+(k-l3)*(u1-l1+1)+(i-l1));
	*p = x;
}
int ReadA6(int i, int j, int k){
	p = BA6 + ((j-l2)*(u1-l1+1)*(u3-l3+1)+(k-l3)*(u1-l1+1)+(i-l1)); 
	return(*p);
 }


//---------------------------------------------------------------//


void Create3DArray5(){ //Column Plane Row
	int element, c, total_mem ;
	element = (u1-l1+1)*(u2-l2+1)*(u3-l3+1) ;
	c = sizeof (*BA7) ;
	total_mem = element * c ;
	BA7 = (int*)malloc(total_mem);
}
void A7(int i, int j, int k, int x){
	p = BA7 + ((k-l3)*(u1-l1+1)*(u2-l2+1)+(i-l1)*(u2-l2+1)+(j-l2));
	*p = x;
}
void ReadA7(int i, int j, int k, int x){
	p = BA7 + ((k-l3)*(u1-l1+1)*(u2-l2+1)+(i-l1)*(u2-l2+1)+(j-l2));
	*p = x;
}
int ReadA7(int i, int j, int k){
	p = BA7 + ((k-l3)*(u1-l1+1)*(u2-l2+1)+(i-l1)*(u2-l2+1)+(j-l2)); 
	return (*p);
 }


//---------------------------------------------------------------//


void Create3DArray6(){ //Column Row Plane
	int element, c, total_mem ;
	element = (u1-l1+1)*(u2-l2+1)*(u3-l3+1) ;
	c = sizeof (*BA8) ;
	total_mem = element * c ;
	BA8 = (int*)malloc(total_mem);
}
void A8(int i, int j, int k, int x){
	p = BA8 + ((k-l3)*(u1-l1+1)*(u2-l2+1)+(j-l2)*(u1-l1+1)+(i-l1)) ;
	*p = x;
}
void ReadA8(int i, int j, int k, int x){
	p = BA8 + ((k-l3)*(u1-l1+1)*(u2-l2+1)+(j-l2)*(u1-l1+1)+(i-l1)) ;
	*p = x;
}
int ReadA8(int i, int j, int k){
	p = BA8 + ((k-l3)*(u1-l1+1)*(u2-l2+1)+(j-l2)*(u1-l1+1)+(i-l1)) ; 
	return(*p);
 }

//----------------START PROGRAMS-------------------//


int main(){
	char ch;
	int x;
	printf("1-6 3DIMENSION ARRAY FUNTION..\n") ;
	printf("=======================\n") ;
	printf("[1]Array 2D ROW MAJOR\n[2]Array 2D COLUMN MAJOR\n ----------------------- \n[3]Array 3D Plane Row Column\n[4]Array 3D Plane Column Row\n[5]Array 3D Row Plane Column\n[6]Array 3D Row Column Plane\n[7]Array 3D Column Plane Row\n[8]Array 3D Column Row Plane\n") ;
	scanf("%d", &ch);
	switch(ch){
		case 1	: 	Create21DArray();
				printf("[I] [J] [X]\n");
				scanf("%d %d %d",&i,&j,&x);
				A21(i,j,x) ;
				printf("\nA4(%d,%d) = %d ",i,j,ReadA21(i,j));
				printf("\nBase Address = %d",BA21);
				printf("\nAddress = %d",p);
				getch();
				free(BA21);
				break;
		case 2	: 	Create22DArray();
				printf("[I] [J] [X]\n");
				scanf("%d %d %d",&i,&j,&x);
				A22(i,j,x) ;
				printf("\nA4(%d,%d) = %d ",i,j,ReadA22(i,j));
				printf("\nBase Address = %d",BA22);
				printf("\nAddress = %d",p);
				getch();
				free(BA22);
				break;
		case 3	:	Create3DArray(); 
				printf("[I] [J] [K] [X]\n");
				scanf("%d %d %d",&i,&j,&x);
				A3(i,j,k,x) ;
				printf("\nA3(%d, %d, %d) = %d ",i,j,k,ReadA3(i,j,k));
				printf("\nBase Address = %d",BA3);
				printf("\nAddress = %d",p);
				getch();
				free(BA3);
				break;
		case 4	: 	Create3DArray2();
				printf("[I] [J] [K] [X]\n");
				scanf("%d %d %d %d",&i,&j,&k,&x);
				A4(i,j,k,x) ;
				printf("\nA4(%d, %d, %d) = %d ",i,j,k,ReadA4(i,j,k));
				printf("\nBase Address = %d",BA4);
				printf("\nAddress = %d",p);
				getch();
				free(BA4);
				break;
		case 5	:	Create3DArray3(); 
				printf("[I] [J] [K] [X]\n");
				scanf("%d %d %d %d",&i,&j,&k,&x);
				A5(i,j,k,x) ;
				printf("\nA5(%d, %d, %d) = %d ",i,j,k,ReadA5(i,j,k));
				printf("\nBase Address = %d",BA5);
				printf("\nAddress = %d",p);
				getch();
				free(BA5);
				break;
		case 6	:	Create3DArray4(); 
				printf("[I] [J] [K] [X]\n");
				scanf("%d %d %d %d",&i,&j,&k,&x);
				A6(i,j,k,x) ;
				printf("\nA6(%d, %d, %d) = %d ",i,j,k,ReadA6(i,j,k));
				printf("\nBase Address = %d",BA6);
				printf("\nAddress = %d",p);
				getch();
				free(BA6);
				break;
		case 7 	:	Create3DArray5();
				printf("[I] [J] [K] [X]\n");
				scanf("%d %d %d %d",&i,&j,&k,&x);
				A7(i,j,k,x) ;
				printf("\nA7(%d, %d, %d) = %d ",i,j,k,ReadA7(i,j,k));
				printf("\nBase Address = %d",BA7);
				printf("\nAddress = %d",p);
				getch();
				free(BA7);
				break;
		case 8 	:	Create3DArray6();
				printf("[I] [J] [K] [X]\n");
				scanf("%d %d %d %d",&i,&j,&k,&x);
				A8(i,j,k,x) ;
				printf("\nA8(%d, %d, %d) = %d ",i,j,k,ReadA8(i,j,k));
				printf("\nBase Address = %d",BA8);
				printf("\nAddress = %d",p);
				getch();
				free(BA8);
				break;

	}
	return(0);	
}// ENG PROGRAMS




