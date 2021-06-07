#include<stdio.h> //Use printf()
#include<conio.h> //Use Getch()

int N=5;
int Q[5];
int x, Qnumber = 0, F = 0, R = 0; //Declare x and initial/Qnumber/Front/Rear variable
char status = 'N'; //Initial Status = NORMAL
char ch; //KBD Read Variable

void insertCQ(int y) //INSERT FUNCTION
	{
		if(F==R+1 || R==N && F==1){//Check Queue Full?
			printf("===============================\n ");
			printf("!!!OVER FLOW!!!...\n");
		}
		else if(R==N){//Loop back of R to 1 if it maximum
			R=1;
			Q[R]=y;
		}
		else if(F==0&&R==0){//if F is Zero set it to 1
			F=1;R=1;
			Q[R]=y;
		}
		else{
			R++;
			Q[R]=y;
		}
			Qnumber++; //Increase queue number
			printf("===============================\n ");
			printf("Insert Number : %d\n", Qnumber); //Display queue number
			status = 'N'; //Set status to Normal
	}

int deleteCQ()//DELETE Function
	{
		int y;
		if(F==0){
			printf("\n===============================\n ");
			printf("!!!UNDER FLOW!!!...\n");
			printf("===============================\n ");
			status = 'U'; //Set status to UNDER FLOW
			getch();
		}else if(F==R){//Set both to 0 if F and R are same value
			Q[F]=0;
			y=Q[F];
			F=0;
			R=0;
		}else if(F==N){//set F to 1 if F is Maximum
			Q[F]=0;
			y=Q[F];
			F=1;
		}else{
			Q[F]=0;
			y=Q[F];
			F++;
		}
			status = 'N'; //Set status to Normal
			return(y);
	}

int DataInQueue()//Calculate Data waiting in queue
	{
		int y=0;
		if(F!=0 && R!=0){//if not equal then can calculate
			if(F<=R){
				y=R-F+1; //Normal F and R
			}else{
				y=(N-1)-F+1+R; //incase loop of R
			}
		}
		return(y);
	}
	
void ShowAllQueue()//Display Function
	{
		int i; //Counter variable
		printf("===============================\n ");
		printf("N : %d\n", N);
		printf("Status : %c\n", status); //Display STATUS
		printf("Data waiting i queue : %d\n", DataInQueue());  //Display Data waitting in queue
		printf("F : %d R :%d\n", F, R); //Display F R
		printf("========================\n ");
		for(i=1;i<=N;i++){
			printf("%d: %d	",i,Q[i]); //Display all of data in QUEUE
		}
		printf("\n===============================\n ");
	}
	
int main()
	{
		printf("CICULAR QUEUE PROGRAM...\n");
		printf("===============================\n");
		ch=' ';
		while(ch != 'E'){
			printf("\n[1=INSERT | 2=DELETE] | 0=Exit]\n"); //Show Mennu
			printf( "Select Mode : " );
			ch=getch(); //Wait and Read KBD with out ENTER Press
			switch(ch){
				case'1':	printf("\n\nInsert Numder : ");
							scanf("%d",&x); //Read data from keyNBD
							insertCQ(x); //Call INSERTNQ
							ShowAllQueue(); //Display all data is Queue
							break;
				case'2':	x=deleteCQ(); //Delete Data
							printf("\n\nData from Queue = %d\n",x); //Display it
							ShowAllQueue(); //Display all data is Queue
							break;
				case'0': 	break;
				default: 	printf( "\nError. Please try again.\n" );	
			} //END SWITCH CASE
		} //END WHILE Loop
		printf("\n"); //Line Feed
		return(0);
	}
