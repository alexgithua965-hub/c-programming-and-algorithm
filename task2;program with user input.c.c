
#include<stdio.h>
int main(){
    float height;
    double bankBalance;
    char phoneNumber[20];//using a string preserves leading zeros(eg.,07...)
    //prompting the user for inputs
    printf("Enter your height(in meters or centimeters)");
    scanf("%f",&height);
    printf("Enter your bank balance(in kenya shillings)");
    scanf("%lf",&bankBalance);
    printf("Enter your phone number");
    scanf("%19s",&phoneNumber);
    //displaying the collected details
    printf("\n=====user Details===\n");
    printf("Height %2f\n",height);
    printf("Bank Balance KES %2lf\n",bankBalance);
    printf("Phone Number %s\n",phoneNumber);
    
    return 0;//indicates successfull program execution 
    
    }