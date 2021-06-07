#include<stdio.h>
#include<conio.h>

void DecToBin(int data2,int byt){  // Make Function Decimaal to Binary  get [ data 2 ] and [ byte ]
	int count,chk,bits; // make unit count chk bits
	bits=(byt*8)-1; // Bit = Byte * 8 [ must -1 because code cal 0-8 ]
	for(count=bits; count>=0; count--){ // Count = Bit , Count -
		chk=data2 >> count;  // if chk = bata 2 more count
		if(chk & 1){ // if = chk or 1
			printf("1"); // show 1
		}else{ 
			printf("0"); // show 0
		}
		if(count %4 == 0 && count>3){  // if count / 4  = 0 and count > 3
			printf(" "); // show empty
		}
	}
	printf(" [Byte]\n"); // show B [ Byte ]
}

void FloatToBin(int data2,int byt){  // Make Function Decimaal to Double  get [ data 2 ] and [ byte ]
	int count,chk,bits; // make unit count chk bits
	bits=(byt*8)-1; // Bit = Byte * 8 [ must -1 because code cal 0-8 ]
	for(count=bits; count>=0; count--){ // Count = Bit , Count -
		chk=data2 >> count;  // if chk = bata 2 more count
		if(chk & 1){ // if = chk or 1
			printf("1"); // show 1
		}else{ 
			printf("0"); // show 0
		}
		if(count %4 == 0 && count>3){  // if count / 4  = 0 and count > 3
			printf(" "); // show empty
		}
	}
	printf(" [Byte]\n"); // show B [ Byte ]
}

void DoubleToBin(long long data2,int byt){  // Make Function Decimaal to Double  get [ data 2 ] and [ byte ]
	int count,chk,bits; // make unit count chk bits
	bits=(byt*8)-1; // Bit = Byte * 8 [ must -1 because code cal 0-8 ]
	for(count=bits; count>=0; count--){ // Count = Bit , Count -
		chk=data2 >> count;  // if chk = bata 2 more count
		if(chk & 1){ // if = chk or 1
			printf("1"); // show 1
		}else{ 
			printf("0"); // show 0
		}
		if(count %4 == 0 && count>3){  // if count / 4  = 0 and count > 3
			printf(" "); // show empty
		}
	}
	printf(" [Byte]\n"); // show B [ Byte ]
}




//////////////////////////////// DEC TO [ ???? ] ////////////////////////////////////////////





void UnsignedShortInt(){
	unsigned short int data;
	printf("\nUNSIGNED SHORT INTEGER MODE [0 to 65,535]\n");
	printf("=============================================\n");
	printf("Enter Raw Data	: ");
	scanf("%hu",&data);  // get data
	char cha = data; // need data = cha
	printf("\n");
	printf("Data in Decimal = %hu[Decimal]\n",data); // show Decimal
	printf("Data in Hexamal	= %x[Hex]\n",data); // show Hex
	printf("Data in Binary	= "); // Show Binary
	DecToBin(data,sizeof(data));  // Make data 2 = data size of byt
	printf("Size        	= %d Bytes\n",sizeof(data)); // show Size
	printf("Character       = %c\n",cha); // Show Character
	getch();
}

void UnsignedInt(){
	unsigned int data;
	printf("\nUNSIGNED INTEGER MODE [0 to 65,535]\n");
	printf("============================================\n");
	printf("Enter Raw Data   : ");
	scanf("%u",&data);  // get data
	char cha = data; // need data = cha
	printf("\n");
	printf("Data in Decimal = %u[Decimal]\n",data); // Show decimal
	printf("Data in Hexamal = %x[Hex]\n",data); // Show Hex
	printf("Data in Binary	= "); // Show Binary
	DecToBin(data,sizeof(data));  // Make data 2 = data size of byt
	printf("Size            = %d Bytes\n",sizeof(data)); // Show Size
	printf("Character       = %c\n",cha); // Show Character
	getch(); // Wait read keyboard
}

void Boolean(){
	bool data;
	printf("\nBOOLEAN MODE [0 to 1]\n");
	printf("==========================\n");
	printf("Enter Raw Data : ");
	scanf("%hu",&data);  // get data
	char cha = data; // need data = cha
	printf("\n");
	printf("Data Meaning	= "); // Show data True / False
	
	if(data){
		printf("TRUE\n"); // Show True
	printf("Data in Decimal	= %u[Decimal]\n",data); // Show Decimal
	printf("Data in Hexamal = %x[Hex]\n",data); // Show Hex
	printf("Data in Binary  = "); // Show Binary
	DecToBin(data,sizeof(data));  // Make data 2 = data size of byt
	printf("Size            = %d Bytes\n",sizeof(data)); // Show Size
	printf("Character       = %c\n",cha); // Show Character
	getch(); // Wait read keyboard
		
	}else{
		
	printf("FALSE\n");
	printf("Data in Decimal	= %u[Decimal]\n",data); // Show Decimal
	printf("Data in Hexamal = %x[Hex]\n",data); // Show Hex
	printf("Data in Binary  = "); // Show Binary
	DecToBin(data,sizeof(data));  // Make data 2 = data size of byt
	printf("Size            = %d Bytes\n",sizeof(data)); // Show Size
	printf("Character       = %c\n",cha); // Show Character
	getch(); // Wait read keyboard
	}
}

