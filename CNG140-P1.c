//İlbey EVCİL 2079242
#include<stdio.h>
#include<math.h>
int main(){
int menu=0;  //It is necessary for entering the main (do-while) loop...
do{
	int line=0,base=0,d0=0,d1=0,d2=0,d3=0,data=0,countten=1,error=0,count=0,digit=0,datatake=0;
	char takechar;
	printf("4 to 1 Multiplexer!\n");
	printf("(1)Compute and display the output\n(2)Quit\nYou choose:");
	scanf("%d",&menu);
	switch(menu){
		case 1:printf ("You have choosen option 1\n");break;
		case 2:printf ("You have choosen option 2\nByee!!\n");break;
		default:printf("\n");break;
		}
	
	if (menu==1){
		do{
			printf ("Please enter select lines:");
			scanf ("%d",&line);
			error=0;
			switch(line){
				case 11:break;
				case 10:break;
				case 01:break;
				case 00:break;
				default:printf("It is not a 2-digit binary number for the select lines.\nPlease try again!\n");error=1;break;}
			}while(error==1);
				
		if (line==11 || line==10 || line==01 || line==00){
			do{
				printf("Which base will you use to enter data lines (base 16/10/2):");
				scanf("%d",&base);
				error=0;
				switch(base){
					case 2:break;
					case 10:break;
					case 16:break;
					default:printf("You entered wrong base. You can choose 2,10,16. Please try again!\n");error=1;break;}
				}while(error==1);
			
			
			if(base==2){
				do{
					takechar='\0', error=0, data=0, digit=0;
					printf("Please enter the data lines to decode:");
        			fflush(stdin);
					while (takechar!=10){
						scanf("%c",&takechar);
						switch(takechar){
        					case '0':data+=0;break;
        					case '1':data+=1;break;
        					case 10:break;
        					default:error=1;break;
							}
					data*=10;
        			digit++;
						}
        		digit=digit-1;
        		if (digit==4){
        			if (error==0){
        				data/=100;
        				d0=data%10;
						data=data/10;
						d1=data%10;
						data=data/10;
						d2=data%10;
						data=data/10;
						d3=data%10;
					}
					else{
        			printf("Not possible to convert it to 4-digit binary number\n");
					error=1;
						}
					}
				else{
					printf("Not possible to convert it to 4-digit binary number\n");
					error=1;
					}
					}while(error==1);
				}
			
			else if(base==10){
				do{
					printf("Please enter the data lines to decode:");
					scanf("%d",&datatake);
					error=0;
					if(datatake>15){
						printf("It is not possible to convert decimal %d to 4-digit binary number. Please try again!\n",datatake);
						error=1;
						}
					}while(error==1);
					while (datatake>0){
						data+=countten*(datatake%2);
						datatake=datatake/2;
						countten=countten*10;
						}
					d0=data%2;
					data=data/10;
					d1=data%2;
					data=data/10;
					d2=data%2;
					data=data/10;
					d3=data%2;
				}	
		
			else if(base==16){
				do{
				takechar='\0',error=0,digit=0;
				printf("Please enter the data lines to decode:");
        		fflush(stdin);
				while (takechar!=10){
					scanf("%c",&takechar);
					switch(takechar){
        				case '0':datatake=0;break;
        				case '1':datatake=1;break;
        				case '2':datatake=2;break;
        				case '3':datatake=3;break;
        				case '4':datatake=4;break;
        				case '5':datatake=5;break;
        				case '6':datatake=6;break;
        				case '7':datatake=7;break;
        				case '8':datatake=8;break;
        				case '9':datatake=9;break;
        				case 'A':datatake=10;break;
        				case 'a':datatake=10;break;
        				case 'B':datatake=11;break;
        				case 'b':datatake=11;break;
        				case 'C':datatake=12;break;
        				case 'c':datatake=12;break;
        				case 'D':datatake=13;break;
        				case 'd':datatake=13;break;
        				case 'E':datatake=14;break;
        				case 'e':datatake=14;break;
        				case 'F':datatake=15;break;
        				case 'f':datatake=15;break;
						default:error+=1;break;
						}	
        			digit++;
					}
        		digit-=1;
        		error=error-1;
        		if (digit==1){
        			if (error==0){
        				d0=datatake%2;
						datatake=datatake/2;
						d1=datatake%2;
						datatake=datatake/2;
						d2=datatake%2;
						datatake=datatake/2;
						d3=datatake%2;
						}
					else{
        			printf("It is not possible to convert hexadecimal to 4-digit binary number. Please try again!\n");
					error=1;
						}
					}
				else{
					printf("It is not possible to convert hexadecimal to 4-digit binary number. Please try again!\n");
					error=1;
					}
					}while(error==1);
				}	
			
		if (error==0){
			switch(line){
			case 00:printf("Output is %d\n",d0);break;
			case 01:printf("Output is %d\n",d1);break;
	    	case 10:printf("Output is %d\n",d2);break;
			case 11:printf("Output is %d\n",d3);break;
				}
			}
			}
		}
		system("pause");
		system("cls");
		}while(menu!=2);
	return 0;
	}


