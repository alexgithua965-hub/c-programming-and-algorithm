/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
float attendance,average_marks;
//prompt the user for attendance and average marks 
printf("Enter student's attendance percentage");
scanf("%F",&attendance);

printf("Enter student's average marks\n");
scanf("%f",&average_marks);
//checking the eligibility
if(attendance>=75&&average_marks>=40){
    printf("Not eligible\n");
}

    return 0;
}