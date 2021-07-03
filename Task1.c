#include<stdio.h>
//#include<stdlib.h>

void main(){      
	//Declaring variables
	FILE *file1; 
	FILE *file2;
	FILE *file3;
	FILE *file4;
	
	int i=0; 					
	double a,b,value,ans;
	double x,y,sqx,sqy;
	double sumX,sumY,sumXY;	
	
	file1=fopen("datasetLR1.txt","r");	//reading datasetLR1
	while(fscanf(file1,"%lf,%lf",&x,&y)!=EOF){
		
		i++;
		sumX = sumX + x;	//adding values of x into sumX
		sumY = sumY + y;	//adding values of Y into sumY 
		sqx = sqx + (x*x);	//adding square value of x into sqx
		sqy = sqy + (y*y);	//adding square value of y into sqy
		sumXY = sumXY + (x*y); //adding product of x and y to sumXY
	}
	fclose(file1); 	//Closing file file1
	
	
	file2=fopen("datasetLR2.txt","r");	//reading datasetLR2
	while(fscanf(file2,"%lf,%lf",&x,&y)!=EOF){
		
		i++;
		sumX = sumX + x;
		sumY = sumY + y;
		sqx = sqx + (x*x);
		sqy = sqy + (y*y);
		sumXY = sumXY + (x*y);
	}
	fclose(file2); 		
	
	
	
	file3=fopen("datasetLR3.txt","r");	//reading datasetLR3
	while(fscanf(file3,"%lf,%lf",&x,&y)!=EOF){
		
		i++;
		sumX = sumX + x;
		sumY = sumY + y;
		sqx = sqx + (x*x);
		sqy = sqy + (y*y);
		sumXY = sumXY + (x*y);
	}	
	fclose(file3); 
	
	
	file4=fopen("datasetLR4.txt","r");	//reading datasetLR4
	while(fscanf(file4,"%lf,%lf",&x,&y)!=EOF){
		
		i++;
		sumX = sumX + x;
		sumY = sumY + y;
		sqx = sqx + (x*x);
		sqy = sqy + (y*y);
		sumXY = sumXY + (x*y);
	}
	fclose(file4); 
	

	printf("Total data:%d\n",i); //total number of data
	printf("------------------------\n");
	
	//calculating value of a
	a=((sumY*sqx) -(sumX*sumXY))/((i*sqx)-((sumX)*(sumX)));
	//calculating value of b 
	b=((i*sumXY)-((sumX)*(sumY)))/((i*sqx)-((sumX)*(sumX))); 
	
	//Printing values of a and b
	printf("Value of a:%.2lf\n",a);  
	printf("Value of b:%.2lf\n",b); 
	printf("------------------------\n");
	
	printf("The Final equation:\t %.2lf * x + %.2lf\n",b,a); //Printing final equation of a and b
	printf("================================================\n");
	printf("\n\nEnter the value of x:"); //asking user for value of x
	scanf("%lf",&value); //scanning user input
	
	y=b*value+a; //Final equation 
	printf("\nFinalvalue of y is:%.2lf",y);

}
