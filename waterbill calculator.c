/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int units;
float bill=0.0;

//prompt user for water units consumed
printf("Enter water units consumed");
scanf("%d",&units);
//calculate total bill using progressive slabs
if(units<=30){
    bill=units*20.0;
}
else if(units<=60){
    bill=(30*20.0)+((units-30)*25.0);
    
}
else{
    bill=(30*20.0)+(30*25.0)+((units-60)*30.0);
}
//displaying total bill formated to 2 decimal place
printf("Total water bill:%2f kes\n",bill);

    return 0;
}