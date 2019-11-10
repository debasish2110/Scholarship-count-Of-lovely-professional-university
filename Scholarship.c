#include<stdio.h>
#include<conio.h>

main(){
	int twelve,LPU,c,date,month;
	printf("\t******************************WELCOME TO LPU SCHOLARSHIP SCHEME*******************************\n");
	printf("Enter your percent in 12th\n");
	scanf("%d",&twelve);
	if(twelve>=60){	
	
	printf("Enter your percentile in LPUNEST\n");
	printf("press 1 if you are in top 1 percentile\n");
	printf("press 2 if you are in top 10 percentile\n");
	printf("press 3 if you are in top 11-20 percentile\n");
	printf("press 4 if you are in top 21-35 percentile\n");
	printf("press 5 if have not written LPUNEST\n");
	scanf("%d",&LPU);
	printf("Enter the phase in which you have taken admission\n");
	printf("Press 1 for Phase 1A for exam taken in April\n");
	printf("Press 2 for Phase 1B for exam taken in June\n");
	printf("Press 3 for Phase 2  for exam taken in August\n");
	printf("Press 4 for Phase 3  for exam thereafter\n");
	scanf("%d",&c);
	
	

	switch(c){
	case 1:if(twelve>=98 || LPU==1){
			printf("SCHOLARSHIP=1.5L\n");
			printf("You are eligible for EDB Benifit worth 10000");
			}
			else if(twelve>=90 || LPU==2){
			printf("SCHOLARSHIP=1L\n");
			printf("You are eligible for EDB Benifit worth 10000");
			}
			else if(twelve>=80 || LPU==3){
			printf("SCHOLARSHIP=80K\n");
			printf("You are eligible for EDB Benifit worth 10000");
			}
			else if(twelve>=70 || LPU==4){
			printf("SCHOLARSHIP=60K\n");
			printf("You are eligible for EDB Benifit worth 10000");
			}
			else{
			printf("SCHOLARSHIP=0\n");
			printf("You are eligible for EDB Benifit worth 10000");
			}		
			break;
			
	case 2:if(twelve>=98 || LPU==1){
			printf("SCHOLARSHIP=1.4L\n");
			printf("You are eligible for EDB Benifit worth 5000");
	}
			else if(twelve>=90 || LPU==2){
			printf("SCHOLARSHIP=90K\n");
			printf("You are eligible for EDB Benifit worth 5000");
	}
			else if(twelve>=80 || LPU==3){
			printf("SCHOLARSHIP=70K\n");
			printf("You are eligible for EDB Benifit worth 5000");
	}
			else if(twelve>=70 || LPU==4){
			printf("SCHOLARSHIP=50K\n");
			printf("You are eligible for EDB Benifit worth 5000");
	}
			else{
			printf("SCHOLARSHIP=0\n");
			printf("You are eligible for EDB Benifit worth 5000");
	}			break;
	
	case 3:if(twelve>=98 || LPU==1)
			printf("SCHOLARSHIP=1.4L\n");
		
			else if(twelve>=90 || LPU==2)
			printf("SCHOLARSHIP=90K\n");
		
			else if(twelve>=80 || LPU==3)
			printf("SCHOLARSHIP=70K\n");
		
			else if(twelve>=70 || LPU==4)
			printf("SCHOLARSHIP=50K\n");
		
			else
			printf("SCHOLARSHIP=0\n");
			break;
			
	case 4:if(twelve>=98 || LPU==1)
			printf("SCHOLARSHIP=1.3L\n");
		
			else if(twelve>=90 || LPU==2)
			printf("SCHOLARSHIP=80K\n");
		
			else if(twelve>=80 || LPU==3)
			printf("SCHOLARSHIP=60K\n");
		
			else if(twelve>=70 || LPU==4)
			printf("SCHOLARSHIP=40K\n");
		
			else
			printf("SCHOLARSHIP=0\n");
			break;
			
	default:printf("INVALID ENTRY\n");
			break;
	}
}
else{
	printf("You are not eligible for admission");
}

printf("\n\n\t\t*****************************************\n\t\t*\t\t\t\t\t*\n");
printf("\t\t*\t\tThankyou\t\t*");
printf("\n\t\t*****************************************\n\n");
printf("\t\tProject prepared by:\n\n");
printf("\t\t\t\tDebashish");
printf("\n\t\t*****************************************\n\n");
	return 0;
}
