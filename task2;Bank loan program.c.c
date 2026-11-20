
#include<stdio.h>

int main(){
    int age;
    double annualIncome;
    //prompting the customer for age and annual annualIncome
    printf("Enter your age");
    scanf("%d",&age);
    
    printf("Enter your annual income(in sh)");
    scanf("%lf",&annualIncome);
    
    //checking loan qualification criteria
    if(age>=21&&annualIncome>=21000){
        printf("congratulations you qualify for a loan\n");
    }else{ 
        printf("unfortunitely,we are unable to qualify for a loan\n");
        
    }
    
    return 0;//indicates successfull program execution 
    
    }