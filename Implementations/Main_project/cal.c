#include<stdio.h>
#include "my.h"

float BMI(int,float);
float BMI2(int,float);
float BMI3(int,float);
float BMI4(int,float);
int main()
{
	
	  
    int weight;
   float height;
    char operator;
   
   
    
  /// printf(" 1 for enter your height in cm");
  //  printf(" 2 for enter your height in m");
    
    
     printf("Press 1 to enter heihgt in Meter and weight in kg \n press  2 for enter your height in CM and weight in kg \n press 3 for enter your weight in LBS and height in cm \n press 4 to enter your weight in lbs and height in meter ");
    scanf("%c", &operator);
    
   
    
    
switch(operator)
{
    case '1':
     
     printf("please enter your weight in kg:");
    printf("\n");
    scanf("%d",&weight);
    printf("please enter your height  in Meter:");
    printf("\n");
    scanf("%f",&height);
    
       BMI(weight,height);
       break;
       
       
       case '2':
       
         printf("please enter your weight in kg:");
    printf("\n");
    scanf("%d",&weight);
    printf("please enter your height  in cm:");
    printf("\n");
    scanf("%f",&height);
   
   
   int wig=weight*1000;
   
    
    BMI2(wig,height);
    break;
       
       case '3':
       
       
        printf("please enter your weight in lbs:");
    printf("\n");
    scanf("%d",&weight);
    printf("please enter your height  in cm:");
    printf("\n");
    scanf("%f",&height);
     BMI3(weight,height);
    break;
    
    case '4':
    
    
        printf("please enter your weight in lbs:");
    printf("\n");
    scanf("%d",&weight);
    printf("please enter your height  in meter:");
    printf("\n");
    scanf("%f",&height);
     BMI4(weight,height);
    break;
    
    

       
       
       
       
       
       default:
       printf("enter valid choic");
    
}

     	
	
}