void SignedShortInt(){
	signed short int data;
	printf("\nSIGNED SHORT INTEGER MODE [-32,767 to +32,767]\n");
	printf("=============================================\n");
	printf("Enter Raw Data	: ");
	scanf("%hi",&data);  // get data
	char cha = data; // need data = cha
	printf("\n");
	printf("Data in Decimal = %hi[Decimal]\n",data); // Show Decimal
	printf("Data in Hexamal	= %hx[Hex]\n",data); // Show Hex
	printf("Data in Binary	= "); // Show Binary
	DecToBin(data,sizeof(data));  // Make data 2 = data size of byt
	printf("Size        	= %d Bytes\n",sizeof(data)); // Show Size
	printf("Character       = %c\n",cha); // Show Character
	getch(); // Wait read keyboard
}


void SignedInt(){
	signed int data;
	printf("\nSIGNED LONG INTEGER MODE [-32,767 to +32,767]\n");
	printf("=============================================\n");
	printf("Enter Raw Data	: ");
	scanf("%i",&data);  // get data
	char cha = data; // need data = cha
	printf("\n");
	printf("Data in Decimal = %i[Decimal]\n",data); // Show Decimal
	printf("Data in Hexamal	= %x[Hex]\n",data); // Show Hex
	printf("Data in Binary	= "); // Show Binary
	DecToBin(data,sizeof(data));  // Make data 2 = data size of byt
	printf("Size        	= %d Bytes\n",sizeof(data)); // Show Size
	printf("Character       = %c\n",cha); // Show Character
	getch(); // Wait read keyboard
}

void Signedfloat(){
	float data;
	printf("\nSigned Float [ 0x10 ]\n");
	printf("=============================================\n");
	printf("Enter Raw Data	: ");
	scanf("%f",&data);  // get data
	char cha = data; // need data = cha
	printf("\n");
	printf("Data in Decimal = %f[Decimal]\n",data); // Show Decimal
	printf("Data in Hexamal	= 0x%x[Hex]\n",*(int*)&data); // Show Hex in INT
	printf("Data in Binary	= "); // Show Binary
	FloatToBin(*(int*)&data,sizeof(data));  // Make data 2 = data size of byt calculate in INT
	printf("Size        	= %d Bytes\n",sizeof(data)); // Show Size
	printf("Character       = %c\n",cha); // Show Character
	getch(); // Wait read keyboard
}

void Double(){
	double data;
	printf("\nDouble[ 0x16 ]\n");
	printf("=============================================\n");
	printf("Enter Raw Data	: ");
	scanf("%lf",&data);  // get data
	char cha = data; // need data = cha
	printf("\n");
	printf("Data in Decimal = %lf[Decimal]\n",data); // Show Decimal
	printf("Data in Hexamal	= 0x%p[Hex]\n",data); // Show Hex in Pointer
	printf("Data in Binary	= "); // Show Binary
	DoubleToBin(*(long long*)&data,sizeof(data));  // Make data 2 = data size of byt calculate in Double
	printf("Size        	= %d Bytes\n",sizeof(data)); // Show Size
	printf("Character       = %c\n",cha); // Show Character
	getch(); // Wait read keyboard
}



//////////////////////////////////  COMPLIE RUN CODE       //////////////////////////////////////////

char ch; // Make ch to get button menu

int main(){
	printf("\nDATA REPRESENTATION PROGRAM...\n");
	printf("===============================\n");
	while (ch != '0'){ // Menu = 0 Cancle
		printf("\n[1]:Unsign ShortInt\n[2]:Boolean\n[3]:Unsign Int\n[4]:Signed Short Int\n[5]:Signed Int\n[6]:Signed Float\n[7]:Double\n[0]:Exit\n"); // Show Menu
		printf("===============================\n");
		printf("\n");
		ch = getch(); // Wait read keyboard
		switch(ch){ // Make Menu 1 - 6
			case '1' : UnsignedShortInt(); // Menu 1 UnsignedShortInt
						break;
			case '2' : Boolean();  // Menu 2 Boolean
						break;
			case '3' : UnsignedInt();  // Menu 3 UnsignedInt
						break;
			case '4' : SignedShortInt();  // Menu 4 SignedShortInt
						break;
			case '5' : SignedInt();  // Menu 5 SignedInt
						break;
			case '6' : Signedfloat();  // Menu 6 Signedfloat
						break;
			case '7' : Double();  // Menu 6 Signedfloat
						break;
		}
	}
	printf("\n");// Show Empty when out while
	return(0);
}// END PROGRAMS
